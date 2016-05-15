package com.thuanviet.chemca.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.chemca.BitmapFont;
import com.thuanviet.chemca.Dialog;
import com.thuanviet.chemca.ChemFish;
import com.thuanviet.chemca.GameLayer;
import com.thuanviet.chemca.GameLib;
import com.thuanviet.chemca.GameViewThread;
import com.thuanviet.chemca.IConstant;
import com.thuanviet.chemca.SoundManager;
import com.thuanviet.chemca.gameplay.GamePlay;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateWinLose extends ChemFish
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isWin = false;
	public static Bitmap BitmapGameOver;
	

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			if (BitmapGameOver == null)
				BitmapGameOver = GameLib.loadImageFromAsset("image/gameover.png");
			
			ChemFish.mainActivity.saveGame();
			ChemFish.mLevelUnlock++;
			SoundManager.pausesoundLoop(1);
		//	if (isWin)
				SoundManager.playSound(SoundManager.SOUND_WIN, 1);
		//	else
			//	SoundManager.playSound(SoundManager.SOUND_LOSE, 1);

			//Log.d("USER NAME", "User : "+ username);
			DEF.WINLOSE_BACKGROUND_W = SCREEN_WIDTH;
			DEF.WINLOSE_BACKGROUND_H = SCREEN_HEIGHT / 6 * 4;
			DEF.WINLOSE_BACKGROUND_X = 0;
			DEF.WINLOSE_BACKGROUND_Y = (SCREEN_HEIGHT - DEF.WINLOSE_BACKGROUND_H) / 2;

			rectF = new RectF(DEF.WINLOSE_BACKGROUND_X, DEF.WINLOSE_BACKGROUND_Y, DEF.WINLOSE_BACKGROUND_X + DEF.WINLOSE_BACKGROUND_W, DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H);
			DEF.WINLOSE_TITLE_Y = DEF.WINLOSE_BACKGROUND_Y + 1;
			DEF.WINLOSE_CONTENT_Y = DEF.WINLOSE_TITLE_Y ; 

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_Y1 = (int)(500*scaleY);
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			//ChemFish.mainActivity.ShowAdmobFull();
			break;
		case MESSAGE_UPDATE:
			if (frameCountCurrentState < 20)
				return;			
			if (ChemFish.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
			{	StateGameplay.mcurrentlevel = 1; 
				changeState(STATE_GAMEPLAY);
			}

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || ChemFish.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);
			
			////here for leaderBoard
			//if (ChemFish.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {					
			//		changeState(STATE_LEADERBOARD);
			//	}
			//end here for leaderBoard

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			//ChemFish.mainPaint.setStyle(Style.FILL);
			//ChemFish.mainPaint.setARGB(220, 0, 0, 0);
			//ChemFish.mainCanvas.drawRect(0, 0, ChemFish.SCREEN_WIDTH, ChemFish.SCREEN_HEIGHT, ChemFish.mainPaint);
			
			matrix.reset();
			float scaleMaster = SCREEN_WIDTH / 1280f;
			float scale = (1.0f * frameCountCurrentState) / 20;
			scale = scale * scaleMaster;
			if (scale > scaleMaster)
				scale = scaleMaster;
			matrix.setScale(scale, scale);
			matrix.postTranslate((SCREEN_WIDTH - scale * BitmapGameOver.getWidth()) / 2, (SCREEN_HEIGHT - scale * BitmapGameOver.getHeight()) / 2);
			mainPaint.setAntiAlias(true);
			mainPaint.setFilterBitmap(true);
			mainPaint.setDither(true);
			
			ChemFish.mainCanvas.drawBitmap(BitmapGameOver, matrix, ChemFish.mainPaint);
			
			if (scale >= scaleMaster)
			{
				mainCanvas.drawText( "ĐIỂM : " + GamePlay.mAllScore,SCREEN_WIDTH/2, (int)(scaleY*380), android_FontBig);
				if(GameViewThread.timeCurrent%1000>500)
					mainCanvas.drawText( "VÀO XẾP HẠNG ĐỂ XEM THÀNH TÍCH",SCREEN_WIDTH/2, (int)(scaleY*480) , android_FontNormal);
			}
			//mainCanvas.drawText( "TOUCH SCREEN TO CONTUINUE",SCREEN_WIDTH/2, (int)(scaleY*500), android_FontNormal);
						
			
			if(frameCountCurrentState > 20)
			{
				if (ChemFish.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
	
				if (ChemFish.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				else
					spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				//here for leaderBoard
				//if (ChemFish.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				//	spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
				//else
				//	spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
				//ernd //here for leaderBoard
			}
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

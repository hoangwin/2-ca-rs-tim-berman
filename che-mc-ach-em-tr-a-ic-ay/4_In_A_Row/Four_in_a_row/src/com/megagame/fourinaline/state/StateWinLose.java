package com.megagame.fourinaline.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fourinaline.BitmapFont;
import com.megagame.fourinaline.Dialog;
import com.megagame.fourinaline.FourInALine;
import com.megagame.fourinaline.GameLayer;
import com.megagame.fourinaline.GameLib;
import com.megagame.fourinaline.GameThread;
import com.megagame.fourinaline.IConstant;
import com.megagame.fourinaline.Map;
import com.megagame.fourinaline.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateWinLose extends FourInALine
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isWin = false;
	public static Bitmap finishwin;
	public static Bitmap finishlose;
	public static Bitmap finishplayer1win;
	public static Bitmap finishplayer2win;
	public static Bitmap bitmap;
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			if (finishwin == null)
			{
				finishwin = GameLib.loadImageFromAsset("image/winanim.png");
				finishwin = Bitmap.createScaledBitmap(finishwin, finishwin.getWidth()*SCREEN_WIDTH/800,  finishwin.getHeight()*SCREEN_WIDTH/1280, true);
			}
			
			if (finishlose == null)
			{
				finishlose = GameLib.loadImageFromAsset("image/loseanim.png");
				finishlose = Bitmap.createScaledBitmap(finishlose, finishlose.getWidth()*SCREEN_WIDTH/800,  finishlose.getHeight()*SCREEN_WIDTH/1280, true);
			}
			
			if (finishplayer1win == null)
			{
				finishplayer1win = GameLib.loadImageFromAsset("image/player1win.png");
				finishplayer1win = Bitmap.createScaledBitmap(finishplayer1win, finishplayer1win.getWidth()*SCREEN_WIDTH/800,  finishplayer1win.getHeight()*SCREEN_WIDTH/1280, true);
			}
			if (finishplayer2win == null)
			{
				finishplayer2win = GameLib.loadImageFromAsset("image/player2win.png");
				finishplayer2win = Bitmap.createScaledBitmap(finishplayer2win, finishplayer2win.getWidth()*SCREEN_WIDTH/800,  finishplayer2win.getHeight()*SCREEN_WIDTH/1280, true);
			}
			FourInALine.mainActivity.saveGame();
			if(StateGameplay.gameMode ==1)
				if(FourInALine.mcurrentlevel >= FourInALine.mLevelUnlock)
					FourInALine.mLevelUnlock++;
			SoundManager.pausesoundLoop(0);
			//if (isWin)
				SoundManager.playSound(SoundManager.SOUND_WIN, 1);
			//else
			//	SoundManager.playSound(SoundManager.SOUND_LOSE, 1);

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;
			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;
			DEF.WINLOSE_BUTTON_Y1 = (int) (1000 * SCREEN_HEIGHT * 1.0 / 1280);
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			if(Map.isPlayer1WIn )
			{
				if(StateGameplay.gameMode == 0)
				{
					bitmap = finishwin;
				}
				else
				{
					bitmap = finishplayer1win;
				}
			}else
			{
				if(StateGameplay.gameMode == 0)
				{
					bitmap = finishlose;
				}
				else
				{
					bitmap = finishplayer2win;
				}
			}
			break;
		case MESSAGE_UPDATE:
			if (frameCountCurrentState < 20)
				return;
			if (FourInALine.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FourInALine.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);
			
			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) { 
				Dialog.drawDialog(mainCanvas); 
				return;
			}

			//FourInALine.mainPaint.setStyle(Style.FILL);
			//FourInALine.mainPaint.setARGB(220, 0, 0, 0);
			//FourInALine.mainCanvas.drawRect(0, 0, FourInALine.SCREEN_WIDTH, FourInALine.SCREEN_HEIGHT, FourInALine.mainPaint);
			//FishRescue.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//FishRescue.mainPaint.setColor(Color.rgb(67, 120, 167));
			//FishRescue.mainCanvas.drawRoundRect(rectF, 25, 25, FishRescue.mainPaint);//WINLOSE_TITLE_CONTENT_SPACE_H
			//matrix.reset();
			
			
			
			frameCountCurrentState += SCREEN_WIDTH/20;
			if(SCREEN_HEIGHT / 2 < frameCountCurrentState)
				frameCountCurrentState = SCREEN_HEIGHT/2;
			
		
			
			int tempHeight = frameCountCurrentState - bitmap.getHeight()/2;
			int tempwidth = SCREEN_WIDTH/2 - bitmap.getWidth()/2;
			mainCanvas.drawBitmap(bitmap,tempwidth,tempHeight,mainPaint); 
				 tempHeight = FourInALine.fontbig_White.getFontHeight();
				FourInALine.fontbig_White.drawString(FourInALine.mainCanvas, "COMPLETED", SCREEN_WIDTH / 2, tempHeight / 2, BitmapFont.ALIGN_CENTER);
				//FourInALine.fontbig_White.drawString(FourInALine.mainCanvas, ""+ Map.score, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + tempHeight / 2, BitmapFont.ALIGN_CENTER);

				if (!FourInALine.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

				if (!FourInALine.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				else
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

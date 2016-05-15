package com.thuanviet.ngoisao.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.ngoisao.BitmapFont;
import com.thuanviet.ngoisao.DEF;
import com.thuanviet.ngoisao.Dialog;
import com.thuanviet.ngoisao.GameLayer;
import com.thuanviet.ngoisao.GameLib;
import com.thuanviet.ngoisao.GameThread;
import com.thuanviet.ngoisao.IConstant;
import com.thuanviet.ngoisao.Map;
import com.thuanviet.ngoisao.PopStar;
import com.thuanviet.ngoisao.SoundManager;


import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateWinLose extends PopStar
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isWin = false;
	public static Bitmap bitmapWin;
	public static Bitmap bitmaplose;
	public static int anim_x = 0;
	public static int anim_y = 0;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			if (bitmapWin == null)
			{
				bitmapWin = GameLib.loadImageFromAsset("image/winanim.png");
				bitmapWin = Bitmap.createScaledBitmap(bitmapWin, (int)(bitmapWin.getWidth()*scaleX),(int)( bitmapWin.getHeight()*scaleX), true);
			}
			
			if (bitmaplose == null)
			{
				bitmaplose = GameLib.loadImageFromAsset("image/completed.png");
				bitmaplose = Bitmap.createScaledBitmap(bitmaplose, (int)(bitmaplose.getWidth()*scaleX),(int)( bitmaplose.getHeight()*scaleX), true);
			}
			

			PopStar.mainActivity.saveGame();
			if(StateGameplay.gameMode ==1)
				if(PopStar.mcurrentlevel >= PopStar.mLevelUnlock)
					PopStar.mLevelUnlock++;
			SoundManager.pausesoundLoop(0);
			if (isWin)
			{
				anim_x = (SCREEN_WIDTH - bitmapWin.getWidth())/2;
				SoundManager.playSound(SoundManager.SOUND_WIN, 1);
			}
			else
			{
				anim_x = (SCREEN_WIDTH - bitmaplose.getWidth())/2;
				SoundManager.playSound(SoundManager.SOUND_LOSE, 1);
			}
			
			anim_y = (int)(-100*scaleY); 

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;
			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;
			DEF.WINLOSE_BUTTON_Y1 = (int) (900 * SCREEN_HEIGHT * 1.0 / 1280);
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			break;
		case MESSAGE_UPDATE:
			if (frameCountCurrentState < 20)
				return;
			if (PopStar.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || PopStar.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);
			if (PopStar.mcurrentlevel < 15 && isWin)
				if (PopStar.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
					PopStar.mcurrentlevel++;
					changeState(STATE_HINT);
				}

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas); 
				return;
			}

			PopStar.mainPaint.setStyle(Style.FILL);
			PopStar.mainPaint.setARGB(170, 0, 0, 0);
			PopStar.mainCanvas.drawRect(0, 0, PopStar.SCREEN_WIDTH, PopStar.SCREEN_HEIGHT, PopStar.mainPaint);
			//FishRescue.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//FishRescue.mainPaint.setColor(Color.rgb(67, 120, 167));
			//FishRescue.mainCanvas.drawRoundRect(rectF, 25, 25, FishRescue.mainPaint);//WINLOSE_TITLE_CONTENT_SPACE_H
			mainPaint.setAlpha(255);
			anim_y += (20*scaleY);
			
			if(anim_y>= 100*scaleY)
				anim_y = (int)(100*scaleY);
				
			if(isWin)
				PopStar.mainCanvas.drawBitmap(bitmapWin, anim_x,anim_y, PopStar.mainPaint);
			else
				PopStar.mainCanvas.drawBitmap(bitmaplose, anim_x,anim_y, PopStar.mainPaint);
			//draw text
			if(anim_y>= (int)(100*scaleY)) {
				int tempHeight = PopStar.fontbig_White.getFontHeight();
				Rect textBounds =  new  Rect();
				android_FontBig.getTextBounds("Maig", 0, "Maig".length(), textBounds);
				mainCanvas.drawText( "ĐIỂM :",  SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 -  textBounds.height(), android_FontBig);
				if(StateGameplay.gameMode == 2)					
					mainCanvas.drawText(  ""+ Map.mTopScore,  SCREEN_WIDTH / 2,SCREEN_HEIGHT / 2, android_FontBig);
				else
					mainCanvas.drawText(  ""+ Map.score,  SCREEN_WIDTH / 2,SCREEN_HEIGHT / 2, android_FontBig);
				//Monster.fontbig_White.drawString(Monster.mainCanvas, "YOUR SCORE :", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - tempHeight / 2, BitmapFont.ALIGN_CENTER);
				//Monster.fontbig_White.drawString(Monster.mainCanvas, ""+ Map.score, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + tempHeight / 2, BitmapFont.ALIGN_CENTER);

				if (!PopStar.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

				if (!PopStar.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				else
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				if (PopStar.mcurrentlevel < 15 && isWin)
					if (!PopStar.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
						StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_RIGHT_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
					else
						StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_RIGHT_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
			}
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

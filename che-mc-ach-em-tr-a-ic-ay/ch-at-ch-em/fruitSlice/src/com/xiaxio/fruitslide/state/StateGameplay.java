package com.xiaxio.fruitslide.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.fruitslide.BitmapFont;
import com.xiaxio.fruitslide.FruitSlide;
import com.xiaxio.fruitslide.Dialog;
import com.xiaxio.fruitslide.GameLayer;
import com.xiaxio.fruitslide.GameLib;
import com.xiaxio.fruitslide.GameViewThread;
import com.xiaxio.fruitslide.IConstant;
import com.xiaxio.fruitslide.SoundManager;
import com.xiaxio.fruitslide.Sprite;
import com.xiaxio.fruitslide.actor.FishSimple;
import com.xiaxio.fruitslide.gameplay.GamePlay;

import resolution.DEF;

import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends FruitSlide
{
	
	public static Bitmap backgroundImage[] = {null,null,null,null};
	
	public static boolean isIngame = false;
	public static long timepause;
	public static int HUI_INFO_H = (int)(scaleY*66);
	public static int HUI_INFO_TEXT_Y =  (int)(50*scaleY);
	public static int HUI_INFO_TAGET_X =  (int)(300*scaleX);
	public static int HUI_INFO_LIVE_X =  (int)(750*scaleX);
	public static int HUI_INFO_STAGE_X =  (int)(920*scaleX);
	public static boolean isNextlevel = false;
	
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:

			// image/character/character_1.png
			isIngame = true;
			
			GamePlay.init();
			DEF.LABEL_SCORE_Y = (int)(scaleY*40);

			// SoundManager.stopSound(SoundManager.SOUND_TITLE);
			// SoundManager.mMediaPlayer
			SoundManager.playsoundLoop(1, true);
			// clean wall in map
			// GameLayer.arrayListDataMap.get(0)[6][6] = -1;
			// GameLayer.arrayListDataMap.get(0)[7][6] = -1;

			// Log.d("map.doorExit_Row"," " + map.doorExit_Row);
			// Log.d("map.doorExit_Col"," " + map.doorExit_Col);
			
			break;
		case MESSAGE_UPDATE:
			// cheat
			if(isNextlevel) 
			{
				if(FruitSlide.isTouchPressScreen())
					isNextlevel = false;
				return;
			}

			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				StateWinLose.isWin = true;
				FruitSlide.changeState(IConstant.STATE_WINLOSE);

			}
			// end cheat
			if (Dialog.isShowDialog)
				return;
			GamePlay.Update();
			updatetouch();

			break;

		case MESSAGE_PAINT:			
			if (backgroundImage != null)
				mainCanvas.drawBitmap(backgroundImage[(mcurrentlevel-1)%4], 0,0, mainPaint);
			//bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);
			// PikachuActivityHD.mainPaint.setStyle(Style.FILL);
			// PikachuActivityHD.mainPaint.setARGB(130, 0, 0, 0);
			// PikachuActivityHD.mainCanvas.drawRect(0, 0,
			// PikachuActivityHD.SCREEN_WIDTH, PikachuActivityHD.SCREEN_HEIGHT,
			// PikachuActivityHD.mainPaint);

			// Map.drawMap(canvasScreenBuffer);
			if(mCurrentState ==  STATE_GAMEPLAY)
				GamePlay.DrawGame(mainCanvas);
			
			mainPaint.setAlpha(255);
		//	mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);

			// mainPaint.setStyle(Style.FILL);
			// mainPaint.setARGB(150, 0, 0, 0);
			// mainCanvas.drawRect(0, 0, SCREEN_WIDTH, DEF.BUTTON_IGM_H +
			// DEF.BUTTON_IGM_H/4, mainPaint);
			// mainPaint.setAlpha(255);
			drawHUD(mainCanvas);
			if(isNextlevel)
			{
				FishSimple.sprite.drawAFrame(mainCanvas, 28, (int)(scaleX*200), (int)(scaleY*200));
				mainCanvas.drawText( "NEXT STAGE",SCREEN_WIDTH/2, (int)(scaleY*300), android_FontBig);
				mainCanvas.drawText( "SCORE: " + GamePlay.mAllScore,SCREEN_WIDTH/2, (int)(scaleY*400) , android_FontNormal);
				if(GameViewThread.timeCurrent%1000>500)
					mainCanvas.drawText( "TOUCH SCREEN TO CONTINUE",SCREEN_WIDTH/2, (int)(scaleY*500), android_FontNormal);
			}
			break;
		case MESSAGE_DTOR:
			isIngame = false;
			break;
		}
	}

	public static void drawHUD(Canvas c)
	{
		Rect textBounds =  new  Rect();
		android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
		///////////////////////////////////////////////////////////////////////////
		
			
		///////////////////////////////////////////////////////////////////////////

		mainPaint.setColor(Color.argb(100, 45, 45, 55));
		c.drawRect(0, 0, SCREEN_WIDTH, HUI_INFO_H,mainPaint);
		mainPaint.setAlpha(255);
		android_FontSmall.setTextAlign(Align.LEFT);
		android_FontSmall.setColor(Color.rgb(255, 235, 184));
		c.drawText( "SCORE:" + GamePlay.mAllScore,2,HUI_INFO_TEXT_Y, android_FontSmall);
		android_FontSmall.setTextAlign(Align.LEFT);
		
		c.drawText( "TARGET:" + GamePlay.mLevelScore[mcurrentlevel],HUI_INFO_TAGET_X,HUI_INFO_TEXT_Y, android_FontSmall);
		c.drawText( "LIVE:" + (3-GamePlay.mCountLive),HUI_INFO_LIVE_X,HUI_INFO_TEXT_Y, android_FontSmall);
		c.drawText( "STAGE:" + mcurrentlevel,HUI_INFO_STAGE_X,HUI_INFO_TEXT_Y, android_FontSmall);
		if(mCurrentState ==  STATE_GAMEPLAY)
		{		
			if (isTouchDrapInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
				spriteDPad.drawAFrame(FruitSlide.mainCanvas, DEF.FRAME_PAUSE_HIGHTLIGHT, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);
			else
				spriteDPad.drawAFrame(FruitSlide.mainCanvas, DEF.FRAME_PAUSE_NORMAL, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);
		}
		android_FontSmall.setColor(Color.WHITE);
	}

	public static void updatetouch()
	{
		if (isKeyReleased(KeyEvent.KEYCODE_BACK) || isTouchReleaseInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H)) {
			changeState(STATE_IGM, true, false);
		}

	}
	// set position of dpad

}

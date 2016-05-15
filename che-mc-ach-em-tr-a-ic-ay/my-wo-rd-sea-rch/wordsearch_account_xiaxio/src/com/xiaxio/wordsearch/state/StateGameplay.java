package com.xiaxio.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.wordsearch.BitmapFont;
import com.xiaxio.wordsearch.Dialog;
import com.xiaxio.wordsearch.GameLayer;
import com.xiaxio.wordsearch.GameLib;
import com.xiaxio.wordsearch.GameThread;
import com.xiaxio.wordsearch.IConstant;
import com.xiaxio.wordsearch.SoundManager;
import com.xiaxio.wordsearch.Sprite;
import com.xiaxio.wordsearch.WordSearchActivity;
import com.xiaxio.wordsearch.game.Map;


import resolution.DEF;

import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.graphics.Rect;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends WordSearchActivity {
	
	public static Bitmap backgroundImage;
	public static Sprite spriteDPad = null;
	public static Sprite spriteUi = null;
	
	
	public static boolean isIngame = false;
	public static long timepause;
	public static int countFrameEffectWhenWin = -1;
	public static long mTimerCount = 0;
	public static synchronized void SendMessage(int type) {

		switch (type) {
		case MESSAGE_CTOR:
			// image/character/character_1.png
			isIngame = true;
			if (backgroundImage != null)
				backgroundImage.recycle();
			backgroundImage = null;
			Random a = new Random();
			int r = a.nextInt(5) + 1;
			a = null;
			// Log.d("aaaaaaaaaaaaaaaaaaa","  "+r);
			if(backgroundImage == null)
			{
				mainPaint.setAntiAlias(true);
				mainPaint.setFilterBitmap(true);
				mainPaint.setDither(true);
				backgroundImage = loadImageFromAsset("image/screen/screen1.jpg");
				backgroundImage = Bitmap.createScaledBitmap(backgroundImage,SCREEN_WIDTH, SCREEN_HEIGHT, true);			
			}
			Map.initGameLevel();
			mTimerCount = 0;
			DEF.LABEL_SCORE_Y = (int)(60*scaleY);			
			//SoundManager.playsoundLoop(1, true);	
			SoundManager.playSound(SoundManager.SOUND_BEGIN, 1);

			break;
		case MESSAGE_UPDATE:
			// cheat
			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				WordSearchActivity.changeState(IConstant.STATE_COMPLETELEVEL);

			}
			// end cheat
			if (Dialog.isShowDialog)
				return;
			mTimerCount += GameThread.timeCurrent - GameThread.timePrev;
			if(countFrameEffectWhenWin >= 0)
			{
				countFrameEffectWhenWin--;
				if(countFrameEffectWhenWin <0)
					changeState(WordSearchActivity.STATE_COMPLETELEVEL);
			}
			Map.Update();
			updatetouch();

			break;

		case MESSAGE_PAINT:
			matrix.reset();
			if (backgroundImage != null)
				mainCanvas.drawBitmap(backgroundImage, matrix, mainPaint);
			bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);
			// PikachuActivityHD.mainPaint.setStyle(Style.FILL);
			// PikachuActivityHD.mainPaint.setARGB(130, 0, 0, 0);
			// PikachuActivityHD.mainCanvas.drawRect(0, 0,
			// PikachuActivityHD.SCREEN_WIDTH, PikachuActivityHD.SCREEN_HEIGHT,
			// PikachuActivityHD.mainPaint);

			// Map.drawMap(canvasScreenBuffer);
			Map.DrawGame(canvasScreenBuffer);
			// PikachuActivity.matrix.postScale(SCREEN_WIDTH / 1024f,
			// SCREEN_HEIGHT / 600f);//dua vap file map
			mainPaint.setAlpha(255);
			mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);

			// mainPaint.setStyle(Style.FILL);
			// mainPaint.setARGB(150, 0, 0, 0);
			// mainCanvas.drawRect(0, 0, SCREEN_WIDTH, DEF.BUTTON_IGM_H +
			// DEF.BUTTON_IGM_H/4, mainPaint);
			// mainPaint.setAlpha(255);
			drawHUD(mainCanvas);
			break;
		case MESSAGE_DTOR:
			isIngame = false;
			break;
		}
	}

	public static void drawHUD(Canvas c) {
		// draw pause button
		if (isTouchDrapInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y,
				DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(WordSearchActivity.mainCanvas,
					DEF.FRAME_PAUSE_HIGHTLIGHT, DEF.BUTTON_IGM_X,
					DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_PAUSE_NORMAL,
					DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);	
		
		Rect textBounds = new  Rect();
		android_FontSmall.setColor(Color.WHITE);
		android_FontSmall.setTextAlign(Align.LEFT);
		android_FontSmall.getTextBounds("Maig", 0, "Maig".length(), textBounds);		
		spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_TEXT_BAR,0,0); 
		mainCanvas.drawText("Time : " + getStringTimer((int)(mTimerCount/1000)), 10, spriteDPad.getFrameHeight(DEF.FRAME_TEXT_BAR)/2 + textBounds.height()/2, android_FontSmall);
		
		android_FontSmall.setTextAlign(Align.RIGHT);
		mainCanvas.drawText("Score : " + Map.mStateScole, spriteDPad.getFrameWidth(DEF.FRAME_TEXT_BAR)-10, spriteDPad.getFrameHeight(DEF.FRAME_TEXT_BAR)/2 + textBounds.height()/2, android_FontSmall);
		
		spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_TEXT_BAR,0,spriteDPad.getFrameHeight(DEF.FRAME_TEXT_BAR)); 
		
		if(Map.isEnableDrap)
			{
			android_FontSmall.setTextAlign(Align.CENTER);
		android_FontSmall.setColor(Color.WHITE);
		String strDrap = Map.GetTextDrap(Map.DrapBeginCol,Map.DrapBeginRow,Map.DrapEndCol,Map.DrapEndRow);
		mainCanvas.drawText(strDrap, spriteDPad.getFrameWidth(DEF.FRAME_TEXT_BAR)/2, 3*spriteDPad.getFrameHeight(DEF.FRAME_TEXT_BAR)/2 + textBounds.height()/2, android_FontSmall);
			}
	}

	public static void updatetouch() {
		if (isKeyReleased(KeyEvent.KEYCODE_BACK)
				|| isTouchReleaseInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y,
						DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H)) {
			changeState(STATE_IGM, true, false);
		}

	}
	public static String getStringTimer(int seccond)
	{
		int _minute = seccond/60;
		int _seccond= seccond%60;
		String s= "";
		if(_minute >10)
			s +=_minute;
		else
			s += "0"+ _minute;
		
		if(_seccond >10)
			s +=":"+ _seccond;
		else
			s += ":0"+ _seccond;
		return s;
	}
	// set position of dpad

}

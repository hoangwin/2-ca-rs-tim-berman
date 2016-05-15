package com.thuanviet.onevs100.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.onevs100.BitmapFont;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.Dialog;
import com.thuanviet.onevs100.GameLayer;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.GameThread;
import com.thuanviet.onevs100.IConstant;
import com.thuanviet.onevs100.SoundManager;
import com.thuanviet.onevs100.Sprite;
import com.thuanviet.onevs100.game.Map;


import resolution.DEF;

import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.graphics.Rect;
import android.graphics.RectF;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends DauTruong100 {
	
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
			Map.countNumberPerson =100;
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
		//	Map.initGameLevel();			
			mTimerCount = 0;
			DEF.LABEL_SCORE_Y = (int)(60*scaleY);			
			//SoundManager.playsoundLoop(1, true);
			SoundManager.pausesoundLoop(0);
			SoundManager.stopLastSound();
			Map.subState = 0;
			SoundManager.playSound(SoundManager.SOUND_BEGIN, 1);
			Map.curentQuestion = 0;
			Map.curentQuestionID =  -1;
			Map.selectAnswer = -1;
			
			Map.isUsingshelpCanUse[0]=Map.isUsingshelpCanUse[1]=Map.isUsingshelpCanUse[2] = true;
			Map.isUsingshelp[0] = Map.isUsingshelp[1] = Map.isUsingshelp[2] = false;//{false,false,false};
			Map.isUsingHelpInThisQuest = false;

			break;
		case MESSAGE_UPDATE:
			// cheat
			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				DauTruong100.changeState(IConstant.STATE_COMPLETELEVEL);

			}
			// end cheat
			if (Dialog.isShowDialog)
				return;
			mTimerCount += GameThread.timeCurrent - GameThread.timePrev;			
			Map.Update();
			updatetouch();
			break;

		case MESSAGE_PAINT:
			matrix.reset();
			if (backgroundImage != null)
				mainCanvas.drawBitmap(backgroundImage, matrix, mainPaint);
			bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);
			//Map.DrawGame(canvasScreenBuffer);			
			//mainPaint.setAlpha(255);
			//mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);
			Map.drawGamePlay(mainCanvas);
			
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
			spriteDPad.drawAFrame(DauTruong100.mainCanvas,
					DEF.FRAME_PAUSE_HIGHTLIGHT, DEF.BUTTON_IGM_X,
					DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_PAUSE_NORMAL,
					DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);
		
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
	// //text
	
	public static void drawMultilineText(String str, int x, int y, Paint paint, Canvas canvas, int fontSize, Rect drawSpace) {
		    int      lineHeight = 0;
		    int      yoffset    = 0;
		    String[] lines      = str.split(" ");

		    // set height of each line (height of text + 20%)
		    lineHeight = (int) (calculateHeightFromFontSize(str, fontSize) * 0.9);
		    // draw each line
		    String line = "";
		    for (int i = 0; i < lines.length; ++i) {

		        if(calculateWidthFromFontSize(line + " " + lines[i], fontSize) <= drawSpace.width()){
		            line = line + " " + lines[i];

		        }else{
		            canvas.drawText(line, x, y + yoffset, paint);
		            yoffset = yoffset + lineHeight;
		            line = lines[i];
		        }
		    }
		    canvas.drawText(line, x, y + yoffset, paint);

		}

	public static int calculateWidthFromFontSize(String testString, int currentSize)
		{
		    Rect bounds = new Rect();
		    Paint paint = new Paint();
		    paint.setTextSize(currentSize);
		    paint.getTextBounds(testString, 0, testString.length(), bounds);

		    return (int) Math.ceil( bounds.width());
		}

		public static int calculateHeightFromFontSize(String testString, int currentSize)
		{
		    Rect bounds = new Rect();
		    Paint paint = new Paint();
		    paint.setTextSize(currentSize);
		    paint.getTextBounds(testString, 0, testString.length(), bounds);

		    return (int) Math.ceil( bounds.height());
		}

}

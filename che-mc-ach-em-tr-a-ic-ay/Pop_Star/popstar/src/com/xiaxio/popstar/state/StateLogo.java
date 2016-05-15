package com.xiaxio.popstar.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.popstar.BitmapFont;
import com.xiaxio.popstar.DEF;
import com.xiaxio.popstar.Dialog;
import com.xiaxio.popstar.GameLayer;
import com.xiaxio.popstar.GameLib;
import com.xiaxio.popstar.IConstant;
import com.xiaxio.popstar.Map;
import com.xiaxio.popstar.PopStar;
import com.xiaxio.popstar.SoundManager;
import com.xiaxio.popstar.Sprite;


import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Bitmap.Config;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.graphics.Typeface;
import android.view.KeyEvent;

public class StateLogo extends PopStar implements IConstant
{
	public static Bitmap logoBitmap = null;
	public static long timer = 0;
	public static int loadingStep = 0;
	public static String sizePreFix = "";
	public static float scalex = SCREEN_WIDTH*1.0f/800;
	public static float scaley = SCREEN_HEIGHT*1.0f/1280;
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			if (SCREEN_HEIGHT >= 1200) {
				sizePreFix = "1280x800";
			} else if (SCREEN_HEIGHT >= 1000) {
				sizePreFix = "1024x600";
			} else if (SCREEN_HEIGHT > 700) {
				sizePreFix = "800x480";
			} else if (SCREEN_HEIGHT > 440) {
				sizePreFix = "480x320";
			} else if (SCREEN_HEIGHT > 360) {
				sizePreFix = "400x240";
			} else {
				sizePreFix = "320x240";
			}
			
			

			timer = System.currentTimeMillis();
			//check pre fix
			scalex = SCREEN_WIDTH*1.0f/800;
			scaley = SCREEN_HEIGHT*1.0f/1280;
			loadingStep = 0;
			break;
		case MESSAGE_UPDATE:
			switch (loadingStep)
			{
			case 1:
				logoBitmap = loadImageFromAsset("image/logo.png");
				
				break;
			case 2:
				if (PopStar.fontbig_White == null)
					PopStar.fontbig_White = new BitmapFont("font/white_36.spr", true);				
				
				Typeface face;
				face = Typeface.createFromAsset(mainGameLib.getAssets(), "font/font.ttf");
				android_FontSmall.setTypeface(face);
				android_FontSmall.setAntiAlias(true);
				android_FontSmall.setDither(true);
				android_FontSmall.setTextSize((int)(40*scaleY));
				android_FontSmall.setColor(Color.WHITE);
				android_FontSmall.setTextAlign(Align.CENTER);
				
				android_FontNormal.setTypeface(face);
				android_FontNormal.setAntiAlias(true);
				android_FontNormal.setDither(true);
				android_FontNormal.setTextSize((int)(55*scaleY));
				android_FontNormal.setColor(Color.WHITE);
				android_FontNormal.setTextAlign(Align.CENTER);
				
				
				android_FontBig.setTypeface(face);
				android_FontBig.setAntiAlias(true);
				android_FontBig.setDither(true);
				android_FontBig.setTextSize((int)(90*scaleY));				
				android_FontBig.setColor(Color.rgb(244,235,100));
				android_FontBig.setTextAlign(Align.CENTER);
				break;
			case 4:
				SoundManager.getInstance();
				SoundManager.initSounds(PopStar.context);
				SoundManager.loadSounds();
				break;
			case 6:
				if (StateMainMenu.splashBitmap == null)
				{
					StateMainMenu.splashBitmap = loadImageFromAsset("image/splash.jpg");
					StateMainMenu.splashBitmap = Bitmap.createScaledBitmap(StateMainMenu.splashBitmap, SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				break;
			case 8:
				if (StateMainMenu.gameTitleBitmap == null){
					StateMainMenu.gameTitleBitmap = loadImageFromAsset("image/gametitle.png");
					StateMainMenu.gameTitleBitmap = Bitmap.createScaledBitmap(StateMainMenu.gameTitleBitmap, (int)(StateMainMenu.gameTitleBitmap.getWidth()*scaleX), (int)(StateMainMenu.gameTitleBitmap.getHeight()*scaleY), true);
				}
				break;
			case 10:

				if (StateHowToPlay.bitmapHowToplay == null) {
					StateHowToPlay.bitmapHowToplay = PopStar.loadImageFromAsset("image/howtoplay.png");
					StateHowToPlay.bitmapHowToplay = Bitmap.createScaledBitmap(StateHowToPlay.bitmapHowToplay, (int)(StateHowToPlay.bitmapHowToplay.getWidth()*scaleX), (int)(StateHowToPlay.bitmapHowToplay.getHeight()*scaleY), true);
				}
				break;
 
			case 12:

				if (StateGameplay.spriteDPad == null)
				{
					//StateGameplay.spriteDPad = new Sprite("sprite/ui/dpad_" + sizePreFix + ".sprite", true);
					StateGameplay.spriteDPad = new Sprite("sprite/ui/dpad_" + "1280x800"+ ".sprite", true,scalex, scaley);
				}

				break;
			case 14:
				//float scalex = SCREEN_WIDTH*1.0f/800;
				//float scaley = SCREEN_HEIGHT*1.0f/1280;
				if (StateGameplay.spriteFruit == null) {
					//StateGameplay.spriteFruit = new Sprite("sprite/ui/animal_" + sizePreFix + ".sprite", true);
				
					StateGameplay.spriteFruit = new Sprite("sprite/ui/animal_" + "1280x800" + ".sprite", true,scalex, scaley);

				}
				break;
			case 16:
				bitmapScreenBuffer = Bitmap.createBitmap(SCREEN_HEIGHT, SCREEN_HEIGHT, Config.ARGB_4444);
				canvasScreenBuffer = new Canvas(bitmapScreenBuffer);
				break;
			case 18://init all variable 
				DEF.DIALOG_BUTTON_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_BUTTON_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_RIGHT_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_RIGHT_NORMAL);

				DEF.BUTTON_IGM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL);
				DEF.BUTTON_IGM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_PAUSE_NORMAL);

				
				DEF.BUTTON_IGM_X = SCREEN_WIDTH - DEF.BUTTON_IGM_W - 5;
				DEF.BUTTON_IGM_Y = 2;
				//StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_0)

				//for map

				DEF.BUTTON_CANCEL_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_CANCEL_NORMAL);
				DEF.BUTTON_CANCEL_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_CANCEL_NORMAL);
				break;
			case 20:

			default:
				break;
			}
			loadingStep++;
			System.gc();
			if ((System.currentTimeMillis() - timer > 3500) && loadingStep > 25) {
				changeState(STATE_MAINMENU);

			}
			break;
		case MESSAGE_PAINT:
			PopStar.mainPaint.setColor(Color.BLACK);
			PopStar.mainPaint.setStyle(Style.FILL);
			mainCanvas.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, PopStar.mainPaint);
			PopStar.mainPaint.setColor(Color.WHITE);
			PopStar.mainPaint.setTextSize(20);
			matrix.reset();

			matrix.setScale(SCREEN_WIDTH * 1f / 800, SCREEN_HEIGHT * 1f / 1280);
			if (logoBitmap != null) {
				matrix.postTranslate((SCREEN_WIDTH - logoBitmap.getWidth() * SCREEN_WIDTH / 800) / 2, (SCREEN_HEIGHT - logoBitmap.getHeight() * SCREEN_HEIGHT / 1280) / 2);
				mainCanvas.drawBitmap(logoBitmap, matrix, mainPaint);
			}
			//matrix.reset();
			//matrix.setScale(SCREEN_WIDTH*1f/1280, SCREEN_HEIGHT*1f/800);
			//	mainCanvas.drawBitmap(logoBitmap, (SCREEN_WIDTH - logoBitmap.getWidth()) / 2, (SCREEN_HEIGHT - logoBitmap.getHeight()) / 2 - 20, mainPaint);
			//		mainCanvas.drawText(strString, 000, 100, mainPaint);

			break;
		case MESSAGE_DTOR:
			if(logoBitmap != null)
			{
				logoBitmap.recycle();
				logoBitmap = null;
			}
			break;
		}
	}
}

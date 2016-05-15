package com.xiaxio.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.wordsearch.BitmapFont;
import com.xiaxio.wordsearch.Dialog;
import com.xiaxio.wordsearch.GameLayer;
import com.xiaxio.wordsearch.GameLib;
import com.xiaxio.wordsearch.IConstant;
import com.xiaxio.wordsearch.SoundManager;
import com.xiaxio.wordsearch.Sprite;
import com.xiaxio.wordsearch.WordSearchActivity;
import com.xiaxio.wordsearch.game.Map;

import resolution.DEF;

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



public class StateLogo extends WordSearchActivity implements IConstant
{
	public static Bitmap logoBitmap = null;
	public static long timer = 0;
	public static int loadingStep = 0;
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:		
			logoBitmap = loadImageFromAsset("image/logo.png");
			loadingStep = 0;
			timer = System.currentTimeMillis();
			//check pre fix

			break;
		case MESSAGE_UPDATE:
			switch (loadingStep)
			{
			case 1:
				Typeface face;
				face = Typeface.createFromAsset(mainGameLib.getAssets(), "font/font.ttf");
				
				android_MenuFont.setTypeface(face);
				android_MenuFont.setAntiAlias(true);
				android_MenuFont.setDither(true);
				android_MenuFont.setTextSize((int)(75*scaleY));
				android_MenuFont.setColor(Color.WHITE);
				android_MenuFont.setTextAlign(Align.CENTER); 	
				
				android_FontSmall.setTypeface(face);
				android_FontSmall.setAntiAlias(true);
				android_FontSmall.setDither(true);
				android_FontSmall.setTextSize((int)(55*scaleY));
				android_FontSmall.setColor(Color.WHITE);
				android_FontSmall.setTextAlign(Align.CENTER);
				
				face = Typeface.createFromAsset(mainGameLib.getAssets(), "font/font.otf");
				
				android_FontNormal.setTypeface(face);
				android_FontNormal.setAntiAlias(true);
				android_FontNormal.setDither(true);
				android_FontNormal.setTextSize((int)(75*scaleY));
				android_FontNormal.setColor(Color.WHITE);
				android_FontNormal.setTextAlign(Align.CENTER); 				
				
				android_FontBig.setTypeface(face);
				android_FontBig.setAntiAlias(true);
				android_FontBig.setDither(true);
				android_FontBig.setTextSize((int)(90*scaleY));				
				android_FontBig.setColor(Color.rgb(148,105,49));
				android_FontBig.setTextAlign(Align.CENTER);
				
				if (WordSearchActivity.fontbig_White == null)
					WordSearchActivity.fontbig_White = new BitmapFont("font/white_36.spr", true);
				
				break;
			case 2: 
				SoundManager.getInstance();
				SoundManager.initSounds(WordSearchActivity.context);
				SoundManager.loadSounds();
				break;
			case 3:
				if(StateAchivement.spriteAchivement == null)
				{
					StateAchivement.spriteAchivement = new Sprite("sprite/ui/achivement.sprite",true,scaleX,scaleY);
				}
				break;
			case 4:
				for(int i=0;i<StateAchivement.achivementUnLockScore.length;i++)
					if(Map.mAllScole >= StateAchivement.achivementUnLockScore[i])
						if(StateAchivement.achivementLock[i])
						{
							
							StateAchivement.achivementLock[i] = false;
						}
				break;
			case 5:
				if (StateMainMenu.splashBitmap == null)
				{
					StateMainMenu.splashBitmap = loadImageFromAsset("image/splash.jpg");
					StateMainMenu.splashBitmap = Bitmap.createScaledBitmap(StateMainMenu.splashBitmap, SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				if (StateMainMenu.gameTitleBitmap == null)
				{
					StateMainMenu.gameTitleBitmap = loadImageFromAsset("image/gametitle.png");
					int h =StateMainMenu.gameTitleBitmap.getHeight();
					int w =StateMainMenu.gameTitleBitmap.getWidth();
					StateMainMenu.gameTitleBitmap = Bitmap.createScaledBitmap(StateMainMenu.gameTitleBitmap, (int)(scaleX* w),  (int)(scaleY* h), true);
				}				
				
				
				if (StateHowToPlay.bitmapHowToplay == null) {
					StateHowToPlay.bitmapHowToplay = WordSearchActivity.loadImageFromAsset("image/howtoplay.png");
					StateHowToPlay.bitmapHowToplay = Bitmap.createScaledBitmap(StateHowToPlay.bitmapHowToplay, SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				break;

			case 6:
				
					
				if (StateGameplay.spriteDPad == null)
					StateGameplay.spriteDPad  = new Sprite("sprite/ui/dpad.sprite",true,scaleX,scaleY);					
				if (StateGameplay.spriteUi == null)
					StateGameplay.spriteUi = new Sprite("sprite/ui/ui.sprite",true,scaleX,scaleY);

				break;
			case 7:
				bitmapScreenBuffer = Bitmap.createBitmap(SCREEN_WIDTH, SCREEN_HEIGHT, Config.ARGB_4444);
				canvasScreenBuffer = new Canvas(bitmapScreenBuffer);
				break;
			case 8://init all variable 
				DEF.DIALOG_BUTTON_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_BUTTON_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_RIGHT_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_RIGHT_NORMAL);

				

				DEF.BUTTON_IGM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL);
				DEF.BUTTON_IGM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_PAUSE_NORMAL);
				
				
				
				DEF.BUTTON_IGM_X = SCREEN_WIDTH - DEF.BUTTON_IGM_W - 5;
				DEF.BUTTON_IGM_Y =  2 ;
				DEF.BUTTON_HINT_X = 2;
				DEF.BUTTON_HINT_Y = DEF.BUTTON_IGM_Y + DEF.BUTTON_IGM_W  +  StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL) / 4 ;

				//StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_0)
				
				//for map
				
			
				DEF.BUTTON_CANCEL_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_CANCEL_NORMAL);
				DEF.BUTTON_CANCEL_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_CANCEL_NORMAL);
				DEF.BUTTON_HINT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_HINT_NORMAL);
				DEF.BUTTON_HINT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_HINT_NORMAL);

				break;
			case 9:
				Map.LoadData();
				break;

			default:
				break;
			}
			loadingStep++;

			if ((System.currentTimeMillis() - timer > 3500) && loadingStep > 15) {
				changeState(STATE_MAINMENU);

			}
			break;
		case MESSAGE_PAINT:

			WordSearchActivity.mainPaint.setColor(Color.BLACK);
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			mainCanvas.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, WordSearchActivity.mainPaint);
			WordSearchActivity.mainPaint.setColor(Color.WHITE);
			WordSearchActivity.mainPaint.setTextSize(20);
			matrix.reset();

			matrix.setScale(SCREEN_WIDTH * 1f / 800, SCREEN_HEIGHT * 1f / 1280);
			matrix.postTranslate((SCREEN_WIDTH - logoBitmap.getWidth() * SCREEN_WIDTH / 800) / 2, (SCREEN_HEIGHT - logoBitmap.getHeight() * SCREEN_HEIGHT / 1280) / 2);
			if (logoBitmap != null)
				mainCanvas.drawBitmap(logoBitmap, matrix, mainPaint);			
			//matrix.reset();
			//matrix.setScale(SCREEN_WIDTH*1f/1280, SCREEN_HEIGHT*1f/800);
			//	mainCanvas.drawBitmap(logoBitmap, (SCREEN_WIDTH - logoBitmap.getWidth()) / 2, (SCREEN_HEIGHT - logoBitmap.getHeight()) / 2 - 20, mainPaint);
			//		mainCanvas.drawText(strString, 000, 100, mainPaint);

			break;
		case MESSAGE_DTOR:
			logoBitmap.recycle();
			logoBitmap = null;
			break;
		}
	}
}

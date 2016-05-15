package com.xiaxio.fruitslide.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.fruitslide.BitmapFont;
import com.xiaxio.fruitslide.FruitSlide;
import com.xiaxio.fruitslide.Dialog;
import com.xiaxio.fruitslide.GameLayer;
import com.xiaxio.fruitslide.GameLib;
import com.xiaxio.fruitslide.GameViewThread;
import com.xiaxio.fruitslide.IConstant;
import com.xiaxio.fruitslide.SoundManager;

import resolution.DEF;

import android.graphics.Color;

import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateHint extends FruitSlide
{
	public static RectF rectF;
	public static int NUM_ROW = 5;
	public static int NUM_COL = 4;
	public static int MAX_PAG = 1;
	public static int mcurrentPage = 0;
	public static int SELECTLEVEL_BUTTON_W = 0;
	public static int SELECTLEVEL_BUTTON_H = 0;
	public static int SELECTLEVEL_BEGIN_Y = 0;
	public static int SELECTLEVEL_BEGIN_X = 0;
	public static int BUTTON_ARROW_CONFIRM_W = 60;
	public static int BUTTON_ARROW_CONFIRM_H = 60;
	public static int HINT_X = 5;
	public static int HINT_Y = SCREEN_HEIGHT / 4;
	public static int HINT_W = SCREEN_WIDTH - 10;
	public static int HINT_H = SCREEN_HEIGHT / 2;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			rectF = new RectF(HINT_X, HINT_Y, HINT_X + HINT_W, HINT_Y + HINT_H);			

			SELECTLEVEL_BUTTON_H = spriteDPad.getFrameHeight(DEF.FRAME_SELECTLEVEL_NORMAL);
			SELECTLEVEL_BUTTON_W = spriteDPad.getFrameWidth(DEF.FRAME_SELECTLEVEL_NORMAL);

			SELECTLEVEL_BEGIN_Y = (SCREEN_HEIGHT - ((SELECTLEVEL_BUTTON_H + DEF.SELECTLEVEL_CONTENT_SPACE_H) * (NUM_ROW - 1))) / 2 + 20;
			SELECTLEVEL_BEGIN_X = (SCREEN_WIDTH - ((SELECTLEVEL_BUTTON_W + DEF.SELECTLEVEL_CONTENT_SPACE_W) * (NUM_COL - 1))) / 2;

			DEF.SELECTLEVEL_CONTENT_SPACE_H = ((SCREEN_HEIGHT - SELECTLEVEL_BEGIN_Y) - NUM_ROW * SELECTLEVEL_BUTTON_H - SCREEN_HEIGHT / 10) / (NUM_ROW - 1);
			BUTTON_ARROW_CONFIRM_W = spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_LEFT_NORMAL);
			BUTTON_ARROW_CONFIRM_H = spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_LEFT_NORMAL);
			SoundManager.pausesoundLoop(0);
			break;
		case MESSAGE_UPDATE:
			if (isTouchReleaseScreen()) {
				mcurrentlevel = 1;
				changeState(STATE_GAMEPLAY);
			}
			break;
		case MESSAGE_PAINT:
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap,0,0, mainPaint);
			mainCanvas.drawBitmap(StateHowToPlay.bitmapHowToplay,0,0,mainPaint); 
			//ChemFish.mainPaint.setStyle(Style.FILL);
			//ChemFish.mainPaint.setARGB(150, 0, 0, 0);
			//ChemFish.mainCanvas.drawRect(0, 0, ChemFish.SCREEN_WIDTH, ChemFish.SCREEN_HEIGHT, ChemFish.mainPaint);
			//ChemFish.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//ChemFish.mainPaint.setColor(Color.argb(180, 96, 167,217));
			//ChemFish.mainCanvas.drawRoundRect(rectF, 25, 25, ChemFish.mainPaint);
			
		//	mainCanvas.drawText(  "STAGE : " + (mcurrentlevel +1),SCREEN_WIDTH/2,(int)(250*scaleY), android_FontNormal);
		//	mainCanvas.drawText(  "ARE YOU READY?",SCREEN_WIDTH/2,(int)(350*scaleY), android_FontNormal);
			
			if (GameViewThread.timeCurrent % 1000 < 500)
				mainCanvas.drawText(  "TOUCH SCREEN TO CONTINUE",SCREEN_WIDTH/2, (int)(550*scaleY), android_FontNormal);
				//fontbig_White.drawString(mainCanvas, "TOUCH SCREEN TO PLAY GAME", SCREEN_WIDTH / 2, HINT_Y + HINT_H - fontbig_White.getFontHeight(), SCREEN_WIDTH - 20, BitmapFont.ALIGN_CENTER);
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

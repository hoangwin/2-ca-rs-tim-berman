package com.xiaxio.fruitslide.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.fruitslide.BitmapFont;
import com.xiaxio.fruitslide.FruitSlide;
import com.xiaxio.fruitslide.GameLayer;
import com.xiaxio.fruitslide.GameLib;
import com.xiaxio.fruitslide.IConstant;
import com.xiaxio.fruitslide.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;




public class StateHowToPlay extends FruitSlide implements IConstant
{
	public static RectF rectF = null;
	public static int page = 0;
	//public static String  textContent = "You have to find the pairs of the same card and the path between two the characters must have a maximun of three lines";
	public static Bitmap bitmapHowToplay;
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			rectF = new RectF(DEF.HOWTOPLAY_BACKGROUND_X, DEF.HOWTOPLAY_BACKGROUND_Y, DEF.HOWTOPLAY_BACKGROUND_X + DEF.HOWTOPLAY_BACKGROUND_W, DEF.HOWTOPLAY_BACKGROUND_Y + DEF.HOWTOPLAY_BACKGROUND_H);
			//DEF.HOWTOPLAY_BUTTON_W = PikachuActivity.
			break;
		case MESSAGE_UPDATE:
			
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)|| FruitSlide.isTouchReleaseInRect(0,0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H)) {
				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				if (StateGameplay.isIngame)
					changeState(STATE_IGM, true, true);
				else
					changeState(STATE_MAINMENU, true, true);
			}
			break;
		case MESSAGE_PAINT: 
			if (!StateGameplay.isIngame) {			
				mainCanvas.drawBitmap(bitmapHowToplay,0,0,mainPaint); 
			} else {
				StateGameplay.SendMessage(MESSAGE_PAINT);
			}
		//	PikachuActivity.mainPaint.setStyle(Style.FILL);
		// PikachuActivity.mainPaint.setARGB(200, 0, 0, 0);
		//	PikachuActivity.mainCanvas.drawRect(0, 0, PikachuActivity.SCREEN_WIDTH, PikachuActivity.SCREEN_HEIGHT, PikachuActivity.mainPaint);
		//PikachuActivity.mainPaint.setStyle(Style.FILL_AND_STROKE);
		// PikachuActivity.mainPaint.setColor(Color.rgb(67, 120, 167));
		// PikachuActivity.mainCanvas.drawRoundRect(rectF, 25, 25, PikachuActivity.mainPaint);//DEF.HOWTOPLAY_CONTENT_SPACE_H

			//draw text

			//PikachuActivity.fontbig_Yellow.drawString(PikachuActivity.mainCanvas, "HOW TO PLAY", DEF.HOWTOPLAY_TITLE_X, DEF.HOWTOPLAY_TITLE_Y, BitmapFont.ALIGN_CENTER);			
				
			//PikachuActivity.fontsmall_Yellow.drawString(PikachuActivity.mainCanvas, textContent, DEF.HOWTOPLAY_CONTENT_X, DEF.HOWTOPLAY_CONTENT_Y + DEF.HOWTOPLAY_CONTENT_SPACE_H,500, 0);
			
			if (FruitSlide.isTouchDrapInRect(0, 0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				spriteDPad.drawAFrame(FruitSlide.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, 0, 0);
			else
				spriteDPad.drawAFrame(FruitSlide.mainCanvas, DEF.FRAME_CANCEL_NORMAL, 0, 0);
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

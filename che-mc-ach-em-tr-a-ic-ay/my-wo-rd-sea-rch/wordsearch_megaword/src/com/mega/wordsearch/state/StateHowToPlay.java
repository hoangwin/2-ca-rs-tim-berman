package com.mega.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.mega.wordsearch.BitmapFont;
import com.mega.wordsearch.WordSearchActivity;
import com.mega.wordsearch.GameLayer;
import com.mega.wordsearch.GameLib;
import com.mega.wordsearch.IConstant;
import com.mega.wordsearch.SoundManager;
import com.mega.wordsearch.game.Map;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;




public class StateHowToPlay extends WordSearchActivity implements IConstant
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
			
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)|| WordSearchActivity.isTouchReleaseInRect(0,0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H)) {
				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				if (StateGameplay.isIngame)
					changeState(STATE_IGM, true, true);
				else
					changeState(STATE_MAINMENU, true, true);
			}
			break;
		case MESSAGE_PAINT: 
			if (!StateGameplay.isIngame) {
				mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);
				mainCanvas.drawBitmap(bitmapHowToplay,0,0,mainPaint); 
			} else {
				StateGameplay.SendMessage(MESSAGE_PAINT);
			}			
			if (WordSearchActivity.isTouchDrapInRect(0, 0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, 0, 0);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_NORMAL, 0, 0);
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

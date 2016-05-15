package com.xiaxio.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.wordsearch.BitmapFont;
import com.xiaxio.wordsearch.GameLayer;
import com.xiaxio.wordsearch.GameLib;
import com.xiaxio.wordsearch.IConstant;
import com.xiaxio.wordsearch.SoundManager;
import com.xiaxio.wordsearch.WordSearchActivity;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;




public class StateCreadit extends WordSearchActivity implements IConstant 
{	
	//
	
	public static RectF rectF = null;
	public static synchronized void SendMessage(int type) {

		switch (type) {
		case MESSAGE_CTOR:

			break;
		case MESSAGE_UPDATE:
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)|| WordSearchActivity.isTouchReleaseInRect((int)(700*WordSearchActivity.scaleX),0,  DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
			{
				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				changeState(STATE_MAINMENU, true, true);
			}	
			
			break;
		case MESSAGE_PAINT:
			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);
			
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			WordSearchActivity.mainPaint.setARGB(200, 0, 0, 0);
			WordSearchActivity.mainCanvas.drawRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT, WordSearchActivity.mainPaint);
			
			StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 0,  0,(int)(400*WordSearchActivity.scaleY));
			WordSearchActivity.android_FontNormal.setColor(Color.rgb(79,57,30));
			WordSearchActivity.mainCanvas.drawText("CREADIT", WordSearchActivity.SCREEN_WIDTH / 2,  (int)(500*WordSearchActivity.scaleY) ,WordSearchActivity.android_FontNormal);
			WordSearchActivity.android_FontNormal.setColor(Color.WHITE);
			WordSearchActivity.mainCanvas.drawText("Company", WordSearchActivity.SCREEN_WIDTH / 2,  (int)(600*WordSearchActivity.scaleY) ,WordSearchActivity.android_FontNormal);
			WordSearchActivity.mainCanvas.drawText("XiaXio Free Game", WordSearchActivity.SCREEN_WIDTH / 2,  (int)(700*WordSearchActivity.scaleY) ,WordSearchActivity.android_FontNormal);
			
			if (WordSearchActivity.isTouchDrapInRect((int)(680*WordSearchActivity.scaleX),0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, (int)(680*WordSearchActivity.scaleX),0);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_NORMAL, (int)(680*WordSearchActivity.scaleX),0);
			
			
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

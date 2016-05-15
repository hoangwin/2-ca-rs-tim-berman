package com.thuanviet.onevs100.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.onevs100.BitmapFont;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.GameLayer;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.IConstant;
import com.thuanviet.onevs100.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;




public class StateCreadit extends DauTruong100 implements IConstant 
{	
	//
	
	public static RectF rectF = null;
	public static synchronized void SendMessage(int type) {

		switch (type) {
		case MESSAGE_CTOR:

			break;
		case MESSAGE_UPDATE:
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)|| DauTruong100.isTouchReleaseInRect((int)(700*DauTruong100.scaleX),0,  DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
			{
				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				changeState(STATE_MAINMENU, true, true);
			}	
			
			break;
		case MESSAGE_PAINT:
			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);
			
			DauTruong100.mainPaint.setStyle(Style.FILL);
			DauTruong100.mainPaint.setARGB(200, 0, 0, 0);
			DauTruong100.mainCanvas.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);
			
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 0,  0,(int)(400*DauTruong100.scaleY));
			DauTruong100.android_FontNormal.setColor(Color.rgb(79,57,30));
			DauTruong100.mainCanvas.drawText("THÔNG TIN", DauTruong100.SCREEN_WIDTH / 2,  (int)(500*DauTruong100.scaleY) ,DauTruong100.android_FontNormal);
			DauTruong100.android_FontNormal.setColor(Color.WHITE);
			DauTruong100.mainCanvas.drawText("NHÓM :", DauTruong100.SCREEN_WIDTH / 2,  (int)(600*DauTruong100.scaleY) ,DauTruong100.android_FontNormal);
			DauTruong100.mainCanvas.drawText("Mega Free Game", DauTruong100.SCREEN_WIDTH / 2,  (int)(700*DauTruong100.scaleY) ,DauTruong100.android_FontNormal);
			
			if (DauTruong100.isTouchDrapInRect((int)(680*DauTruong100.scaleX),0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, (int)(680*DauTruong100.scaleX),0);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_CANCEL_NORMAL, (int)(680*DauTruong100.scaleX),0);
			
			
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

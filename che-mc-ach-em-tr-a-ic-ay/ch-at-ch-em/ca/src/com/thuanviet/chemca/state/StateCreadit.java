package com.thuanviet.chemca.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.chemca.BitmapFont;
import com.thuanviet.chemca.ChemFish;
import com.thuanviet.chemca.GameLayer;
import com.thuanviet.chemca.GameLib;
import com.thuanviet.chemca.IConstant;
import com.thuanviet.chemca.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;




public class StateCreadit extends ChemFish implements IConstant 
{	
	//
	
	static int cancelX = 0;
	static int cancelY = 0;
	
	public static synchronized void SendMessage(int type) {

		switch (type) {
		case MESSAGE_CTOR:
			
			cancelX = SCREEN_WIDTH - DEF.BUTTON_CANCEL_CONFIRM_W;
			cancelY = 0;
			
			DEF.CREADIT_CONTENT_SPACE_H = (int)(70*scaleY);
			DEF.CREADIT_TITLE_Y = (int)(70*scaleY);
			DEF.CREADIT_CONTENT_Y = (int)(170*scaleY);//3*DEF.CREADIT_CONTENT_SPACE_H/2  + ;
			break;
		case MESSAGE_UPDATE:
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)|| ChemFish.isTouchReleaseInRect(cancelX, cancelY, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
			{
				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				changeState(STATE_MAINMENU, true, true);
			}	
			
			break;
		case MESSAGE_PAINT:
			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap,0,0, mainPaint);
			
			ChemFish.mainPaint.setStyle(Style.FILL);
			ChemFish.mainPaint.setARGB(200, 0, 0, 0);
			ChemFish.mainCanvas.drawRect(0, 0, ChemFish.SCREEN_WIDTH, ChemFish.SCREEN_HEIGHT, ChemFish.mainPaint);
			//FishRescue.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//FishRescue.mainPaint.setARGB(200, 0, 0, 0);
			//FishRescue.mainCanvas.drawRoundRect(rectF, 25, 25, FishRescue.mainPaint);//DEF.CREADIT_TITLE_CONTENT_SPACE_H
			//draw text
			Rect textBounds =  new  Rect();
			android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			mainCanvas.drawText(  "CREADIT",DEF.CREADIT_TITLE_X, DEF.CREADIT_TITLE_Y, android_FontBig);
			//ChemFish.fontbig_Yellow.drawString(ChemFish.mainCanvas, "CREADIT", DEF.CREADIT_TITLE_X, DEF.CREADIT_TITLE_Y, BitmapFont.ALIGN_CENTER);
			
			mainCanvas.drawText(  "Company",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);
			//ChemFish.fontsmall_Yellow.drawString(ChemFish.mainCanvas, "Company", DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + DEF.CREADIT_CONTENT_SPACE_H, BitmapFont.ALIGN_CENTER);
			
			mainCanvas.drawText(  "Game Thuan Viet",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y +2* DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);
			//ChemFish.fontsmall_White.drawString(ChemFish.mainCanvas, "CaoGia Entertaiment LTD", DEF.CREADIT_CONTENT_X, DEF.CREADIT_CONTENT_Y + 2*DEF.CREADIT_CONTENT_SPACE_H,  BitmapFont.ALIGN_CENTER);
			
			mainCanvas.drawText(  "ProGrammer",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + 3*DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);
			//ChemFish.fontsmall_Yellow.drawString(ChemFish.mainCanvas, "ProGrammer", DEF.CREADIT_CONTENT_X, DEF.CREADIT_CONTENT_Y + 3*DEF.CREADIT_CONTENT_SPACE_H, BitmapFont.ALIGN_CENTER);
			
			mainCanvas.drawText(  "CULi",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + 4*DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);
			//ChemFish.fontsmall_White.drawString(ChemFish.mainCanvas, "Caogia", DEF.CREADIT_CONTENT_X, DEF.CREADIT_CONTENT_Y + 4*DEF.CREADIT_CONTENT_SPACE_H, DEF.CREADIT_BACKGROUND_W - 60, BitmapFont.ALIGN_CENTER);
			
			mainCanvas.drawText(  "CULUOI",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + 5*DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);
			//mainCanvas.drawText(  "Company",DEF.CREADIT_CONTENT_X , DEF.CREADIT_CONTENT_Y + DEF.CREADIT_CONTENT_SPACE_H, android_FontNormal);ChemFish.fontsmall_White.drawString(ChemFish.mainCanvas, "Toan_stt", DEF.CREADIT_CONTENT_X, DEF.CREADIT_CONTENT_Y + 5*DEF.CREADIT_CONTENT_SPACE_H, DEF.CREADIT_BACKGROUND_W - 60, BitmapFont.ALIGN_CENTER);
			
			if (ChemFish.isTouchDrapInRect(cancelX, cancelY, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, cancelX, cancelY);
			else
				spriteDPad.drawAFrame(ChemFish.mainCanvas, DEF.FRAME_CANCEL_NORMAL,cancelX,cancelY);
			
			
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

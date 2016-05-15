package com.thuanviet.onevs100.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.onevs100.BitmapFont;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.Dialog;
import com.thuanviet.onevs100.GameLayer;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.IConstant;
import com.thuanviet.onevs100.SoundManager;
import com.thuanviet.onevs100.game.Map;

import resolution.DEF;

import android.graphics.Color;

import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateSelectMode extends DauTruong100
{
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	
	//back button
	
	public static int MENU_BACK_WIDTH = 20;
	public static int MENU_BACK_HEIGHT = 20;
	public static synchronized void SendMessage(int type)
	{

		switch (type) 
		{
		case MESSAGE_CTOR: 
			MENU_ELEMENT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
			MENU_BEGIN_X = SCREEN_WIDTH / 2;			
			MENU_ELEMENT_SPACE = 3*MENU_ELEMENT_H / 2;
			MENU_BEGIN_Y = (int)(430*scaleY);
			
			MENU_BACK_WIDTH =  StateGameplay.spriteUi.getFrameWidth(3);
			MENU_BACK_HEIGHT =  StateGameplay.spriteUi.getFrameHeight(3);
			break;
		case MESSAGE_UPDATE:
			if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
			{
				//SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				
				changeState(STATE_GAMEPLAY);
			}
			
			//mode 1
			if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2 + MENU_ELEMENT_SPACE, MENU_ELEMENT_W, MENU_ELEMENT_H))
			{//
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				
				changeState(STATE_GAMEPLAY);
			}
			//mode 2
			if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2+ 2*MENU_ELEMENT_SPACE, MENU_ELEMENT_W, MENU_ELEMENT_H))
			{
				//SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
			
				changeState(STATE_GAMEPLAY); 
			}
			if (isTouchReleaseInRect((int)(650*DauTruong100.scaleX), (int)(155*DauTruong100.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
			{
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
				
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)){
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
			break;
		case MESSAGE_PAINT:
			Rect textBounds = new Rect();
			android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBounds);			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);			
			mainCanvas.drawBitmap(StateMainMenu.gameTitleBitmap, (SCREEN_WIDTH - StateMainMenu.gameTitleBitmap.getWidth())/2,0, mainPaint);
			DauTruong100.mainPaint.setStyle(Style.FILL);
			DauTruong100.mainPaint.setARGB(200, 0, 0, 0);
			DauTruong100.mainCanvas.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 2,  0,(int)(120*DauTruong100.scaleY));
			DauTruong100.android_MenuFont.setColor(Color.rgb(79,57,30));
			DauTruong100.mainCanvas.drawText("CHỌN CẤP ĐỘ", DauTruong100.SCREEN_WIDTH / 2,(int)(226*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			DauTruong100.android_MenuFont.setColor(Color.WHITE);
			
			//mode 0
			if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, MENU_BEGIN_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, MENU_BEGIN_Y);
			mainCanvas.drawText("CẤP ĐỘ DỄ", MENU_BEGIN_X,  MENU_BEGIN_Y + textBounds.height()/2, android_MenuFont);
			
			//mode 1
			if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2 + MENU_ELEMENT_SPACE, MENU_ELEMENT_W, MENU_ELEMENT_H))
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X,MENU_BEGIN_Y  + MENU_ELEMENT_SPACE);
			else
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, MENU_BEGIN_Y + MENU_ELEMENT_SPACE);
			mainCanvas.drawText("TRUNG BÌNH", MENU_BEGIN_X,  MENU_BEGIN_Y +MENU_ELEMENT_SPACE+ textBounds.height()/2, android_MenuFont);
			
			//mode 2
			if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, MENU_BEGIN_Y - MENU_ELEMENT_H / 2+ 2*MENU_ELEMENT_SPACE, MENU_ELEMENT_W, MENU_ELEMENT_H))
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, MENU_BEGIN_Y + 2*MENU_ELEMENT_SPACE);
			else
				StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, MENU_BEGIN_Y + 2* MENU_ELEMENT_SPACE);
			mainCanvas.drawText("CẤP ĐỘ KHÓ", MENU_BEGIN_X,  MENU_BEGIN_Y + 2*MENU_ELEMENT_SPACE+ textBounds.height()/2, android_MenuFont);
			
			// back
			if (isTouchDrapInRect((int)(650*DauTruong100.scaleX), (int)(155*DauTruong100.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 4,  (int)(650*DauTruong100.scaleX),(int)(155*DauTruong100.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 3, (int)(650*DauTruong100.scaleX),(int)(155*DauTruong100.scaleY));
			
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

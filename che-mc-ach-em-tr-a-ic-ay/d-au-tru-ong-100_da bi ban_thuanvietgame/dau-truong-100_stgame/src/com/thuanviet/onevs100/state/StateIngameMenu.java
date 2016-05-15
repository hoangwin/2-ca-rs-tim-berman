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

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;


public class StateIngameMenu extends DauTruong100 implements IConstant
{

	public static Bitmap splashBitmap = null;
	public static final int MENU_PLAY = 0;
	public static final int MENU_RESTART = 1;
	public static final int MENU_CREDIT = 2;
	public static final int MENU_OPTION_SOUND = 3;
	public static final int MENU_EXIT = 4;
	public static final int MENU_RESUME = 5;
	public static final int MENU_BACK_TO_MAINMENU = 6;
	public static int[] arrayMenu = { MENU_RESUME, MENU_RESTART, MENU_OPTION_SOUND, MENU_BACK_TO_MAINMENU, MENU_EXIT };
	public static String[] arrayMenuString = { "VỀ LẠI GAME", "CHƠI LẠI", "ÂM THANH:", "MENU CHÍNH", "THOÁT" };
	public static int MENU_BEGIN_X = SCREEN_WIDTH / 2;
	public static int MENU_BEGIN_Y = 0;
	public static int MENU_ELEMENT_W = 0;
	public static int MENU_ELEMENT_H = 0;
	public static int MENU_ELEMENT_SPACE = 15;
	public static int MENU_BACKGROUND_W = 0;
	public static int MENU_BACKGROUND_H = 0;
	public static int MENU_H = SCREEN_HEIGHT;
	public static RectF rectF;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			SoundManager.pausesoundLoop(1);
			MENU_BACKGROUND_W = SCREEN_WIDTH / 4 * 3;
			MENU_BACKGROUND_H = SCREEN_HEIGHT / 6 * 5;
			MENU_ELEMENT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_SPACE = (MENU_BACKGROUND_H - ((arrayMenu.length + 1) * MENU_ELEMENT_H)) / arrayMenu.length;
			if (MENU_ELEMENT_SPACE < 5)
				MENU_ELEMENT_SPACE = 5;
			MENU_H = (MENU_ELEMENT_SPACE + MENU_ELEMENT_H) * arrayMenu.length;
			MENU_BEGIN_Y = (SCREEN_HEIGHT - MENU_H) / 2 + MENU_ELEMENT_H / 2;

			rectF = new RectF((SCREEN_WIDTH - MENU_BACKGROUND_W) / 2, (SCREEN_HEIGHT - MENU_BACKGROUND_H) / 2, (SCREEN_WIDTH - MENU_BACKGROUND_W) / 2 + MENU_BACKGROUND_W, (SCREEN_HEIGHT - MENU_BACKGROUND_H) / 2 + MENU_BACKGROUND_H);
			break;
		case MESSAGE_UPDATE:
			int temp = -1;
			if (Dialog.isShowDialog) {
				Dialog.updateDialog();
				return;
			}
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)) {
				//SoundManager.playsoundLoop(1, true);
				changeState(STATE_GAMEPLAY, false, true);

				break;
			}
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H)) {
					if (arrayMenu[i] != MENU_OPTION_SOUND)
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
					switch (arrayMenu[i])
					{
					case MENU_RESUME:
						//SoundManager.playsoundLoop(1, true);
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
						changeState(STATE_GAMEPLAY, false, true);
						break;
					case MENU_RESTART:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "CHƠI LẠI?", Dialog.DIALOG_RESTART_GAME);
						break;
					case MENU_OPTION_SOUND:
						isEnableSound = !isEnableSound;
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
						//	changeState(STATE_OPTION, true, true);
						break; 
					case MENU_BACK_TO_MAINMENU:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "VỀ MENU CHÍNH?", Dialog.DIALOG_BACK_TO_MAINMENU_EXIT);
						break;
					case MENU_EXIT:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "THOÁT GAME??", Dialog.DIALOG_NEXTSTATE_EXIT);
						break;
					default: 
						break;
					}
				}
			}

			break;
		case MESSAGE_PAINT:

			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return; 
			}
			DauTruong100.android_MenuFont.setColor(Color.WHITE);
			DauTruong100.mainPaint.setStyle(Style.FILL);
			DauTruong100.mainPaint.setARGB(220, 0, 0, 0);
			DauTruong100.mainCanvas.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);
			Rect textBounds = new  Rect(); 
			android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);
					
				if( i == 2) 
				{
					if(isEnableSound )
						mainCanvas.drawText(arrayMenuString[i] + "BẬT",  MENU_BEGIN_X, y + textBounds.height()/2 , android_MenuFont);
					else
						mainCanvas.drawText(arrayMenuString[i] +"TẮT",  MENU_BEGIN_X, y + textBounds.height()/2 , android_MenuFont);
				}else
				mainCanvas.drawText(arrayMenuString[i],  MENU_BEGIN_X, y + textBounds.height()/2 , android_MenuFont);
			}

			//if(System.currentTimeMillis()%1000 > 500)
			//if (fontbig_White != null)
			//	fontbig_White.drawString(mainCanvas, "TOUCH THE SCREEN TO CONTINUE", SCREEN_WIDTH/2, SCREEN_HEIGHT - 150, BitmapFont.ALIGN_CENTER);	

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

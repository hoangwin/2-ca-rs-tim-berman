package com.xiaxio.fruitslide.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.fruitslide.BitmapFont;
import com.xiaxio.fruitslide.FruitSlide;
import com.xiaxio.fruitslide.Dialog;
import com.xiaxio.fruitslide.GameLayer;
import com.xiaxio.fruitslide.GameLib;
import com.xiaxio.fruitslide.IConstant;
import com.xiaxio.fruitslide.SoundManager;
import com.xiaxio.fruitslide.gameplay.GamePlay;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.view.KeyEvent;


public class StateIngameMenu extends FruitSlide implements IConstant
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
	public static String[] arrayMenuString = { "RESUME", "RESTART", "SOUND : ", "MAIN MENU", "EXIT" };
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
			MENU_ELEMENT_H = spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
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
				GamePlay.preFrameDrap = 0;
				GamePlay.frameLasplaySoundSword = 0;
				GamePlay.arrayListPoint.clear();
				SoundManager.playsoundLoop(1, true);
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
						GamePlay.preFrameDrap = 0;
						GamePlay.frameLasplaySoundSword = 0;
						GamePlay.arrayListPoint.clear();
						SoundManager.playsoundLoop(1, true);
						changeState(STATE_GAMEPLAY, false, true);
						break;
					case MENU_RESTART:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "RESTART GAME??", Dialog.DIALOG_RESTART_GAME);
						break;
					case MENU_OPTION_SOUND:
						isEnableSound = !isEnableSound;
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
						//	changeState(STATE_OPTION, true, true);
						break;
					case MENU_BACK_TO_MAINMENU:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "BACK TO MAIN MENU?", Dialog.DIALOG_BACK_TO_MAINMENU_EXIT);
						break;
					case MENU_EXIT:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "EXIT GAME??", Dialog.DIALOG_NEXTSTATE_EXIT);
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
			FruitSlide.mainPaint.setStyle(Style.FILL);
			FruitSlide.mainPaint.setARGB(200, 0, 0, 0);
			FruitSlide.mainCanvas.drawRect(0, 0, FruitSlide.SCREEN_WIDTH, FruitSlide.SCREEN_HEIGHT, FruitSlide.mainPaint);
			Rect textBounds =  new  Rect();
			android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			android_FontNormal.setTextAlign(Align.CENTER);			
			android_FontNormal.setColor(Color.rgb(147, 107, 77));
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);
				if (arrayMenu[i] == MENU_OPTION_SOUND) {
					if (isEnableSound)
						mainCanvas.drawText( arrayMenuString[i] + "ON",MENU_BEGIN_X,y + textBounds.height()/2, android_FontNormal);
						//fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "ON", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
					else
						mainCanvas.drawText( arrayMenuString[i] + "OFF",MENU_BEGIN_X,y + textBounds.height()/2, android_FontNormal);
						//fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "OFF", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
				} else
					mainCanvas.drawText( arrayMenuString[i],MENU_BEGIN_X,y + textBounds.height()/2, android_FontNormal);
					//fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
			}
			android_FontNormal.setColor(Color.WHITE);
			//if(System.currentTimeMillis()%1000 > 500)
			//if (fontbig_White != null)
			//	fontbig_White.drawString(mainCanvas, "TOUCH THE SCREEN TO CONTINUE", SCREEN_WIDTH/2, SCREEN_HEIGHT - 150, BitmapFont.ALIGN_CENTER);	

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}
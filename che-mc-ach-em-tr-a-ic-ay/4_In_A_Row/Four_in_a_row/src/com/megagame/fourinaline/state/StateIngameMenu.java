package com.megagame.fourinaline.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fourinaline.BitmapFont;
import com.megagame.fourinaline.Dialog;
import com.megagame.fourinaline.FourInALine;
import com.megagame.fourinaline.GameLayer;
import com.megagame.fourinaline.GameLib;
import com.megagame.fourinaline.IConstant;
import com.megagame.fourinaline.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;


public class StateIngameMenu extends FourInALine implements IConstant
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
			SoundManager.pausesoundLoop(0);
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
				SoundManager.playsoundLoop(0, true);
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
						SoundManager.playsoundLoop(0, true);
						changeState(STATE_GAMEPLAY, false, true);
						break;
					case MENU_RESTART:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "Do you want to restart game?\n Are you sure??", Dialog.DIALOG_RESTART_GAME);
						break;
					case MENU_OPTION_SOUND:
						isEnableSound = !isEnableSound;
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
						//	changeState(STATE_OPTION, true, true);
						break;
					case MENU_BACK_TO_MAINMENU:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "Do you want to return to mainmenu?", Dialog.DIALOG_BACK_TO_MAINMENU_EXIT);
						break;
					case MENU_EXIT:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "Do you want to exit game??", Dialog.DIALOG_NEXTSTATE_EXIT);
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
			FourInALine.mainPaint.setStyle(Style.FILL);
			FourInALine.mainPaint.setARGB(220, 0, 0, 0);
			FourInALine.mainCanvas.drawRect(0, 0, FourInALine.SCREEN_WIDTH, FourInALine.SCREEN_HEIGHT, FourInALine.mainPaint);
			//Diamond.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//Diamond.mainPaint.setColor(Color.argb(180,0, 0, 0));
			//Diamond.mainCanvas.drawRoundRect(rectF, 25, 25, Diamond.mainPaint);
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);
				if (arrayMenu[i] == MENU_OPTION_SOUND) {
					if (isEnableSound)
						fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "ON", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
					else
						fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "OFF", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
				} else
					fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
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

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

import android.graphics.Color;

import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateSelectDifficult extends FourInALine
{

	public static int BUTTON_ARROW_CONFIRM_W = 60;
	public static int BUTTON_ARROW_CONFIRM_H = 60;

	//
	public static final int MENU_EASY = 0;
	public static final int MENU_NORMAL = 1;
	public static final int MENU_HARD = 2;
	public static int[] arrayMenu = { MENU_EASY, MENU_NORMAL, MENU_HARD };
	public static String[] arrayMenuString = { "EASY", "NORMAL", "HARD" };
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	public static int MENU_H = SCREEN_HEIGHT;

	//

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:

			BUTTON_ARROW_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_LEFT_NORMAL);
			BUTTON_ARROW_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_LEFT_NORMAL);
			//SoundManager.pausesoundLoop(0);
			MENU_ELEMENT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
			MENU_BEGIN_X = SCREEN_WIDTH / 2;
			MENU_ELEMENT_SPACE = MENU_ELEMENT_H / 2;//(SCREEN_HEIGHT -((arrayMenu.length + 3)*MENU_ELEMENT_H)) /arrayMenu.length;
			if (SCREEN_HEIGHT < 400)
				MENU_ELEMENT_SPACE = MENU_ELEMENT_SPACE / 4;
			if (MENU_ELEMENT_SPACE < 3)
				MENU_ELEMENT_SPACE = 3;
			MENU_H = (MENU_ELEMENT_SPACE + MENU_ELEMENT_H) * arrayMenu.length;
			MENU_BEGIN_Y = (SCREEN_HEIGHT - MENU_H) / 2 + MENU_ELEMENT_H;
			break;
		case MESSAGE_UPDATE:

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FourInALine.isTouchReleaseInRect(SCREEN_WIDTH - DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H)) {

				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				changeState(STATE_MAINMENU, true, true);
				break;
			}
			//if (GameLib.isTouchReleaseScreen()) {
			//	changeState(STATE_GAMEPLAY);
			//}
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H)) {

					switch (i)
					{
					case MENU_EASY:
						StateGameplay.gameDifficult = 0;
						changeState(STATE_GAMEPLAY);
						break;
					case MENU_NORMAL:
						//changeState(STATE_HINT);
						StateGameplay.gameDifficult = 1;
						changeState(STATE_GAMEPLAY);
						break;

					case MENU_HARD:
						StateGameplay.gameDifficult = 2;
						changeState(STATE_GAMEPLAY);

						break;
					default:
						break;
					}
				}
			}

			break;
		case MESSAGE_PAINT:
			if (!StateGameplay.isIngame) {
				FourInALine.mainPaint.setColor(Color.BLACK);
				FourInALine.mainPaint.setStyle(Style.FILL);
				mainCanvas.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, FourInALine.mainPaint);
				matrix.reset();
				matrix.setScale(SCREEN_WIDTH * 1f / 800, SCREEN_HEIGHT * 1f / 1280);
				mainPaint.setAntiAlias(true);
				mainPaint.setFilterBitmap(true);
				mainPaint.setDither(true);
				mainCanvas.drawBitmap(StateMainMenu.splashBitmap, matrix, mainPaint);
			} else {
				StateGameplay.SendMessage(MESSAGE_PAINT);
			}

			FourInALine.fontbig_White.drawString(FourInALine.mainCanvas, "SELECT DIFFICULT", SCREEN_WIDTH / 2, fontbig_Yellow.getFontHeight(), BitmapFont.ALIGN_CENTER);

			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);

				fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
			}

			//draw cancel
			if (FourInALine.isTouchDrapInRect(SCREEN_WIDTH - DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, SCREEN_WIDTH - DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8);
			else
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_CANCEL_NORMAL, SCREEN_WIDTH - DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8);

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

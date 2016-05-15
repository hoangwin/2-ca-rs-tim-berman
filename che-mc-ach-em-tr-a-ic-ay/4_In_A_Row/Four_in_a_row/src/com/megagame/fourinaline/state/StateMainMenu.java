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
import com.megagame.fourinaline.Map;
import com.megagame.fourinaline.SoundManager;
import com.megagame.fourinaline.actor.DiamondActor;

import resolution.DEF;

import android.R.color;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Style;
import android.net.Uri;
import android.view.KeyEvent;

public class StateMainMenu extends FourInALine implements IConstant
{

	public static Bitmap splashBitmap = null;
	public static Bitmap gameTitleBitmap = null;
	public static final int MENU_SINGLE_PLAYER = 0;
	public static final int MENU_TWO_PLAYER = 1;
	public static final int MENU_HOW_PLAY = 2;
	//public static final int MENU_LEADERBOARD = 2;
	public static final int MENU_RANK = 3;
	public static final int MENU_CREDIT = 4;
	public static final int MENU_EXIT = 5;
	public static final int MENU_OPTION_SOUND = 6;
	public static int[] arrayMenu = { MENU_SINGLE_PLAYER, MENU_TWO_PLAYER, MENU_HOW_PLAY };
	public static String[] arrayMenuString = { "SINGLE PLAYER", "TWO PLAYER", "HOW TO PLAY" };
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int MENU_BUTTON_ICON_Y = SCREEN_HEIGHT;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:

			if (splashBitmap == null)
				splashBitmap = loadImageFromAsset("image/splash.png");
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
			MENU_BUTTON_ICON_Y = MENU_BEGIN_Y + MENU_H / 2 + 3 * DEF.DIALOG_BUTTON_CONFIRM_H/2;
			if (SCREEN_HEIGHT < 400)
				MENU_BUTTON_ICON_Y = MENU_BEGIN_Y + MENU_H / 2 + DEF.DIALOG_BUTTON_CONFIRM_H + 2 * MENU_ELEMENT_SPACE;
			StateGameplay.isIngame = false;
			//SoundManager.playSound(SoundManager.SOUND_TITLE,1);
			SoundManager.playsoundLoop(0, true);
			//SoundManager.pausesoundLoop(1);

			//Map.init();
			break;
		case MESSAGE_UPDATE:
			//Map.Update();
			int temp = -1;
			if (Dialog.isShowDialog) {
				Dialog.updateDialog();
				return;
			}
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)) {
				Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "DO YOU WANT TO EXIT?", Dialog.DIALOG_NEXTSTATE_EXIT);
				break;
			}
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H)) {

					if (i != MENU_OPTION_SOUND)
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
					switch (i)
					{
					case MENU_SINGLE_PLAYER:
						StateGameplay.gameMode = 0;
						changeState(STATE_SELECT_DIFFICULT);
						break;
					case MENU_TWO_PLAYER:
						//changeState(STATE_HINT);
						StateGameplay.gameMode = 1;
						changeState(STATE_GAMEPLAY);
						break;

					case MENU_HOW_PLAY:
						changeState(STATE_HOW_TO_PLAY);

						break;
					case MENU_RANK:
						try {
							//Uri uri = Uri.parse("https://play.google.com/store/apps/developer?id=CAOGIA++MOBILE+LTD.");
							//mainActivity.startActivity(new Intent(Intent.ACTION_VIEW, uri));
							changeState(STATE_LEADERBOARD);
						} catch (Exception e) {

						}

						break;
					case MENU_CREDIT:

						break;
					case MENU_EXIT:

					default:
						break;
					}
				}
			}
			if (FourInALine.isTouchReleaseInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				isEnableSound = !isEnableSound;
				if (!isEnableSound) {
					SoundManager.pausesoundLoop(0);
				} else {
					SoundManager.playsoundLoop(0, true);
				}
			}

			if (FourInALine.isTouchReleaseInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				changeState(STATE_CREADIT);
			}

			if (FourInALine.isTouchReleaseInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "DO YOU WANT TO EXIT?", Dialog.DIALOG_NEXTSTATE_EXIT);
			}
			break;
		case MESSAGE_PAINT:

			FourInALine.mainPaint.setColor(Color.BLACK);
			FourInALine.mainPaint.setStyle(Style.FILL);
			//	canvasScreenBuffer
			matrix.reset();

			matrix.setScale(SCREEN_WIDTH * 1f / 800, SCREEN_HEIGHT * 1f / 1280);
			matrix.postTranslate((SCREEN_WIDTH - splashBitmap.getWidth() * SCREEN_WIDTH / 800) / 2, (SCREEN_HEIGHT - splashBitmap.getHeight() * SCREEN_HEIGHT / 1280) / 2);
			mainPaint.setAntiAlias(true);
			mainPaint.setFilterBitmap(true);
			mainPaint.setDither(true);

			mainCanvas.drawBitmap(splashBitmap, matrix, mainPaint);
			bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);

			//Map.DrawGame(canvasScreenBuffer);

			mainPaint.setAlpha(255);
			mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);

			matrix.postTranslate((SCREEN_WIDTH - (gameTitleBitmap.getWidth() * SCREEN_WIDTH / 800)) / 2, 0);

			mainCanvas.drawBitmap(gameTitleBitmap, matrix, mainPaint);
			//matrix.reset();

			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
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
				}
				if (arrayMenu[i] == MENU_RANK) {
					fontsmall_Yellow.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
				} else
					fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
			}

			int soundIndexFrame = isEnableSound ? DEF.FRAME_SOUND_ON_NORMAL : DEF.FRAME_SOUND_OFF_NORMAL;

			if (!FourInALine.isTouchDrapInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, soundIndexFrame, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, soundIndexFrame + 1, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!FourInALine.isTouchDrapInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_INFO_NORMAL, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_INFO_HIGHTLIGHT, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!FourInALine.isTouchDrapInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_QUIT_NORMAL, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_QUIT_HIGHTLIGHT, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			//if(System.currentTimeMillis()%1000 > 500)
			//if (fontbig_White != null)
			//	fontbig_White.drawString(mainCanvas, "TOUCH THE SCREEN TO CONTINUE", SCREEN_WIDTH/2, SCREEN_HEIGHT - 150, BitmapFont.ALIGN_CENTER);	

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

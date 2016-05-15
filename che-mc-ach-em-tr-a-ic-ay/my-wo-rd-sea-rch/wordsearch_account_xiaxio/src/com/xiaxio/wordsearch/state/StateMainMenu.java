package com.xiaxio.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.wordsearch.BitmapFont;
import com.xiaxio.wordsearch.Dialog;
import com.xiaxio.wordsearch.GameLayer;
import com.xiaxio.wordsearch.GameLib;
import com.xiaxio.wordsearch.IConstant;
import com.xiaxio.wordsearch.SoundManager;
import com.xiaxio.wordsearch.WordSearchActivity;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.graphics.Rect;
import android.graphics.RectF;
import android.view.KeyEvent;

public class StateMainMenu extends WordSearchActivity implements IConstant
{

	public static Bitmap splashBitmap = null;
	public static Bitmap gameTitleBitmap = null;
	public static final int MENU_PLAY = 0;
	public static final int MENU_ACHIVEMENT = 1;
	public static final int MENU_LEADERBOARD = 2;
	public static final int MENU_CREDIT = 3;
	public static final int MENU_EXIT = 4;
	public static final int MENU_OPTION_SOUND = 5;
	public static final int MENU_HOW_PLAY = 6;
	public static int[] arrayMenu = { MENU_PLAY, MENU_ACHIVEMENT, MENU_LEADERBOARD };
	public static String[] arrayMenuString = { "PLAY", "ACHIVEMENT", "LEADERBOARD" };
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
			android_FontNormal.setColor(Color.WHITE);
			android_MenuFont.setTextAlign(Align.CENTER);
			android_MenuFont.setColor(Color.WHITE);
			if (splashBitmap == null)
				splashBitmap = loadImageFromAsset("image/splash.png");
			MENU_ELEMENT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
			MENU_BEGIN_X = SCREEN_WIDTH / 2;
			MENU_ELEMENT_SPACE = MENU_ELEMENT_H / 2;//(SCREEN_HEIGHT -((arrayMenu.length + 3)*MENU_ELEMENT_H)) /arrayMenu.length;
			if(SCREEN_HEIGHT <400)
				MENU_ELEMENT_SPACE = MENU_ELEMENT_SPACE/4;
			if (MENU_ELEMENT_SPACE < 3)
				MENU_ELEMENT_SPACE = 3;
			MENU_H = (MENU_ELEMENT_SPACE + MENU_ELEMENT_H) * arrayMenu.length;
			MENU_BEGIN_Y = (SCREEN_HEIGHT - MENU_H) / 2 + MENU_ELEMENT_H;
			MENU_BUTTON_ICON_Y = MENU_BEGIN_Y + MENU_H / 2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_H;
			if(SCREEN_HEIGHT <400)
				MENU_BUTTON_ICON_Y =  MENU_BEGIN_Y + MENU_H / 2 +DEF.DIALOG_BUTTON_CONFIRM_H +  2*MENU_ELEMENT_SPACE;
			StateGameplay.isIngame = false;
			//SoundManager.playsoundLoop(0, true);
			
			break; 
		case MESSAGE_UPDATE:

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
					case MENU_PLAY:
						changeState(STATE_SELECT_MODE);
						break;
					case MENU_ACHIVEMENT:
						changeState(STATE_ACHIVEMENT);
						break;
					case MENU_LEADERBOARD:
						//Dialog.showDialog(Dialog.DIALOG_TYPE_NOTICE, "","This action need connect to server. Please waitting",Dialog.DIALOG_NEXTSTATE_LEADERBOARD);
						changeState(STATE_LEADERBOARD);

						break;
					case MENU_CREDIT:

						break;
					case MENU_EXIT:

					default:
						break;
					}
				}
			}
			if (WordSearchActivity.isTouchReleaseInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				isEnableSound = !isEnableSound;
				if (!isEnableSound) {
					SoundManager.pausesoundLoop(0);
				} else {
					SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				//	SoundManager.playsoundLoop(0, true);
				}
			}

			if (WordSearchActivity.isTouchReleaseInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				changeState(STATE_CREADIT);
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
			}
			
			if (WordSearchActivity.isTouchReleaseInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "DO YOU WANT TO EXIT?", Dialog.DIALOG_NEXTSTATE_EXIT);
			}
			break;
		case MESSAGE_PAINT:
			
			
			WordSearchActivity.mainPaint.setColor(Color.BLACK);
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			//	canvasScreenBuffer
			mainCanvas.drawBitmap(splashBitmap, 0,0, mainPaint);
			
			mainCanvas.drawBitmap(gameTitleBitmap, (SCREEN_WIDTH - gameTitleBitmap.getWidth())/2,0, mainPaint);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			Rect textBounds = new Rect();
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);
				android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBounds);
				mainCanvas.drawText(arrayMenuString[i], MENU_BEGIN_X,  y + textBounds.height()/2, android_MenuFont);
				//fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
			}

			int soundIndexFrame = isEnableSound ? DEF.FRAME_SOUND_ON_NORMAL : DEF.FRAME_SOUND_OFF_NORMAL;

			if (!WordSearchActivity.isTouchDrapInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, soundIndexFrame, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, soundIndexFrame + 1, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!WordSearchActivity.isTouchDrapInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_INFO_NORMAL, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_INFO_HIGHTLIGHT, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!WordSearchActivity.isTouchDrapInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_QUIT_NORMAL, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_QUIT_HIGHTLIGHT, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			//if(System.currentTimeMillis()%1000 > 500)
			//if (fontbig_White != null)
			//	fontbig_White.drawString(mainCanvas, "TOUCH THE SCREEN TO CONTINUE", SCREEN_WIDTH/2, SCREEN_HEIGHT - 150, BitmapFont.ALIGN_CENTER);	

			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

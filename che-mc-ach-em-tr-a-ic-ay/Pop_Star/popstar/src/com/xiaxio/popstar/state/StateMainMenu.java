package com.xiaxio.popstar.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.popstar.BitmapFont;
import com.xiaxio.popstar.DEF;
import com.xiaxio.popstar.Dialog;
import com.xiaxio.popstar.GameLayer;
import com.xiaxio.popstar.GameLib;
import com.xiaxio.popstar.IConstant;
import com.xiaxio.popstar.Map;
import com.xiaxio.popstar.PopStar;
import com.xiaxio.popstar.SoundManager;
import com.xiaxio.popstar.actor.DiamondActor;


import android.R.color;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Style;
import android.graphics.Rect;
import android.net.Uri;
import android.view.KeyEvent;

public class StateMainMenu extends PopStar implements IConstant
{

	public static Bitmap splashBitmap = null;
	public static Bitmap gameTitleBitmap = null;
	public static final int MENU_NORMAL_MODE = -1;
	public static final int MENU_TIME_TRIAL_MODE = 0;
	//public static final int MENU_CHALLENGE_MODE = 1;
	//public static final int MENU_HOW_PLAY = 2;
	//public static final int MENU_LEADERBOARD = 3;
	public static final int MENU_RATING = 1;	
	public static final int MENU_OPTION_SOUND = 2;
	public static final int MENU_EXIT =3;
	public static final int MENU_CREDIT = 5;
	public static int[] arrayMenu = { MENU_TIME_TRIAL_MODE,MENU_RATING,MENU_OPTION_SOUND,MENU_EXIT};
	public static String[] arrayMenuString = {"Play Game","Rating","Sound:","Exit" };
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
			MENU_ELEMENT_SPACE = (int)(scaleY*20);
			
			MENU_H = (MENU_ELEMENT_SPACE + MENU_ELEMENT_H) * arrayMenu.length;
			MENU_BEGIN_Y = (SCREEN_HEIGHT - MENU_H) / 2 + MENU_ELEMENT_H;
			MENU_BUTTON_ICON_Y = MENU_BEGIN_Y + MENU_H / 2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_H;
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
				Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "EXIT GAME?", Dialog.DIALOG_NEXTSTATE_EXIT);
				break;
			}
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchReleaseInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H)) {

					if (i != MENU_OPTION_SOUND)
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
					switch (i)
					{
					case MENU_NORMAL_MODE:
						StateGameplay.gameMode = 0;
						changeState(STATE_HINT);
						break;
					case MENU_TIME_TRIAL_MODE:
						//changeState(STATE_HINT);
						StateGameplay.gameMode = 1;
						changeState(STATE_SELECT_LEVEL);
						break;						
				//	case 	MENU_CHALLENGE_MODE:
				//		StateGameplay.gameMode = 2;
				//		changeState(STATE_HINT);
				//		break;
				//	case MENU_HOW_PLAY:
				//		changeState(STATE_HOW_TO_PLAY);

				//		break;
					case MENU_RATING:
						try {
							Uri uri = Uri.parse("https://play.google.com/store/apps/details?id=com.xiaxio.popstar");
							mainActivity.startActivity(new Intent(Intent.ACTION_VIEW, uri));
						} catch (Exception e) {

						}

						break;
					case MENU_OPTION_SOUND:
						isEnableSound = !isEnableSound;
						SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
						if(isEnableSound)
							SoundManager.playsoundLoop(0, true);
						else
							SoundManager.pausesoundLoop(0);
						break;
					case MENU_CREDIT:

						break;
					case MENU_EXIT:
						Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "EXIT GAME?", Dialog.DIALOG_NEXTSTATE_EXIT);
					default:
						break;
					}
				}
			}
			/*
			if (Monster.isTouchReleaseInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				isEnableSound = !isEnableSound;
				if (!isEnableSound) {
					SoundManager.pausesoundLoop(0);
				} else {
					SoundManager.playsoundLoop(0, true);
				}
			}

			if (Monster.isTouchReleaseInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				changeState(STATE_LEADERBOARD);
			}

			if (Monster.isTouchReleaseInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "EXIT GAME?", Dialog.DIALOG_NEXTSTATE_EXIT);
			}
			*/
			break;
		case MESSAGE_PAINT:

			

			mainCanvas.drawBitmap(splashBitmap, 0,0, mainPaint);

			bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);	

			//Map.DrawGame(canvasScreenBuffer);

			mainPaint.setAlpha(255);
			mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);
			
			mainCanvas.drawBitmap(gameTitleBitmap, (SCREEN_WIDTH - gameTitleBitmap.getWidth())/2,0, mainPaint);
			//matrix.reset();

			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			Rect textBounds =  new  Rect();
			android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			for (int i = 0; i < arrayMenu.length; i++) {
				int y = MENU_BEGIN_Y + i * (MENU_ELEMENT_H + MENU_ELEMENT_SPACE);
				if (isTouchDrapInRect(MENU_BEGIN_X - MENU_ELEMENT_W / 2, y - MENU_ELEMENT_H / 2, MENU_ELEMENT_W, MENU_ELEMENT_H))
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_HIGHTLIGHT, MENU_BEGIN_X, y);
				else
					StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_BUTTON_NORMAL, MENU_BEGIN_X, y);				
				android_FontNormal.setColor(Color.WHITE);		
				if (arrayMenu[i] == MENU_OPTION_SOUND) {
					if (isEnableSound)
						mainCanvas.drawText(arrayMenuString[i] + "on", MENU_BEGIN_X,  y + textBounds.height() / 2, android_FontNormal);
						//fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "ON", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
					else
						mainCanvas.drawText( arrayMenuString[i] + "off", MENU_BEGIN_X,  y + textBounds.height() / 2, android_FontNormal);
						//fontsmall_White.drawString(mainCanvas, arrayMenuString[i] + "OFF", MENU_BEGIN_X, y - fontsmall_White.getFontHeight() / 2, BitmapFont.ALIGN_CENTER);
				} else
				mainCanvas.drawText( arrayMenuString[i], MENU_BEGIN_X,  y + textBounds.height() / 2, android_FontNormal);
				android_FontNormal.setColor(Color.WHITE);
			}

			int soundIndexFrame = isEnableSound ? DEF.FRAME_SOUND_ON_NORMAL : DEF.FRAME_SOUND_OFF_NORMAL;
/*
			if (!Monster.isTouchDrapInRect(DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, soundIndexFrame, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, soundIndexFrame + 1, DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!Monster.isTouchDrapInRect(SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);

			if (!Monster.isTouchDrapInRect(SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, DEF.FRAME_QUIT_NORMAL, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
			else
				StateGameplay.spriteDPad.drawAFrame(Monster.mainCanvas, DEF.FRAME_QUIT_HIGHTLIGHT, SCREEN_WIDTH - 3 * DEF.DIALOG_BUTTON_CONFIRM_W / 2, MENU_BUTTON_ICON_Y);
*/
			//if(System.currentTimeMillis()%1000 > 500)
			//if (fontbig_White != null)
			//	fontbig_White.drawString(mainCanvas, "TOUCH THE SCREEN TO CONTINUE", SCREEN_WIDTH/2, SCREEN_HEIGHT - 150, BitmapFont.ALIGN_CENTER);	

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

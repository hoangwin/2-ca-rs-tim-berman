package com.thuanviet.ngoisao.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.ngoisao.BitmapFont;
import com.thuanviet.ngoisao.DEF;
import com.thuanviet.ngoisao.Dialog;
import com.thuanviet.ngoisao.GameLayer;
import com.thuanviet.ngoisao.GameLib;
import com.thuanviet.ngoisao.IConstant;
import com.thuanviet.ngoisao.PopStar;
import com.thuanviet.ngoisao.SoundManager;


import android.graphics.Color;
import android.graphics.Rect;

import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateSelectLevel extends PopStar
{
	public static RectF rectF;
	public static int NUM_ROW = 4;
	public static int NUM_COL = 4;
	public static int MAX_PAG = 1;
	public static int mcurrentPage = 0;
	public static int SELECTLEVEL_BUTTON_W = 0;
	public static int SELECTLEVEL_BUTTON_H = 0;
	public static int SELECTLEVEL_BEGIN_Y = 0;
	public static int SELECTLEVEL_BEGIN_X = 0;
	public static int BUTTON_ARROW_CONFIRM_W = 60;
	public static int BUTTON_ARROW_CONFIRM_H = 60;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			rectF = new RectF(DEF.SELECTLEVEL_BACKGROUND_X, DEF.SELECTLEVEL_BACKGROUND_Y, DEF.SELECTLEVEL_BACKGROUND_X + DEF.SELECTLEVEL_BACKGROUND_W, DEF.SELECTLEVEL_BACKGROUND_Y + DEF.SELECTLEVEL_BACKGROUND_H);
			mcurrentPage = PopStar.mLevelUnlock / (NUM_ROW * NUM_COL);
			if(mcurrentPage >= MAX_PAG)
				mcurrentPage = 0;

			SELECTLEVEL_BUTTON_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_SELECTLEVEL_NORMAL);
			SELECTLEVEL_BUTTON_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_SELECTLEVEL_NORMAL);
			SELECTLEVEL_BEGIN_Y = (int)(220*scaleY);//(SCREEN_HEIGHT - ((SELECTLEVEL_BUTTON_H + DEF.SELECTLEVEL_CONTENT_SPACE_H) * (NUM_ROW - 1))) / 2 - 20;
			SELECTLEVEL_BEGIN_X = (SCREEN_WIDTH - ((SELECTLEVEL_BUTTON_W + DEF.SELECTLEVEL_CONTENT_SPACE_W) * (NUM_COL - 1))) / 2;

			DEF.SELECTLEVEL_CONTENT_SPACE_H =(int)(40*scaleY);// ((SCREEN_HEIGHT - SELECTLEVEL_BEGIN_Y) - NUM_ROW * SELECTLEVEL_BUTTON_H - SCREEN_HEIGHT / 10) / (NUM_ROW - 1);
			BUTTON_ARROW_CONFIRM_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_LEFT_NORMAL);
			BUTTON_ARROW_CONFIRM_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_LEFT_NORMAL);
			//SoundManager.pausesoundLoop(0);
			break;
		case MESSAGE_UPDATE:
			for (int i = 0; i < NUM_ROW; i++) {
				int y = SELECTLEVEL_BEGIN_Y + i * (SELECTLEVEL_BUTTON_H + DEF.SELECTLEVEL_CONTENT_SPACE_H);
				int x = 0;
				for (int j = 0; j < NUM_COL; j++) {
					x = SELECTLEVEL_BEGIN_X + j * (SELECTLEVEL_BUTTON_W + DEF.SELECTLEVEL_CONTENT_SPACE_W);

					if (isTouchReleaseInRect(x - SELECTLEVEL_BUTTON_W / 2, y - SELECTLEVEL_BUTTON_H / 2, SELECTLEVEL_BUTTON_W, SELECTLEVEL_BUTTON_H)) {

						PopStar.mcurrentlevel = mcurrentPage * NUM_COL * NUM_ROW + i * NUM_ROW + j;
						if (PopStar.mcurrentlevel <= PopStar.mLevelUnlock) {

							changeState(STATE_HINT);
						}
						break;
					}

				}
			}

			//left right button
			if (MAX_PAG > 1)
				if (PopStar.isTouchReleaseInRect(SELECTLEVEL_BEGIN_X - 3 * BUTTON_ARROW_CONFIRM_W / 2, SCREEN_HEIGHT / 2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
					mcurrentPage--;
					if (mcurrentPage < 0)
						mcurrentPage = MAX_PAG - 1;
					SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				}

			//right	
			if (MAX_PAG > 1)
				if (PopStar.isTouchReleaseInRect(SCREEN_WIDTH - (SELECTLEVEL_BEGIN_X - BUTTON_ARROW_CONFIRM_W / 2), SCREEN_HEIGHT / 2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
					mcurrentPage++;
					if (mcurrentPage >= MAX_PAG)
						mcurrentPage = 0;
					SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				}

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || PopStar.isTouchReleaseInRect(SCREEN_WIDTH-  DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H)) {

				SoundManager.playSound(SoundManager.SOUND_BACK, 1);
				changeState(STATE_MAINMENU, true, true);
				break;
			}
			//if (GameLib.isTouchReleaseScreen()) {
			//	changeState(STATE_GAMEPLAY);
			//}

			break;
		case MESSAGE_PAINT:
			if (!StateGameplay.isIngame) {
				PopStar.mainPaint.setColor(Color.BLACK);
				PopStar.mainPaint.setStyle(Style.FILL);				
				mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);
			} else {
				StateGameplay.SendMessage(MESSAGE_PAINT);
			}
			Rect textBounds =  new  Rect();
			android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			if (MAX_PAG > 1)
				mainCanvas.drawText("Page : " + (mcurrentPage + 1) + "/" + MAX_PAG,  DEF.SELECTLEVEL_BACKGROUND_X + SELECTLEVEL_BUTTON_W + 2,  DEF.SELECTLEVEL_BACKGROUND_Y - 2 , android_FontNormal);
				//TapTapZooCrush.fontsmall_Yellow.drawString(TapTapZooCrush.mainCanvas, "Page : " + (mcurrentPage + 1) + "/" + MAX_PAG, DEF.SELECTLEVEL_BACKGROUND_X + SELECTLEVEL_BUTTON_W + 2, DEF.SELECTLEVEL_BACKGROUND_Y - 2, BitmapFont.ALIGN_LEFT);
			
			
			for (int i = 0; i < NUM_ROW; i++) {
				int y = SELECTLEVEL_BEGIN_Y + i * (SELECTLEVEL_BUTTON_H + DEF.SELECTLEVEL_CONTENT_SPACE_H);
				int x = 0;
				for (int j = 0; j < NUM_COL; j++) {
					x = SELECTLEVEL_BEGIN_X + j * (SELECTLEVEL_BUTTON_W + DEF.SELECTLEVEL_CONTENT_SPACE_W);
					PopStar.mcurrentlevel = mcurrentPage * NUM_COL * NUM_ROW + i * NUM_ROW + j;
					if (PopStar.mcurrentlevel <= PopStar.mLevelUnlock) {
						if (isTouchDrapInRect(x - SELECTLEVEL_BUTTON_W / 2, y - SELECTLEVEL_BUTTON_H / 2, SELECTLEVEL_BUTTON_W, SELECTLEVEL_BUTTON_H))
							StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_SELECTLEVEL_HIGHTLIGHT, x, y);
						else
							StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_SELECTLEVEL_NORMAL, x, y);
						mainCanvas.drawText(" " + (mcurrentPage * NUM_COL * NUM_ROW + i * NUM_ROW + j + 1) + " ", x, y , android_FontNormal);
						//fontsmall_White.drawString(mainCanvas, " " + (mcurrentPage * NUM_COL * NUM_ROW + i * NUM_ROW + j + 1) + " ", x, y - 3 * fontbig_Yellow.getFontHeight() / 4, BitmapFont.ALIGN_CENTER);
						if (PopStar.mcurrentlevel != PopStar.mLevelUnlock) {
							//	fontbig_Yellow.drawString(mainCanvas, "Pass", x, y - fontbig_Yellow.getFontHeight()/2  , BitmapFont.ALIGN_CENTER);
						} else
							mainCanvas.drawText( "Mới", x, y+ 3 * textBounds.height() / 4, android_FontNormal);
							//fontsmall_White.drawString(mainCanvas, "New", x, y, BitmapFont.ALIGN_CENTER);
					} else {
						StateGameplay.spriteDPad.drawAFrame(mainCanvas, DEF.FRAME_SELECTLEVEL_LOCK, x, y);
					}

				}
			}
			//select left and right button
			
			mainCanvas.drawText( "CHỌN MÀN", SCREEN_WIDTH / 2, textBounds.height(), android_FontNormal);
			
			//Monster.fontbig_Yellow.drawString(Monster.mainCanvas, "SELECT LEVEL", SCREEN_WIDTH / 2, fontbig_Yellow.getFontHeight(), BitmapFont.ALIGN_CENTER);
			if (MAX_PAG > 1)
				if (PopStar.isTouchDrapInRect(SELECTLEVEL_BEGIN_X - 3 * BUTTON_ARROW_CONFIRM_W / 2, SCREEN_HEIGHT / 2, BUTTON_ARROW_CONFIRM_W, BUTTON_ARROW_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_LEFT_HIGHTLIGHT, SELECTLEVEL_BEGIN_X - 3 * BUTTON_ARROW_CONFIRM_W / 2, SCREEN_HEIGHT / 2);
				else
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_LEFT_NORMAL, SELECTLEVEL_BEGIN_X - 3 * BUTTON_ARROW_CONFIRM_W / 2, SCREEN_HEIGHT / 2);
			//right	
			if (MAX_PAG > 1)
				if (PopStar.isTouchDrapInRect(SCREEN_WIDTH - (SELECTLEVEL_BEGIN_X - BUTTON_ARROW_CONFIRM_W / 2), SCREEN_HEIGHT / 2, BUTTON_ARROW_CONFIRM_W, BUTTON_ARROW_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_RIGHT_HIGHTLIGHT, SCREEN_WIDTH - (SELECTLEVEL_BEGIN_X - BUTTON_ARROW_CONFIRM_W / 2), SCREEN_HEIGHT / 2);
				else
					StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_BUTTON_RIGHT_NORMAL, SCREEN_WIDTH - (SELECTLEVEL_BEGIN_X - BUTTON_ARROW_CONFIRM_W / 2), SCREEN_HEIGHT / 2);

			//draw cancel
			if (PopStar.isTouchDrapInRect(SCREEN_WIDTH-  DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, SCREEN_WIDTH-  DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8);
			else
				StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_CANCEL_NORMAL, SCREEN_WIDTH-  DEF.BUTTON_CANCEL_CONFIRM_W - 8, DEF.SELECTLEVEL_BACKGROUND_Y + 8);

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

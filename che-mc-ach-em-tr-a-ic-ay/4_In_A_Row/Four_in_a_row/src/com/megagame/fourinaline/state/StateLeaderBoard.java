package com.megagame.fourinaline.state;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.regex.Pattern;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fourinaline.BitmapFont;
import com.megagame.fourinaline.Dialog;
import com.megagame.fourinaline.FourInALine;
import com.megagame.fourinaline.GameLayer;
import com.megagame.fourinaline.GameLib;
import com.megagame.fourinaline.IConstant;
import com.megagame.fourinaline.Map;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.text.method.HideReturnsTransformationMethod;
import android.util.Log;
import android.view.KeyEvent;

public class StateLeaderBoard extends FourInALine
{
	public static int m_start = 0;
	public static String user1 = "---";
	public static String user2 = "---";
	public static String user3 = "---";
	public static String user4 = "---";
	public static String user5 = "---";
	public static String score1 = "---";
	public static String score2 = "---";
	public static String score3 = "---";
	public static String score4 = "---";
	public static String score5 = "---";
	public static Bitmap rankBackground = null;
	public static int page = 0;//0 = Normal, 1 = Time Trial
	public static int RANK_BEGIN_Y = 0;
	public static int RANK_ELEMENT_H = 0;
	public static int WINLOSE_CONTENT_X=SCREEN_WIDTH/2;
	public static int WINLOSE_CONTENT_SPACE_W = (SCREEN_WIDTH-60)/2;
	public static synchronized void SendMessage(int type)
	{
		switch (type)
		{
		case MESSAGE_CTOR:
			page = 0;
			//RANK_ELEMENT_H = fontsmall_White.getFontHeight();
			user1 = "---";
			user2 = "---";
			user3 = "---";
			user4 = "---";
			user5 = "---";
			score1 = "---";
			score2 = "---";
			score3 = "---";
			score4 = "---";
			score5 = "---";
			//update score

			if (rankBackground == null) {
				rankBackground = loadImageFromAsset("image/rank.png");
				rankBackground = Bitmap.createScaledBitmap(rankBackground, SCREEN_WIDTH, SCREEN_HEIGHT, true);

			}
			DEF.WINLOSE_BUTTON_Y1 = (int) (1100 * 1.0 * SCREEN_HEIGHT / 1280);
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			//Log.d("USER NAME", "User : " + username);
			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;
			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			RANK_BEGIN_Y = (SCREEN_HEIGHT -  5*fontsmall_White.getFontHeight())/2;
			RANK_ELEMENT_H = fontsmall_White.getFontHeight();
			WINLOSE_CONTENT_SPACE_W = (int)((SCREEN_WIDTH-100*1.0*SCREEN_WIDTH/800)/2);
			break;
		case MESSAGE_UPDATE:
			if (mPreState == STATE_MAINMENU) {
				if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FourInALine.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_MAINMENU);
			} else {
				if (FourInALine.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_GAMEPLAY);

				if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FourInALine.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_MAINMENU);
			}
			break;
		case MESSAGE_PAINT:
			if (StateGameplay.isIngame)
				StateGameplay.SendMessage(MESSAGE_PAINT);

			matrix.reset();
			matrix.postTranslate((SCREEN_WIDTH - rankBackground.getWidth()) / 2, (SCREEN_HEIGHT - rankBackground.getHeight()) / 2);
			FourInALine.mainCanvas.drawBitmap(rankBackground, matrix, FourInALine.mainPaint);

			//draw text

			

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "RANK", WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "SCORE", WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "===================", WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "1:" + user1, WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 2 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, " " + score1, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 2 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "2:" + user2, WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 3 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, " " + score2, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 3 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "3:" + user3, WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 4 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, " " + score3, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 4 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "4:" + user4, WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 5 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, " " + score4, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 5 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "5:" + user5, WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 6 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, " " + score5, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 6 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);

			FourInALine.fontsmall_White.drawString(FourInALine.mainCanvas, "==================", WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 7 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);

			//TapFruit.fontsmall_Yellow.drawString(TapFruit.mainCanvas, "Total", WINLOSE_CONTENT_X - WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 7 * RANK_ELEMENT_H, BitmapFont.ALIGN_LEFT);
			//TapFruit.fontsmall_White.drawString(TapFruit.mainCanvas, " " + Map.mAllScore, WINLOSE_CONTENT_X + WINLOSE_CONTENT_SPACE_W, RANK_BEGIN_Y + 7 * RANK_ELEMENT_H, BitmapFont.ALIGN_RIGHT);
			if (mPreState == STATE_MAINMENU) {
				if (!FourInALine.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_OK_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			} else {
				if (!FourInALine.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

				if (!FourInALine.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				else
					StateGameplay.spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			}
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

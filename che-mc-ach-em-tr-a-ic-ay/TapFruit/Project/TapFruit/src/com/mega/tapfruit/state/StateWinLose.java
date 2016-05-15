package com.mega.tapfruit.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.mega.tapfruit.BitmapFont;
import com.mega.tapfruit.Dialog;
import com.mega.tapfruit.GameLayer;
import com.mega.tapfruit.GameLib;
import com.mega.tapfruit.IConstant;
import com.mega.tapfruit.Map;
import com.mega.tapfruit.FruitTap;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateWinLose extends FruitTap
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isLeaderBoard = true;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			DEF.WINLOSE_CONTENT_SPACE_H = fontsmall_White.getFontHeight();			
			FruitTap.mainActivity.saveGame();
			
			//Log.d("USER NAME", "User : "+ username);
			DEF.WINLOSE_BACKGROUND_W = SCREEN_WIDTH;
			DEF.WINLOSE_BACKGROUND_H = SCREEN_HEIGHT / 6 * 4;
			DEF.WINLOSE_BACKGROUND_X = 0;
			DEF.WINLOSE_BACKGROUND_Y = (SCREEN_HEIGHT - DEF.WINLOSE_BACKGROUND_H) / 2;

			rectF = new RectF(DEF.WINLOSE_BACKGROUND_X, DEF.WINLOSE_BACKGROUND_Y, DEF.WINLOSE_BACKGROUND_X + DEF.WINLOSE_BACKGROUND_W, DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H);
			DEF.WINLOSE_TITLE_Y = DEF.WINLOSE_BACKGROUND_Y + 1;
			DEF.WINLOSE_CONTENT_Y = DEF.WINLOSE_TITLE_Y + 2 * FruitTap.fontbig_Yellow.getFontHeight();

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_Y1 = DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H - DEF.DIALOG_BUTTON_CONFIRM_H - 2;
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;			
			break;
		case MESSAGE_UPDATE:

			if (FruitTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FruitTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);

			if (FruitTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
				FruitTap.mcurrentlevel++;
				changeState(STATE_LEADERBOARD); 
			}

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			
			FruitTap.mainPaint.setStyle(Style.FILL);
			FruitTap.mainPaint.setARGB(200, 0, 0, 0);
			FruitTap.mainCanvas.drawRect(0, 0, FruitTap.SCREEN_WIDTH, FruitTap.SCREEN_HEIGHT, FruitTap.mainPaint);
			FruitTap.mainPaint.setStyle(Style.FILL_AND_STROKE);
			FruitTap.mainPaint.setColor(Color.rgb(67, 120, 167));
			FruitTap.mainCanvas.drawRoundRect(rectF, 25, 25, FruitTap.mainPaint);//WINLOSE_TITLE_CONTENT_SPACE_H

			//draw text

			FruitTap.fontbig_Yellow.drawString(FruitTap.mainCanvas, "YOUR SCORE", DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y, BitmapFont.ALIGN_CENTER);
			StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_START_3, DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y + FruitTap.fontbig_Yellow.getFontHeight());

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Score :", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y, BitmapFont.ALIGN_LEFT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "==============", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Fruit x 5:", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FruitTap.fontsmall_White.drawString(FruitTap.mainCanvas, " " + (Map.scoreFruit5 * 5), DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Fruit x 10", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FruitTap.fontsmall_White.drawString(FruitTap.mainCanvas, " " + (Map.scoreFruit10 * 10), DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Fruit x 15", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FruitTap.fontsmall_White.drawString(FruitTap.mainCanvas, " " + (Map.scoreFruit15 * 15), DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			
			int effectScore = Map.mAllScore -  ((Map.scoreFruit5 * 5) +  (Map.scoreFruit10 * 10)+ (Map.scoreFruit15 * 15));
			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Effect : ", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 5 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FruitTap.fontsmall_White.drawString(FruitTap.mainCanvas, " " + effectScore, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 5 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "==============", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 6* DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);

			FruitTap.fontsmall_Yellow.drawString(FruitTap.mainCanvas, "Total", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FruitTap.fontsmall_White.drawString(FruitTap.mainCanvas, " " + Map.mAllScore, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			if (FruitTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			else
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

			if (FruitTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			else
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);

			if (FruitTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
			else
				StateGameplay.spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

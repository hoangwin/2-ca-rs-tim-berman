package com.megagame.fishrescue.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fishrescue.BitmapFont;
import com.megagame.fishrescue.Dialog;
import com.megagame.fishrescue.FishTap;
import com.megagame.fishrescue.GameLayer;
import com.megagame.fishrescue.GameLib;
import com.megagame.fishrescue.GameThread;
import com.megagame.fishrescue.IConstant;
import com.megagame.fishrescue.Map;
import com.megagame.fishrescue.SoundManager;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateWinLose extends FishTap
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isWin = false;
	public static Bitmap winEffect;
	public static Bitmap loseEffect;

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
			if (loseEffect == null)
				loseEffect = GameLib.loadImageFromAsset("image/loseanim.png");
			if (winEffect == null)
				winEffect = GameLib.loadImageFromAsset("image/winanim.png");
			DEF.WINLOSE_CONTENT_SPACE_H = fontsmall_White.getFontHeight();
			FishTap.mainActivity.saveGame();
			FishTap.mLevelUnlock++;
			SoundManager.pausesoundLoop(1);
			if (isWin)
				SoundManager.playSound(SoundManager.SOUND_WIN, 1);
			else
				SoundManager.playSound(SoundManager.SOUND_LOSE, 1);

			//Log.d("USER NAME", "User : "+ username);
			DEF.WINLOSE_BACKGROUND_W = SCREEN_WIDTH;
			DEF.WINLOSE_BACKGROUND_H = SCREEN_HEIGHT / 6 * 4;
			DEF.WINLOSE_BACKGROUND_X = 0;
			DEF.WINLOSE_BACKGROUND_Y = (SCREEN_HEIGHT - DEF.WINLOSE_BACKGROUND_H) / 2;

			rectF = new RectF(DEF.WINLOSE_BACKGROUND_X, DEF.WINLOSE_BACKGROUND_Y, DEF.WINLOSE_BACKGROUND_X + DEF.WINLOSE_BACKGROUND_W, DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H);
			DEF.WINLOSE_TITLE_Y = DEF.WINLOSE_BACKGROUND_Y + 1;
			DEF.WINLOSE_CONTENT_Y = DEF.WINLOSE_TITLE_Y + 2 * FishTap.fontbig_Yellow.getFontHeight();

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_Y1 = DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H - DEF.DIALOG_BUTTON_CONFIRM_H - 2;
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			break;
		case MESSAGE_UPDATE:
			if (frameCountCurrentState < 20)
				return;
			if (FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);
			if (isWin && FishTap.mcurrentlevel < Map.LevelMap.length - 1)
				if (FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {
					FishTap.mcurrentlevel++;
					changeState(STATE_GAMEPLAY);
				}

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}

			FishTap.mainPaint.setStyle(Style.FILL);
			FishTap.mainPaint.setARGB(220, 0, 0, 0);
			FishTap.mainCanvas.drawRect(0, 0, FishTap.SCREEN_WIDTH, FishTap.SCREEN_HEIGHT, FishTap.mainPaint);
			//	FishRescue.mainPaint.setStyle(Style.FILL_AND_STROKE);
			//	FishRescue.mainPaint.setColor(Color.rgb(67, 120, 167));
			//	FishRescue.mainCanvas.drawRoundRect(rectF, 25, 25, FishRescue.mainPaint);//WINLOSE_TITLE_CONTENT_SPACE_H

			//draw text
			/*
			 * FishRescue.fontbig_Yellow.drawString(FishRescue.mainCanvas,
			 * "YOUR SCORE", DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y,
			 * BitmapFont.ALIGN_CENTER);
			 * StateGameplay.spriteDPad.drawAFrame(FishRescue.mainCanvas,
			 * DEF.FRAME_START_3, DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y +
			 * FishRescue.fontbig_Yellow.getFontHeight());
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Score :", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W,
			 * DEF.WINLOSE_CONTENT_Y, BitmapFont.ALIGN_LEFT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "==============", DEF.WINLOSE_CONTENT_X -
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y +
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Fruit x 5:", DEF.WINLOSE_CONTENT_X -
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			 * FishRescue.fontsmall_White.drawString(FishRescue.mainCanvas, " "
			 * + (Map.scoreFruit5 * 5), DEF.WINLOSE_CONTENT_X +
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Fruit x 10", DEF.WINLOSE_CONTENT_X -
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			 * FishRescue.fontsmall_White.drawString(FishRescue.mainCanvas, " "
			 * + (Map.scoreFruit10 * 10), DEF.WINLOSE_CONTENT_X +
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Fruit x 15", DEF.WINLOSE_CONTENT_X -
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			 * FishRescue.fontsmall_White.drawString(FishRescue.mainCanvas, " "
			 * + (Map.scoreFruit15 * 15), DEF.WINLOSE_CONTENT_X +
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			 * 
			 * int effectScore = Map.mAllScore - ((Map.scoreFruit5 * 5) +
			 * (Map.scoreFruit10 * 10)+ (Map.scoreFruit15 * 15));
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Effect : ", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W,
			 * DEF.WINLOSE_CONTENT_Y + 5 * DEF.WINLOSE_CONTENT_SPACE_H,
			 * BitmapFont.ALIGN_LEFT);
			 * FishRescue.fontsmall_White.drawString(FishRescue.mainCanvas, " "
			 * + effectScore, DEF.WINLOSE_CONTENT_X +
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 5 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "==============", DEF.WINLOSE_CONTENT_X -
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 6*
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			 * 
			 * FishRescue.fontsmall_Yellow.drawString(FishRescue.mainCanvas,
			 * "Total", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W,
			 * DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H,
			 * BitmapFont.ALIGN_LEFT);
			 * FishRescue.fontsmall_White.drawString(FishRescue.mainCanvas, " "
			 * + Map.mAllScore, DEF.WINLOSE_CONTENT_X +
			 * DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 *
			 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			 */
			matrix.reset();
			float scaleMaster = SCREEN_WIDTH / 800f;
			float scale = (1.0f * frameCountCurrentState) / 20;
			scale = scale * scaleMaster;
			if (scale > scaleMaster)
				scale = scaleMaster;
			matrix.setScale(scale, scale);
			matrix.postTranslate((SCREEN_WIDTH - scale * winEffect.getWidth()) / 2, (SCREEN_HEIGHT - scale * winEffect.getHeight()) / 2);
			mainPaint.setAntiAlias(true);
			mainPaint.setFilterBitmap(true);
			mainPaint.setDither(true);
			if (isWin) {
				FishTap.mainCanvas.drawBitmap(winEffect, matrix, FishTap.mainPaint);
			} else {
				FishTap.mainCanvas.drawBitmap(loseEffect, matrix, FishTap.mainPaint);
			}

			if (isWin) {
				if (FishTap.mcurrentlevel < (Map.LevelMap.length - 1))
					FishTap.fontbig_Yellow.drawString(FishTap.mainCanvas, "Completed  Level", SCREEN_WIDTH / 2, fontbig_Yellow.getFontHeight(), BitmapFont.ALIGN_CENTER);
				else {
					FishTap.fontbig_Yellow.drawString(FishTap.mainCanvas, "Completed  Level \n And You'r Complete Game", SCREEN_WIDTH / 2, fontbig_Yellow.getFontHeight(), BitmapFont.ALIGN_CENTER);
				}
			}

			if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			else
				StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

			if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			else
				StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			if (isWin && FishTap.mcurrentlevel < (Map.LevelMap.length - 1)) {
				if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
				else
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
			}
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

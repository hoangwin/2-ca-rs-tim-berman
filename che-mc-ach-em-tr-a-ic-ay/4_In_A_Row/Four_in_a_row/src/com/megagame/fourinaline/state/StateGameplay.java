package com.megagame.fourinaline.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fourinaline.BitmapFont;
import com.megagame.fourinaline.Dialog;
import com.megagame.fourinaline.FourInALine;
import com.megagame.fourinaline.GameLayer;
import com.megagame.fourinaline.GameLib;
import com.megagame.fourinaline.GameThread;
import com.megagame.fourinaline.IConstant;
import com.megagame.fourinaline.Map;
import com.megagame.fourinaline.SoundManager;
import com.megagame.fourinaline.Sprite;
import com.megagame.fourinaline.actor.DiamondActor;

import resolution.DEF;

import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends FourInALine
{

	public static Bitmap backgroundImage;
	public static Sprite spriteDPad = null;
	public static Sprite spriteFruit = null;
	public static boolean isIngame = false;
	public static long timepause;
	public static int gameMode = 0;//normal mode
	public static int gameDifficult = 0;//normal mode
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:

			// image/character/character_1.png
			isIngame = true;
			if (backgroundImage != null)
				backgroundImage.recycle();
			backgroundImage = null;
			Random a = new Random();
			int r = a.nextInt(2) + 1;
			//int r = 1;
			a = null;
			// Log.d("aaaaaaaaaaaaaaaaaaa","  "+r);
			backgroundImage = loadImageFromAsset("image/screen/screen" + r + ".jpg");

			//mainPaint.setAntiAlias(true);
			//mainPaint.setFilterBitmap(true);
			//mainPaint.setDither(true);
			backgroundImage = Bitmap.createScaledBitmap(backgroundImage, SCREEN_WIDTH, SCREEN_HEIGHT, true);
			Map.init();
			SoundManager.playsoundLoop(0, true);

			break;
		case MESSAGE_UPDATE:
			// cheat

			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				StateWinLose.isWin = true;
				FourInALine.changeState(IConstant.STATE_WINLOSE);

			}
			// end cheat
			if (Dialog.isShowDialog) {
				Dialog.updateDialog();
				return;
			}
			Map.Update();
			updatetouch();

			break;

		case MESSAGE_PAINT:
			matrix.reset();
			if (backgroundImage != null)
				mainCanvas.drawBitmap(backgroundImage, matrix, mainPaint);
			bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);
			// PikachuActivityHD.mainPaint.setStyle(Style.FILL);
			// PikachuActivityHD.mainPaint.setARGB(130, 0, 0, 0);
			// PikachuActivityHD.mainCanvas.drawRect(0, 0,
			// PikachuActivityHD.SCREEN_WIDTH, PikachuActivityHD.SCREEN_HEIGHT,
			// PikachuActivityHD.mainPaint);

			// Map.drawMap(canvasScreenBuffer);
			Map.DrawGame(canvasScreenBuffer);
			// PikachuActivity.matrix.postScale(SCREEN_WIDTH / 1024f,
			// SCREEN_HEIGHT / 600f);//dua vap file map
			mainPaint.setAlpha(255);
			mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);

			// mainPaint.setStyle(Style.FILL);
			// mainPaint.setARGB(150, 0, 0, 0);
			// mainCanvas.drawRect(0, 0, SCREEN_WIDTH, DEF.BUTTON_IGM_H +
			// DEF.BUTTON_IGM_H/4, mainPaint);
			// mainPaint.setAlpha(255);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			drawHUD(mainCanvas);
			break;
		case MESSAGE_DTOR:
			isIngame = false;
			break;
		}
	}

	public static void drawHUD(Canvas c)
	{
		if(FourInALine.mCurrentState != FourInALine.STATE_GAMEPLAY)
			return;
		//fontsmall_Yellow.drawString(mainCanvas, "SCORE : " + Map.mAllScore + "/" + Map.LevelMap[mcurrentlevel][0], DEF.LABEL_LEVEL_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		//fontsmall_Yellow.drawString(mainCanvas, "Failed: " + (Map.tapFail) + "/" + Map.LevelMap[mcurrentlevel][1], DEF.LABEL_SCORE_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);
		if (isTouchDrapInRect(0, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT,0, DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_RETRY_NORMAL, 0, DEF.BUTTON_IGM_Y);
		//sound
		int frameSound = DEF.FRAME_SOUND_ON_NORMAL;
		if(!FourInALine.isEnableSound)
			frameSound = DEF.FRAME_SOUND_OFF_NORMAL;
		if (isTouchDrapInRect((SCREEN_WIDTH - DEF.BUTTON_IGM_W)/2, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(FourInALine.mainCanvas,frameSound+1,(SCREEN_WIDTH - DEF.BUTTON_IGM_W)/2, DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(FourInALine.mainCanvas, frameSound, (SCREEN_WIDTH - DEF.BUTTON_IGM_W)/2, DEF.BUTTON_IGM_Y);
		//sound
		
		if (isTouchDrapInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(FourInALine.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);

		//fontsmall_Yellow.drawString(mainCanvas, "Timer: " + Map.totalTimePlayGame / 1000, DEF.BUTTON_TIMER_BAR_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		//fontsmall_Yellow.drawString(mainCanvas, "Level: " + (mcurrentlevel +1), DEF.BUTTON_TIMER_BAR_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);

		
		
	}

	public static void updatetouch()
	{
		if (isKeyReleased(KeyEvent.KEYCODE_BACK) || isTouchReleaseInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H)) {
			Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "Do you want to return to mainmenu?", Dialog.DIALOG_BACK_TO_MAINMENU_EXIT);
			SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
			//changeState(STATE_IGM, true, false);
		}

		if (isTouchDrapInRect(0, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
		{
			Dialog.showDialog(Dialog.DIALOG_TYPE_CONFIRM, "", "Do you want to restart game?\n Are you sure??", Dialog.DIALOG_RESTART_GAME);
			SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
		}
		//sound
		
		if (isTouchDrapInRect((SCREEN_WIDTH - DEF.BUTTON_IGM_W)/2, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
		{
			FourInALine.isEnableSound =!FourInALine.isEnableSound;
			if (!isEnableSound) {
				SoundManager.pausesoundLoop(0);
			} else {
				SoundManager.playsoundLoop(0, true);
			}
		}
	}
	// set position of dpad

}

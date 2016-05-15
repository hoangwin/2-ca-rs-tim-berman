package com.mega.tapfruit.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.mega.tapfruit.BitmapFont;
import com.mega.tapfruit.Dialog;
import com.mega.tapfruit.GameLayer;
import com.mega.tapfruit.GameLib;
import com.mega.tapfruit.GameThread;
import com.mega.tapfruit.IConstant;
import com.mega.tapfruit.Map;
import com.mega.tapfruit.SoundManager;
import com.mega.tapfruit.Sprite;
import com.mega.tapfruit.FruitTap;
import com.mega.tapfruit.actor.FruitObject;

import resolution.DEF;

import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends FruitTap {

	public static Bitmap backgroundImageSelectLevel;
	public static Bitmap backgroundImage;
	public static Sprite spriteDPad = null;
	public static Sprite spriteFruit = null;
	public static boolean isIngame = false;
	public static long timepause;

	public static synchronized void SendMessage(int type) {

		switch (type) {
		case MESSAGE_CTOR:

			// image/character/character_1.png
			isIngame = true;
			if (backgroundImage != null)
				backgroundImage.recycle();
			backgroundImage = null;
			Random a = new Random();
			int r = a.nextInt(5) + 1;
			a = null;
			// Log.d("aaaaaaaaaaaaaaaaaaa","  "+r);
			backgroundImage = loadImageFromAsset("image/screen/screen" + r
					+ ".jpg");
			
			//mainPaint.setAntiAlias(true);
			//mainPaint.setFilterBitmap(true);
			//mainPaint.setDither(true);
			backgroundImage = Bitmap.createScaledBitmap(backgroundImage,					
					SCREEN_WIDTH, SCREEN_HEIGHT, true);


			FruitObject.sprite = StateGameplay.spriteFruit;
			Map.init();
			DEF.LABEL_SCORE_Y = fontsmall_Yellow.getFontHeight();

			// SoundManager.stopSound(SoundManager.SOUND_TITLE);
			// SoundManager.mMediaPlayer
			SoundManager.playsoundLoop(1, true);
			// clean wall in map
			// GameLayer.arrayListDataMap.get(0)[6][6] = -1;
			// GameLayer.arrayListDataMap.get(0)[7][6] = -1;

			// Log.d("map.doorExit_Row"," " + map.doorExit_Row);
			// Log.d("map.doorExit_Col"," " + map.doorExit_Col);

			break;
		case MESSAGE_UPDATE:
			// cheat
			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				FruitTap.changeState(IConstant.STATE_WINLOSE);

			}
			// end cheat
			if (Dialog.isShowDialog)
				return;
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
			drawHUD(mainCanvas);
			break;
		case MESSAGE_DTOR:
			isIngame = false;
			break;
		}
	}

	public static void drawHUD(Canvas c) {
		// score
		// spriteDPad.drawAFrame(PikachuActivity.mainCanvas, DEF.FRAME_SCORE, 0,
		// 0);
		// mainPaint.setStyle(Style.FILL);
		// mainPaint.setColor(0xFF2b8fbe);
		// c.drawRect(0, 0, SCREEN_WIDTH, DEF.BUTTON_TIMER_BAR_H, mainPaint);

		fontsmall_White.drawString(mainCanvas, "Score: " + Map.mAllScore,
				DEF.LABEL_LEVEL_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		fontsmall_White.drawString(mainCanvas, "Fail: " + (Map.tapFail),
				DEF.LABEL_SCORE_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);
		// if (Dialog.isShowDialog || mCurrentState != STATE_GAMEPLAY)
		// return;
		// draw pause button
		if (isTouchDrapInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y,
				DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(FruitTap.mainCanvas,
					DEF.FRAME_PAUSE_HIGHTLIGHT, DEF.BUTTON_IGM_X,
					DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(FruitTap.mainCanvas, DEF.FRAME_PAUSE_NORMAL,
					DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);

		fontsmall_White.drawString(mainCanvas, "Timer: "
				+ Map.totalTimePlayGame / 1000, DEF.BUTTON_TIMER_BAR_X,
				DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		// timer bar
		// spriteDPad.drawAFrame(TapFruit.mainCanvas, DEF.FRAME_TIMER_BAR_0,
		// DEF.BUTTON_TIMER_BAR_X, DEF.BUTTON_TIMER_BAR_Y);

		// double width =
		// StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_1);
		// width = width - width * (Map.mTimerCount * 1.0) / Map.mTimerDecrease;

		// TapFruit.mainCanvas.save();
		// TapFruit.mainCanvas.clipRect(DEF.BUTTON_TIMER_BAR_X,
		// DEF.BUTTON_TIMER_BAR_Y, DEF.BUTTON_TIMER_BAR_X + (int) width,
		// DEF.BUTTON_TIMER_BAR_Y + 32);
		// spriteDPad.drawAFrame(TapFruit.mainCanvas, DEF.FRAME_TIMER_BAR_1,
		// DEF.BUTTON_TIMER_BAR_X, DEF.BUTTON_TIMER_BAR_Y);
		// TapFruit.mainCanvas.restore();

	}

	public static void updatetouch() {
		if (isKeyReleased(KeyEvent.KEYCODE_BACK)
				|| isTouchReleaseInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y,
						DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H)) {
			changeState(STATE_IGM, true, false);
		}

	}
	// set position of dpad

}

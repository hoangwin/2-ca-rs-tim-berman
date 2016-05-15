package com.thuanviet.ngoisao.state;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Currency;
import java.util.Random;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.ngoisao.BitmapFont;
import com.thuanviet.ngoisao.DEF;
import com.thuanviet.ngoisao.Dialog;
import com.thuanviet.ngoisao.GameLayer;
import com.thuanviet.ngoisao.GameLib;
import com.thuanviet.ngoisao.GameThread;
import com.thuanviet.ngoisao.IConstant;
import com.thuanviet.ngoisao.Map;
import com.thuanviet.ngoisao.PopStar;
import com.thuanviet.ngoisao.SoundManager;
import com.thuanviet.ngoisao.Sprite;
import com.thuanviet.ngoisao.actor.DiamondActor;


import android.graphics.Bitmap;
import android.graphics.Bitmap.Config;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateGameplay extends PopStar
{

	public static Bitmap backgroundImage;
	public static Sprite spriteDPad = null;
	public static Sprite spriteFruit = null;
	public static boolean isIngame = false;
	public static long timepause;
	public static int gameMode = 0;//normal mode
	public static int effectClearStageY = 0;//normal mode	
	public static Paint android_FontBigEffect = null;
	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:

			// image/character/character_1.png
			android_FontBigEffect = new Paint(android_FontBig);
			android_FontBigEffect.setColor(Color.rgb(255,255,255));
			android_FontBigEffect.setStyle(Style.FILL_AND_STROKE);
			android_FontBigEffect.setStrokeWidth( 1+ (int)(7*scaleX));
			isIngame = true;
			if (backgroundImage == null)
			{
				backgroundImage = loadImageFromAsset("image/screen/screen1.jpg");
				backgroundImage = Bitmap.createScaledBitmap(backgroundImage, SCREEN_WIDTH, SCREEN_HEIGHT, true);
			}
			Map.init();
			Rect textBounds =  new  Rect();
			android_FontSmall.getTextBounds("Maig", 0, "Maig".length(), textBounds);
			DEF.LABEL_LEVEL_Y = (int)(50*StateGameplay.scaleY);//textBounds.height();//fontsmall_Yellow.getFontHeight();
			DEF.LABEL_SCORE_Y = (int)(106*StateGameplay.scaleY);//3*textBounds.height();//fontsmall_Yellow.getFontHeight();

			DEF.BUTTON_TIMER_BAR_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_0);
			DEF.BUTTON_TIMER_BAR_H = DEF.BUTTON_IGM_W + 2;// StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_TIMER_BAR_0);
			DEF.BUTTON_TIMER_BAR_X = (SCREEN_WIDTH - DEF.BUTTON_TIMER_BAR_W) / 2;
			DEF.BUTTON_TIMER_BAR_Y = Map.BEGIN_Y + Map.MAX_ROW * Map.ITEM_HEIGHT + 2*Map.ITEM_HEIGHT;
			effectClearStageY = (int)(-100*scaleY);
			SoundManager.playsoundLoop(0, true);
			break;
		case MESSAGE_UPDATE:
			// cheat

			if (isKeyReleased(KeyEvent.KEYCODE_9)) {
				StateWinLose.isWin = true;
				PopStar.changeState(IConstant.STATE_WINLOSE);

			}
			if (isKeyReleased(KeyEvent.KEYCODE_8)) {
				StateWinLose.isWin = false;
				PopStar.changeState(IConstant.STATE_WINLOSE);

			}
			// end cheat
			if (Dialog.isShowDialog)
				return;
			Map.Update();
			updatetouch();

			break;

		case MESSAGE_PAINT:			
			if (backgroundImage != null)
				mainCanvas.drawBitmap(backgroundImage, 0,0, mainPaint);
			//bitmapScreenBuffer.eraseColor(Color.TRANSPARENT);
			Map.DrawGame(mainCanvas);
			// PikachuActivity.matrix.postScale(SCREEN_WIDTH / 1024f,
			// SCREEN_HEIGHT / 600f);//dua vap file map
			//mainPaint.setAlpha(255);
			//mainCanvas.drawBitmap(bitmapScreenBuffer, 0, 0, mainPaint);
			drawHUD(mainCanvas);
			break;
		case MESSAGE_DTOR:
			isIngame = false;
			break;
		}
	}

	public static void drawHUD(Canvas c)
	{
		android_FontSmall.setTextAlign(Align.LEFT);
		if (gameMode == 1)
		{
			spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_TARGET, (int)( 10*scaleX),(int)( 10*scaleY));
			spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_POINT, (int)( 10*scaleX),(int)( 60*scaleY));
			mainCanvas.drawText(  "" + Map.scoreLevel[mcurrentlevel], DEF.LABEL_LEVEL_X, DEF.LABEL_LEVEL_Y,  android_FontSmall);
			mainCanvas.drawText(  "" + Map.score, DEF.LABEL_SCORE_X, DEF.LABEL_SCORE_Y, android_FontSmall);
		}	//fontsmall_White.drawString(mainCanvas, "Level : " + (mcurrentlevel +1), DEF.LABEL_LEVEL_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		
		android_FontSmall.setTextAlign(Align.CENTER);
		//fontsmall_White.drawString(mainCanvas, "Score : " + Map.score, DEF.LABEL_SCORE_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);
		//fontsmall_Yellow.drawString(mainCanvas, "SCORE : " + Map.mAllScore + "/" + Map.LevelMap[mcurrentlevel][0], DEF.LABEL_LEVEL_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		//fontsmall_Yellow.drawString(mainCanvas, "Failed: " + (Map.tapFail) + "/" + Map.LevelMap[mcurrentlevel][1], DEF.LABEL_SCORE_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);

		if (isTouchDrapInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H))
			spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_PAUSE_HIGHTLIGHT, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);
		else
			spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_PAUSE_NORMAL, DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y);

		//fontsmall_Yellow.drawString(mainCanvas, "Timer: " + Map.totalTimePlayGame / 1000, DEF.BUTTON_TIMER_BAR_X, DEF.LABEL_LEVEL_Y, BitmapFont.ALIGN_LEFT);
		//fontsmall_Yellow.drawString(mainCanvas, "Level: " + (mcurrentlevel +1), DEF.BUTTON_TIMER_BAR_X, DEF.LABEL_SCORE_Y, BitmapFont.ALIGN_LEFT);

		//timer bar		
		spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_TIMER_BAR_0, DEF.BUTTON_TIMER_BAR_X, DEF.BUTTON_TIMER_BAR_Y);

		double width = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_1);
		
		
		String text = "";
		int percent = (Map.score*100 /  Map.scoreLevel[mcurrentlevel]);
		if(percent >100)
			percent = 100;
		text = "" + percent + "%";
		width = width - width*(100.0 - percent) / 100;
		
		PopStar.mainCanvas.save();
		PopStar.mainCanvas.clipRect(DEF.BUTTON_TIMER_BAR_X, DEF.BUTTON_TIMER_BAR_Y, DEF.BUTTON_TIMER_BAR_X + (int) width, DEF.BUTTON_TIMER_BAR_Y + 32);
		spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_TIMER_BAR_1, DEF.BUTTON_TIMER_BAR_X, DEF.BUTTON_TIMER_BAR_Y);
		PopStar.mainCanvas.restore();
		Rect textBounds =  new  Rect();
		android_FontSmall.getTextBounds("Maig", 0, "Maig".length(), textBounds);
		mainCanvas.drawText( text,  SCREEN_WIDTH / 2, DEF.BUTTON_TIMER_BAR_Y + textBounds.height(), android_FontSmall);
		if(percent ==100)
		{
			if(effectClearStageY <DEF.BUTTON_TIMER_BAR_Y)
			{
				effectClearStageY += (int)(30*scaleY); 
			}
			spriteDPad.drawAFrame(PopStar.mainCanvas, 37,SCREEN_WIDTH / 2, effectClearStageY);
		}
		//fontsmall_White.drawString(mainCanvas,text , SCREEN_WIDTH / 2, DEF.BUTTON_TIMER_BAR_Y, BitmapFont.ALIGN_CENTER);
	}

	public static void updatetouch()
	{
		if (isKeyReleased(KeyEvent.KEYCODE_BACK) || isTouchReleaseInRect(DEF.BUTTON_IGM_X, DEF.BUTTON_IGM_Y, DEF.BUTTON_IGM_W, DEF.BUTTON_IGM_H)) {
			changeState(STATE_IGM, true, false);
		}

	}
	// set position of dpad

}

package com.mega.tapfruit;

import java.io.FilterReader;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Random;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

import com.mega.tapfruit.actor.Actor;
import com.mega.tapfruit.actor.FruitObject;
import com.mega.tapfruit.state.StateGameplay;
import com.mega.tapfruit.state.StateWinLose;

import resolution.DEF;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.graphics.RectF;
import android.util.Log;

public class Map
{
	public static int mAllScore = 0;
	public static long mTimerDecrease = 0;
	public static long totalTimePlayGame = 0;
	public static long tapFail = 0;
	public static ArrayList<FruitObject> arrayList;

	public static long lastTimeRandomFruitObkect = 100;
	public static long countTimeRandomFruitObject = 500;

	public static long countTimeCreateSpecial = 15000;
	public static long lastTimeCreateSpecial = 0;
	public static int MINI_MUN_SPEED = 3;

	public static FruitObject currentFruitObject;
	public static Random random = new Random();

	//save score 
	public static int scoreFruit5 = 0;
	public static int scoreFruit10 = 0;
	public static int scoreFruit15 = 0;

	//	public static int countSelectOneFrame = 0;
	//	public static FruitObject comboEffect;

	public static void init()
	{
		MINI_MUN_SPEED = 3;
		//comboEffect = new FruitObject(FruitObject.TYPE_COMBO_EFFECT, 0, 0, 0, 0, 0, 0);
		arrayList = new ArrayList<FruitObject>();
		lastTimeRandomFruitObkect = GameThread.timeCurrent;
		lastTimeCreateSpecial = GameThread.timeCurrent;
		mAllScore = 0;
		mTimerDecrease = 0;
		totalTimePlayGame = 0;
		tapFail = 0;
		scoreFruit5 = 0;
		scoreFruit10 = 0;
		scoreFruit15 = 0;
		//		countSelectOneFrame = 0;
	}

	public static void DrawGame(Canvas c)
	{
		for (int i = 0; i < arrayList.size(); i++) {
			arrayList.get(i).paint(c);
		}
		//if (!comboEffect.sprite.hasAnimationFinished(comboEffect._currentAnimation, comboEffect._currentFrame, comboEffect._waitDelay)) {
		//	comboEffect.sprite.drawAnim(c);
		//	TapFruit.fontbig_White.drawString(c, " Combo", comboEffect.posX , comboEffect.posY, BitmapFont.ALIGN_CENTER);
		//}
	}

	public static void Update()
	{
		if (tapFail >= 20) {
			FruitTap.changeState(FruitTap.STATE_WINLOSE);
		}
		totalTimePlayGame += GameThread.timeCurrent - GameThread.timePrev;
		int temp = (int) Map.totalTimePlayGame / 40000;
		if (temp > 6)
			temp = 6;
		if (FruitTap.SCREEN_HEIGHT < 700)
			if (temp > 4)
				temp = 4;
		MINI_MUN_SPEED = 3 + temp;
		countTimeRandomFruitObject = 500 - temp * 60;

		if (GameThread.timeCurrent - lastTimeCreateSpecial > countTimeCreateSpecial) {
			int _type = 12 + random.nextInt(3);
			int _x = random.nextInt(FruitTap.SCREEN_WIDTH - 100 * FruitTap.SCREEN_WIDTH / 800);
			int _y = FruitObject.DEFAULT_Y;
			int _speed = MINI_MUN_SPEED + random.nextInt(3);
			int _coint = 0;
			int _animID = _type;//here
			int _state = 0;
			arrayList.add(new FruitObject(_type, _x, _y, _speed, _coint, _animID, _state));
			lastTimeCreateSpecial = GameThread.timeCurrent;
		}

		if (GameThread.timeCurrent - lastTimeRandomFruitObkect > countTimeRandomFruitObject) {
			randomFruitObject();
			lastTimeRandomFruitObkect = GameThread.timeCurrent;
		}

		//countSelectOneFrame = 0;
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			currentFruitObject.update();
			if (currentFruitObject.state == FruitObject.STATE_DIE) {
				arrayList.remove(i);
			}
		}
		//	if (countSelectOneFrame > 1) {
		//		comboEffect.sprite.setAnim(2, false, false);
		//		comboEffect.setPostion(GameLib.arraytouchPosX[0], GameLib.arraytouchPosY[0]);
		//		mAllScore += (countSelectOneFrame - 1) * 10;
		//		countSelectOneFrame = 0;
		//	}

		if (FruitObject.soundPlayID > -1) {
			SoundManager.playSound(FruitObject.soundPlayID, 1);
			FruitObject.soundPlayID = -1;
		}
	}

	public static void getBoomEffectList()
	{
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			if (currentFruitObject.type >= 6 && currentFruitObject.type < 12)
				currentFruitObject.chanegToWaitDie(true);
		}
	}

	public static void swapItemList()
	{
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			if (currentFruitObject.type >= 6 && currentFruitObject.type < 12)
				currentFruitObject.swapItem();
		}
	}

	public static void decreaseSpeedList()
	{
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			if (currentFruitObject.type < 6)
				currentFruitObject.decreaseSpeed(2);
		}
	}

	private static void randomFruitObject()
	{
		// TODO Auto-generated method stub

		//(int _type,int _x,int _y,int _speed,int _coint,int _animID,int _state)
		int _type = random.nextInt(FruitObject.COUNT_TYPE);
		int _x = random.nextInt(FruitTap.SCREEN_WIDTH - 100 * FruitTap.SCREEN_WIDTH / 1280);
		int _y = FruitObject.DEFAULT_Y;
		int _speed = MINI_MUN_SPEED + random.nextInt(3);
		int _coint = FruitObject.arrayCoint[_type];
		int _animID = _type;//here
		int _state = 0;
		arrayList.add(new FruitObject(_type, _x, _y, _speed, _coint, _animID, _state));
	}
	
}

package com.thuanviet.chemca.state;

import java.io.FilterReader;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Random;
//import org.apache.http.client.HttpClient;
//import org.apache.http.client.methods.HttpGet;
//import org.apache.http.impl.client.DefaultHttpClient;

import com.thuanviet.chemca.ChemFish;
import com.thuanviet.chemca.GameViewThread;
import com.thuanviet.chemca.SoundManager;
import com.thuanviet.chemca.actor.Actor;
import com.thuanviet.chemca.actor.FishSimple;

import resolution.DEF;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.graphics.RectF;
import android.util.Log;

public class MainMenuEffect
{
	public static ArrayList<FishSimple> arrayList;

	public static long lastTimeRandomFruitObkect = 100;
	public static long countTimeRandomFruitObject = 1000;

	public static long countTimeCreateSpecial = 15000;
	public static long lastTimeCreateSpecial = 0;
	public static int MINI_MUN_SPEED = 10;

	public static FishSimple currentFruitObject;
	public static Random random = new Random();

	//	public static int countSelectOneFrame = 0;
	//	public static FruitObject comboEffect;

	public static void init()
	{
		MINI_MUN_SPEED = 12;
		if (ChemFish.SCREEN_HEIGHT < 400)
			MINI_MUN_SPEED = 4;
		else if (ChemFish.SCREEN_HEIGHT < 600)
			MINI_MUN_SPEED = 6;
		else if (ChemFish.SCREEN_HEIGHT < 700)
			MINI_MUN_SPEED = 8;
		else if (ChemFish.SCREEN_HEIGHT < 1024)
			MINI_MUN_SPEED = 10;
		else if (ChemFish.SCREEN_HEIGHT < 1280)
			MINI_MUN_SPEED = 11;

		//comboEffect = new FruitObject(FruitObject.TYPE_COMBO_EFFECT, 0, 0, 0, 0, 0, 0);
		arrayList = new ArrayList<FishSimple>();
		lastTimeRandomFruitObkect = GameViewThread.timeCurrent;
		lastTimeCreateSpecial = GameViewThread.timeCurrent;
	

		//		countSelectOneFrame = 0;
	}

	public static void DrawGame(Canvas c)
	{
		for (int i = 0; i < arrayList.size(); i++) {
			arrayList.get(i).paint(c);
		}
	}

	public static void Update()
	{

	
		countTimeRandomFruitObject = (long) (1000 - ChemFish.mcurrentlevel * 40);

		if (GameViewThread.timeCurrent - lastTimeCreateSpecial > countTimeCreateSpecial) {
			int _type = 12 + random.nextInt(3);
			int _x = random.nextInt(ChemFish.SCREEN_WIDTH - (int)(ChemFish.scaleX* 100));
			int _y = FishSimple.DEFAULT_Y;
			int _speed = MINI_MUN_SPEED + random.nextInt(3);			
			int _animID = _type;//here
			int _state = 0;
			arrayList.add(new FishSimple(_type, _x, _y, _speed,  _animID, _state));
			lastTimeCreateSpecial = GameViewThread.timeCurrent;
		}

		if (GameViewThread.timeCurrent - lastTimeRandomFruitObkect > countTimeRandomFruitObject) {
			randomFruitObject();
			lastTimeRandomFruitObkect = GameViewThread.timeCurrent;
		}

		
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			currentFruitObject.update();
			if (currentFruitObject.state == FishSimple.STATE_DIE) {
				arrayList.remove(i);
			}
		}
		

		if (FishSimple.soundPlayID > -1) {
			SoundManager.playSound(FishSimple.soundPlayID, 1);
			FishSimple.soundPlayID = -1;
		}
	}


	public static void deleteItemList()
	{
	
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			currentFruitObject.chanegToWaitDie(true);
		}
	}

	public static void decreaseSpeedList()
	{
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			if (currentFruitObject.type < 16)
				currentFruitObject.decreaseSpeed(4);
		}
	}

	private static void randomFruitObject()
	{	
		int _type = random.nextInt(FishSimple.COUNT_TYPE);
		int _x = random.nextInt(ChemFish.SCREEN_WIDTH -(int)(ChemFish.scaleX* 100));
		int _y = FishSimple.DEFAULT_Y;
		int _speed = MINI_MUN_SPEED + random.nextInt(3);
		
		int _animID = _type;//here
		int _state = 0;
		arrayList.add(new FishSimple(_type, _x, _y, _speed, _animID, _state));
	}

	//public static int[][] LevelMap = { { 5, 3 }, { 10, 4 }, { 20, 5 }, { 40, 6 }, { 80, 7 }, { 140, 8 }, { 200, 9 }, { 240, 10 }, { 300, 11 }, { 370, 12 }, { 400, 13 }, { 450, 14 }, { 500, 15 }, { 550, 16 }, { 600, 17 }, { 650, 18 } };

}

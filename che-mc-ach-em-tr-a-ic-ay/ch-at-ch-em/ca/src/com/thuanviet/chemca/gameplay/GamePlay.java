package com.thuanviet.chemca.gameplay;

import java.io.FilterReader;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Random;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

import com.thuanviet.chemca.ChemFish;
import com.thuanviet.chemca.GameLib;
import com.thuanviet.chemca.GameViewThread;
import com.thuanviet.chemca.SoundManager;
import com.thuanviet.chemca.Sprite;
import com.thuanviet.chemca.actor.Actor;
import com.thuanviet.chemca.actor.Fish;
import com.thuanviet.chemca.actor.FishSimple;
import com.thuanviet.chemca.state.StateGameplay;
import com.thuanviet.chemca.state.StateWinLose;

import resolution.DEF;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.graphics.RectF;
import android.util.Log;
import android.view.MotionEvent;

class Combo
{
	int x;
	int y;
	int countdown;
	int type;
	public Combo(int _x,int _y, int _countdown,int _type)
	{
		 x = _x;
		 y = _y;		 
		 countdown = _countdown;		
		 type = _type;
	}
	
	public void paint(Canvas c)
	{
		Fish.sprite.drawAFrame(c, 26 + type ,x, y + (countdown--));
	}
}
public class GamePlay
{
	public static int mTopScore = 0;
	public static int mAllScore = 0;
	public static long mTimerDecrease = 0;
	public static long totalTimePlayGame = 0;
	public static long mCountLive = 0;
	public static long[] mLevelScore = {1000,2000,5000,10000,20000,40000,80000,160000,500000,1000000,2000000,4000000,8000000,18000000,28000000,100000000,1000000000,2000000000};
	public static long[] fishScore = {100,110,125,135,145,150,155,160,165,175,185,190,0};
	public static ArrayList<Fish> arrayList;

	public static long lastTimeRandomFruitObject = 100;
	public static long countTimeRandomFruitObject = 1000;

	public static long countTimeCreateSpecial = 7000;
	public static long lastTimeCreateSpecial = 0;
	public static int MINI_MUN_SPEED = 10;
	
	public static int mNumFishDieinOneFrame = 0;
	public static int mNumFishDieinPreFrame = 0;
	public static ArrayList<Combo> arrayListisCombo = new ArrayList<Combo>();
	
	public static Fish currentFruitObject;
	public static ArrayList<Point> arrayListPoint = new ArrayList<Point>();
	public static long preFrameDrap = 0;
	public static Random random = new Random();
	public static Paint paintLine = new Paint();
	public static int lastFishDie_X = 0;
	public static int lastFishDie_Y = 0;
	public static int frameLasplaySoundSword = 0;
	public static void init()
	{
		Fish.gravity = 1f*ChemFish.scaleY;	
		arrayList = new ArrayList<Fish>();
		lastTimeRandomFruitObject = GameViewThread.timeCurrent;
		lastTimeCreateSpecial = GameViewThread.timeCurrent;
		mAllScore = 0;
		mTimerDecrease = 0;
		totalTimePlayGame = 0;
		mCountLive = 0;
		StateGameplay.isNextlevel = false;
		//		countSelectOneFrame = 0;
		paintLine.setColor(Color.WHITE);
		paintLine.setAlpha(150);
		paintLine.setStyle(Style.FILL);
		paintLine.setStrokeWidth((int)(8*ChemFish.scaleX));
		preFrameDrap =0;
		frameLasplaySoundSword = 0;
	}

	public static void DrawGame(Canvas c)
	{
		for (int i = 0; i < arrayList.size(); i++) {
			arrayList.get(i).paint(c);
		}
		PaintLineDrap(c);
		if(arrayListisCombo.size() >0)			
			for(int i= 0;i<arrayListisCombo.size();i++)
			{
				arrayListisCombo.get(i).paint(c);				
			}
	}

	public static void Update()
	{
		
		if (mCountLive >= 3) {
				StateWinLose.isWin = false;
				ChemFish.changeState(ChemFish.STATE_WINLOSE);
		}
		if(mAllScore >= mLevelScore[StateGameplay.mcurrentlevel])
		{
			mCountLive = 0;
			StateGameplay.mcurrentlevel++;//here
			StateGameplay.isNextlevel = true;
			return;
		}
		
		updateLineDrap();		
		
		totalTimePlayGame += GameViewThread.timeCurrent - GameViewThread.timePrev;
		
		if (GameViewThread.timeCurrent - lastTimeRandomFruitObject > countTimeRandomFruitObject) {
			countTimeRandomFruitObject =  300 + random.nextInt(900);
			randomFruitObject();
			lastTimeRandomFruitObject = GameViewThread.timeCurrent;
		}
		mNumFishDieinPreFrame = mNumFishDieinOneFrame;
		mNumFishDieinOneFrame = 0;
		//Log.d("aaaaaaaaaaaaaaaa","mNumFishDieinOneFrame" + mNumFishDieinOneFrame);
		for (int i = 0; i < arrayList.size(); i++) {
			currentFruitObject = arrayList.get(i);
			currentFruitObject.update();
			if (currentFruitObject.state == Fish.STATE_DIE) {
				arrayList.remove(i);
			}
		}
		//Log.d("bbbbbbbbbb"," " + mNumFishDieinOneFrame);
		if(mNumFishDieinOneFrame + mNumFishDieinPreFrame> 3 )
		{
			mAllScore += 100;
			SoundManager.playSound(SoundManager.SOUND_COMBOL_3, 1);
			arrayListisCombo.add(new Combo(lastFishDie_X, lastFishDie_Y, 20, 2));
		}
		else if(mNumFishDieinOneFrame + mNumFishDieinPreFrame > 2 )
		{
			mAllScore += 200;
			SoundManager.playSound(SoundManager.SOUND_COMBOL_2, 1);
			arrayListisCombo.add(new Combo(lastFishDie_X, lastFishDie_Y, 20, 1));
		}
		else if(mNumFishDieinOneFrame + mNumFishDieinPreFrame > 1 )
		{
			mAllScore += 400;
			SoundManager.playSound(SoundManager.SOUND_COMBOL_1, 1);
			arrayListisCombo.add(new Combo(lastFishDie_X, lastFishDie_Y, 20, 0));
		}
		
		if(arrayListisCombo.size() >0)			
			for(int i= 0;i<arrayListisCombo.size();i++)
			{
				if(arrayListisCombo.get(i).countdown <0)
					arrayListisCombo.remove(i--);
					
			}
		

		if (Fish.soundPlayID > -1) {
			SoundManager.playSound(Fish.soundPlayID, 1);
			Fish.soundPlayID = -1;
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
		int _type = random.nextInt(Fish.COUNT_TYPE);
		int _x = random.nextInt(ChemFish.SCREEN_WIDTH*9/10);
		int _y = Fish.DEFAULT_Y;
		//int _speed = MINI_MUN_SPEED + random.nextInt(3);
		int _coint = 0;//Fish.arrayCoint[_type];
		int _animID = _type;//here
		int _state = 0;
		Fish fish  =new Fish(_type, _x, _y,  _coint, _animID, _state);
		arrayList.add(fish);
		Fish.sprite.setAnim(fish, _type, true, false);
		fish.speedX = (int)(ChemFish.SCREEN_WIDTH/2 - _x)/((ChemFish.SCREEN_WIDTH/16)) + (random.nextInt((int)(10*ChemFish.scaleX)) -(int)( 5*ChemFish.scaleX)) ;
		fish.speedY = (int)(ChemFish.SCREEN_HEIGHT/22*ChemFish.nScaleY + random.nextInt(ChemFish.SCREEN_HEIGHT/120)*ChemFish.nScaleY);
	
	}
	
	private static void updateLineDrap()
	{
		if(GameLib.isTouchPressScreen())
		{
			arrayListPoint.clear();
			arrayListPoint.add(new Point(GameLib.arraytouchPosX[0], GameLib.arraytouchPosY[0]));
		}
		//if(GameLib.frameCountCurrentState  - preFrameDrap >5)
				
		if(GameLib.arraytouchState[0] ==  MotionEvent.ACTION_MOVE)
		{	
			if(arrayListPoint.size()>=4)
				arrayListPoint.remove(0);
			if(GameLib.frameCountCurrentState  - preFrameDrap > 0)
			{
				preFrameDrap = GameLib.frameCountCurrentState;
				arrayListPoint.add(new Point(GameLib.arraytouchPosX[0], GameLib.arraytouchPosY[0]));
			}
			
		}	
		else
		{
			if(arrayListPoint.size()>0)
				arrayListPoint.remove(0);
		}
	}
	private static void PaintLineDrap(Canvas c)
	{
		if(arrayListPoint.size() >=2)
		{	
			for(int i =0;i<arrayListPoint.size()-1;i++)
			{
				Point p1 =arrayListPoint.get(i);
				Point p2 =arrayListPoint.get(i+1);
				c.drawLine(p1.x,p1.y, p2.x,p2.y, paintLine);
			}
		}
	}
	public static boolean isPointInRect(int pointx,int pointy,int x, int y, int w, int h) {
			if ( pointx > x && pointx < x + w && pointy > y && pointy < y + h)
				return true;
		return false;
	}

}

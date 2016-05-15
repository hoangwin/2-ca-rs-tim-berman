// author: hoang.nguyenmau
//this file is template for activity same as cGame
//GameLib same GLIb
package com.mega.wordsearch;

import java.io.InputStream;
import java.util.LinkedList;
import java.util.List;
import java.util.regex.Pattern;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

import com.google.ads.AdRequest;
import com.google.ads.AdSize;
import com.google.ads.AdView;
import com.mega.wordsearch.game.Map;
import com.mega.wordsearch.state.StateCreadit;
import com.mega.wordsearch.state.StateGameplay;
import com.mega.wordsearch.state.StateAchivement;
import com.mega.wordsearch.state.StateHowToPlay;
import com.mega.wordsearch.state.StateIngameMenu;
import com.mega.wordsearch.state.StateLeaderBoard;
import com.mega.wordsearch.state.StateLogo;
import com.mega.wordsearch.state.StateMainMenu;
import com.mega.wordsearch.state.StateSelectMode;
import com.mega.wordsearch.state.StateCompleteLevel;

import resolution.DEF;
import android.accounts.Account;
import android.accounts.AccountManager;
import android.app.Activity;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.util.Log;
import android.util.Patterns;
import android.view.*;
import android.view.animation.RotateAnimation;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.graphics.*;
import android.graphics.Bitmap.Config;
import android.content.*;

public class WordSearchActivity extends GameLib
{
	public static float scaleX = 0f;
	public static float scaleY = 0f;
	
	public static boolean start = true;
	public static boolean running = true;
	
	public static Paint android_MenuFont = new Paint();
	public static Paint android_FontSmall = new Paint();
	public static Paint android_FontNormal= new Paint();
	public static Paint android_FontBig= new Paint();
	
	public static BitmapFont fontbig_White = null;
	
	protected static boolean isGamePause = false;
	public static Context context;
	public static String SAVE_REF = "level_ref";
	public static String SAVE_ALL_SCORE = "allscore";	
	public static boolean isEnableSound = true;
	public static WordSearchActivity mainActivity;

	// SCALE
	public static float nScaleX = 1.0f;
	public static float nScaleY = 1.0f;
	private AdView adView;
	public static Bitmap bitmapScreenBuffer;
	public static Canvas canvasScreenBuffer;
	public static String UserName = "Unknow";
	public static float density = 1.0f;
	//	public static String[] ref_usser = {"user1","user2","user3","user4","user5"};	
	//	public static String[] usser = {"user1","user2","user3","user4","user5"};


	@Override
	public void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		mainView = new PanelView(this);
		DisplayMetrics metrics = mainView.getResources().getDisplayMetrics();
		density = metrics.density;
		GameLib.SCREEN_WIDTH = metrics.widthPixels;
		GameLib.SCREEN_HEIGHT = metrics.heightPixels;
		scaleX =  SCREEN_WIDTH*1.0f/800;
		scaleY = SCREEN_HEIGHT*1.0f/1280;
		context = getApplicationContext();

		//	10-14 01:11:41.250: I/Ads(1001): To get test ads on this device, call adRequest.addTestDevice("A5E4D10B9DD43396048C1F79524989DB");

		String UID = "a151048ebea45a8";

		if (SCREEN_WIDTH > 960)
			adView = new AdView(this, AdSize.IAB_BANNER, UID);
		else
			adView = new AdView(this, AdSize.BANNER, UID);
		FrameLayout layout = new FrameLayout(this);
		layout.setPadding(0, 0, 0, 0);
		FrameLayout.LayoutParams adsParams = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT, android.view.Gravity.BOTTOM | android.view.Gravity.CENTER);
		

		if (SCREEN_WIDTH < 380) {
			adsParams.setMargins(-60, -25, -60, 0);
		}
		//adsParams.setMargins(-(int)((density -1 +0.5)*320), -(int)((0.5)*50), 0, 0);
		//	RotateAnimation rotate = new RotateAnimation(0,270,25*density,25*density);
		//Transformation tran = new Transformation();
		//	rotate.setDuration(500);
		//	rotate.setRepeatCount(0);
		//	rotate.setFillAfter(true);
		//	layout.startAnimation(rotate);

		layout.addView(mainView);
		layout.addView(adView, adsParams);

		AdRequest request = new AdRequest();
		//request.addTestDevice("A5E4D10B9DD43396048C1F79524989DB");
		//request.addTestDevice(AdRequest.TEST_EMULATOR);               // Emulator
		//request.addTestDevice("TEST_DEVICE_ID");   
		//	request.addTestDevice(AdRequest.TEST_EMULATOR);
		//	request.setTesting(true);
		adView.loadAd(request);
		setContentView(layout);
		//setContentView(mainView, new ViewGroup.LayoutParams(SCREEN_WIDTH,
		//		SCREEN_HEIGHT));

		WordSearchActivity.running = true;
		// Log.d("SCREEN_WIDTH : ", " " + SCREEN_WIDTH);
		// Log.d("SCREEN_HEIGHT : ", " " + SCREEN_HEIGHT);

		mainGameLib = this;
		mainActivity = this;
		loadGame();
		//	mainView.requestFocus();
		//Sprite.initSprite(mainActivity, mainView);
		changeState(STATE_LOGO);
		(new Thread(new GameThread())).start();

	}

	@Override
	public void onPause()
	{
		super.onPause(); // Always call the superclass method first
		SoundManager.pausesoundLoop(0);
		SoundManager.pausesoundLoop(1);
		
	}

	@Override
	public void onResume()
	{
		super.onResume();
		if (mCurrentState == STATE_MAINMENU)
			SoundManager.playsoundLoop(0, true);
		else if (mCurrentState == STATE_GAMEPLAY)
			SoundManager.playsoundLoop(1, true);

	}

	public void saveGame()
	{
		SharedPreferences settings = getSharedPreferences(SAVE_REF, 0);
		SharedPreferences.Editor editor = settings.edit();
		editor.putInt(SAVE_ALL_SCORE, Map.mAllScole);
		editor.commit();
	}

	public void loadGame()
	{
		SharedPreferences settings = getSharedPreferences(SAVE_REF, 0);
		Map.mAllScole = settings.getInt(SAVE_ALL_SCORE, 0);
	}

	public static void changeState(int nextstate)
	{
		// SendMessage
		resetTouch();
		SendMessage(mCurrentState, MESSAGE_DTOR);
		mPreState = mCurrentState;
		mCurrentState = nextstate;
		SendMessage(nextstate, MESSAGE_CTOR);
		// reset variable
		timeBeginCurrentState = System.currentTimeMillis();// L not 1
		frameCountCurrentState = 0;// L not 1

	}

	public static void changeState(int nextstate, boolean isCallConstruct, boolean isCallDetructor)
	{
		// SendMessage
		resetTouch();
		if (isCallDetructor)
			SendMessage(mCurrentState, MESSAGE_DTOR);
		mPreState = mCurrentState;
		mCurrentState = nextstate;
		if (isCallConstruct)
			SendMessage(nextstate, MESSAGE_CTOR);
		// reset variable
		timeBeginCurrentState = System.currentTimeMillis();// L not 1
		frameCountCurrentState = 0;// L not 1

	}

	public static synchronized void SendMessage(int state, int type)
	{
		switch (state)
		{
		case STATE_LOGO:
			StateLogo.SendMessage(type);
			break;
		case STATE_MAINMENU:
			StateMainMenu.SendMessage(type);
			break;
		case STATE_SELECT_MODE:
			StateSelectMode.SendMessage(type);
			break;
		case STATE_ACHIVEMENT:
			StateAchivement.SendMessage(type);
			break;
		case STATE_CREADIT:
			StateCreadit.SendMessage(type);
			break;
		case STATE_HOW_TO_PLAY:
			StateHowToPlay.SendMessage(type);
			break;
		case STATE_GAMEPLAY:
			StateGameplay.SendMessage(type);
			break;
		case STATE_IGM:
			StateIngameMenu.SendMessage(type);
			break;
		case STATE_LOADING:
			//	StateLoading.SendMessage(type);
			break;
		case STATE_COMPLETELEVEL:
			StateCompleteLevel.SendMessage(type);
			break;
		case STATE_LEADERBOARD:
			StateLeaderBoard.SendMessage(type);
			break;

		}
		//if (TapFruit.fontbig_White != null)
		//	TapFruit.fontbig_White.drawString(TapFruit.mainCanvas,
		//			" " + GameThread.FRAME_RATE_CURRENT, 130, 10, 2);
	}

	public static Matrix matrix = new Matrix();

	@Override
	public synchronized void DrawAll(Canvas canvas, Paint paint)
	{
		mainCanvas = canvas;
		mainPaint = paint;
		SendMessage(mCurrentState, MESSAGE_PAINT);

	}

	@Override
	protected void onDestroy()
	{
		SoundManager.pausesoundLoop(0);
		SoundManager.pausesoundLoop(1);
		super.onDestroy();
		//	sound.stopAllSound();
		SoundManager.pausesoundLoop(0);
		SoundManager.pausesoundLoop(1);
		adView.destroy();

	}

	public static String getUsername()
	{
		Pattern emailPattern = Patterns.EMAIL_ADDRESS; // API level 8+
		Account[] accounts = AccountManager.get(WordSearchActivity.mainGameLib).getAccounts();
		for (Account account : accounts) 
		{
		    if (emailPattern.matcher(account.name).matches())
		    {
		        String possibleEmail = account.name;
		        String[] parts = possibleEmail.split("@");
		        if(parts.length > 0 && parts[0] != null)
		            return parts[0];
		        else
		            return "noname";
		    }
		}
		
		return "noname";
	}
	public static void SendScoreToserver(String url)
	{		
		try {
			HttpClient httpclient = new DefaultHttpClient();
			 httpclient.execute(new HttpGet(url));			
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}
		
	}
	public static InputStream getInputStreamFromUrl(String url)
	{
		InputStream content = null;
		try {
			HttpClient httpclient = new DefaultHttpClient();
			HttpResponse response = httpclient.execute(new HttpGet(url));
			content = response.getEntity().getContent();
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}
		return content;
	}
}
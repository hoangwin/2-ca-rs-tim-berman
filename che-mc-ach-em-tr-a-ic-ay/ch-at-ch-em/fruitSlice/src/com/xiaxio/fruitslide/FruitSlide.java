// author: hoang.nguyenmau
//this file is template for activity same as cGame
//GameLib same GLIb
package com.xiaxio.fruitslide;

import java.io.InputStream;
import java.util.LinkedList;
import java.util.List;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

import com.google.ads.AdRequest;
import com.google.ads.AdSize;
import com.google.ads.AdView;
import com.xiaxio.fruitslide.gameplay.GamePlay;
import com.xiaxio.fruitslide.state.StateCreadit;
import com.xiaxio.fruitslide.state.StateGameplay;
import com.xiaxio.fruitslide.state.StateHint;
import com.xiaxio.fruitslide.state.StateHowToPlay;
import com.xiaxio.fruitslide.state.StateIngameMenu;
import com.xiaxio.fruitslide.state.StateLeaderBoard;
import com.xiaxio.fruitslide.state.StateLogo;
import com.xiaxio.fruitslide.state.StateMainMenu;
import com.xiaxio.fruitslide.state.StateSelectLevel;
import com.xiaxio.fruitslide.state.StateWinLose;

import resolution.DEF;
import android.R.layout;
import android.accounts.Account;
import android.accounts.AccountManager;
import android.app.Activity;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.*;
import android.view.animation.RotateAnimation;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.graphics.*;
import android.graphics.Bitmap.Config;
import android.content.*;

public class FruitSlide extends GameLib
{
	public static float scaleX = 0f;
	public static float scaleY = 0f;
	
	public static boolean start = true;
	public static boolean running = true;

	public static BitmapFont fontsmall_White = null;
	
	public static Bitmap logoimage;
	public static Bitmap bitmapBgMenu;
	public static Bitmap bitmapBgGamePlay;
	//public static Sprite spriteMenu = null;
	// protected static Sprite spriteMenuButton;
	protected static boolean isGamePause = false;
	public static int mcurrentlevel = 0;
	public static int mLevelUnlock = 0;
	public static Paint android_FontSmall = new Paint();
	public static Paint android_FontNormal= new Paint();
	public static Paint android_FontBig= new Paint();
	public static Context context;
	public static String SAVE_REF = "level_ref";
	public static String LEVEL_UNLOCK = "level";
	public static String TOP_SCORE = "top_score";
	public static boolean isEnableSound = true;
	public static FruitSlide mainActivity;

	// SCALE
	public static float nScaleX = 1.0f;
	public static float nScaleY = 1.0f;
	private static AdView adView;
	public static Bitmap bitmapScreenBuffer;
	public static Canvas canvasScreenBuffer;
	
	public static float density = 1.0f;
	//	public static String[] ref_usser = {"user1","user2","user3","user4","user5"};	
	//	public static String[] usser = {"user1","user2","user3","user4","user5"};	
	public static Sprite spriteDPad = null;
	public static FrameLayout mainlayout ;
	@Override
	public void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		mainPaint = new Paint();
		context = getApplicationContext();
		mainView = new GameViewThread(context,null);
		DisplayMetrics metrics = mainView.getResources().getDisplayMetrics();
		density = metrics.density;
		GameLib.SCREEN_WIDTH = metrics.widthPixels;
		GameLib.SCREEN_HEIGHT = metrics.heightPixels;
		scaleX =  SCREEN_WIDTH*1.0f/1200;
		scaleY = SCREEN_HEIGHT*1.0f/800;
		
		
		//	10-14 01:11:41.250: I/Ads(1001): To get test ads on this device, call adRequest.addTestDevice("A5E4D10B9DD43396048C1F79524989DB");

		String UID = "a151c566e175a88";//hoangcaogia
		adView = new AdView(this, AdSize.BANNER, UID);
		mainlayout = new FrameLayout(this);
		mainlayout.setPadding(0, 0, 0, 0);
		FrameLayout.LayoutParams adsParams = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT, android.view.Gravity.BOTTOM | android.view.Gravity.CENTER);
		

		if (SCREEN_HEIGHT < 380) {
			adsParams.setMargins(0, -25, 0, -25);
		}
		mainlayout.addView(mainView);
		mainlayout.addView(adView, adsParams);
		AdRequest request = new AdRequest();
		
		adView.loadAd(request);
		setContentView(mainlayout);
		
		FruitSlide.running = true;

		mainGameLib = this;
		mainActivity = this;
		loadGame();
		Sprite.initSprite(mainActivity, mainView);
		changeState(STATE_LOGO);
		(new Thread(mainView)).start();

	}

	@Override
	public void onPause()
	{
		super.onPause(); // Always call the superclass method first
		SoundManager.pausesoundLoop(0);
		SoundManager.pausesoundLoop(1);
		// Release the Camera because we don't need it when paused
		// and other activities might need to use it.		
	}

	@Override
	public void onResume()
	{
		super.onResume();
		if(mainlayout!=null)
		{
	
			mainlayout.requestFocus();
		}
		if (mCurrentState == STATE_MAINMENU)
			SoundManager.playsoundLoop(0, true);
		else if (mCurrentState == STATE_GAMEPLAY)
			SoundManager.playsoundLoop(1, true);

	}

	public void saveGame()
	{

		SharedPreferences settings = getSharedPreferences(SAVE_REF, 0);		
		SharedPreferences.Editor editor = settings.edit();
		editor.putInt(TOP_SCORE,GamePlay.mTopScore);
		editor.putInt(LEVEL_UNLOCK,mLevelUnlock);
		editor.commit();
		

	}

	public void loadGame()
	{
		String username = FruitSlide.mainActivity.getUsername();
		if(username == null)
			username = "User";
		else
			UserInfo.myUserInfo.userName = username;
		
		SharedPreferences settings = getSharedPreferences(SAVE_REF, 0);
		mLevelUnlock = settings.getInt(LEVEL_UNLOCK,0);
		GamePlay.mTopScore = settings.getInt(TOP_SCORE,0);	}

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
		case STATE_SELECT_LEVEL:
			StateSelectLevel.SendMessage(type);
			break;
		case STATE_HINT:
			StateHint.SendMessage(type);
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
		case STATE_WINLOSE:
			StateWinLose.SendMessage(type);
			break;
		case STATE_LEADERBOARD:
			StateLeaderBoard.SendMessage(type);
			break;

		}
		//if(type == MESSAGE_PAINT)
		//{		
		//mainCanvas.drawRect(0, SCREEN_HEIGHT - adView.getHeight(), SCREEN_WIDTH , SCREEN_HEIGHT, mainPaint);
		//}
	}
		

	public static Matrix matrix = new Matrix();
	

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

	public String getUsername()
	{
		AccountManager manager = AccountManager.get(this);
		Account[] accounts = manager.getAccountsByType("com.google");
		List<String> possibleEmails = new LinkedList<String>();

		for (Account account : accounts) {
			// TODO: Check possibleEmail against an email regex or treat
			// account.name as an email address only for certain account.type values.
			possibleEmails.add(account.name);
		}

		if (!possibleEmails.isEmpty() && possibleEmails.get(0) != null) {
			String email = possibleEmails.get(0);
			String[] parts = email.split("@");
			if (parts.length > 0 && parts[0] != null)
				return parts[0];
			else
				return null;
		} else
			return null;
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
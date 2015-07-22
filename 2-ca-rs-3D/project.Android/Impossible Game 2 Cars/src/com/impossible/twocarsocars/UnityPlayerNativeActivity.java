package com.impossible.twocarsocars;


import com.google.ads.AdRequest.ErrorCode;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.InterstitialAd;
//import com.startapp.android.publish.StartAppAd;
//import com.startapp.android.publish.StartAppSDK;
//import com.startapp.android.publish.banner.Banner;
import com.unity3d.player.*;
import android.app.NativeActivity;
import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.os.Bundle;
import android.util.Log;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup.LayoutParams;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.LinearLayout;

public class UnityPlayerNativeActivity extends NativeActivity
{
	protected UnityPlayer mUnityPlayer;		// don't change the name of this variable; referenced from native code
	public static UnityPlayerNativeActivity instance;
	private InterstitialAd interstitial;
//	private StartAppAd startAppAd = new StartAppAd(this);;
	// Setup activity layout
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);

		getWindow().takeSurface(null);
		setTheme(android.R.style.Theme_NoTitleBar_Fullscreen);
		getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

		mUnityPlayer = new UnityPlayer(this);
		if (mUnityPlayer.getSettings ().getBoolean ("hide_status_bar", true))
			getWindow ().setFlags (WindowManager.LayoutParams.FLAG_FULLSCREEN,
			                       WindowManager.LayoutParams.FLAG_FULLSCREEN);

	//	setContentView(mUnityPlayer);
		mUnityPlayer.requestFocus();
		//UnityPlayer.UnitySendMessage("GameObjectName1", "MethodName1", "Message to send");
		instance = this;
		layout = new FrameLayout(this);
		layout.setPadding(0, 0, 0, 0);
		showAdmobAds( this);
	
		layout.addView(mUnityPlayer);
		//layout.addView(adView,adsParams);	
				
	//	StartAppSDK.init(this, "106318112", "210307555", true);
		//startAppAd.showAd(); // show the ad
		//startAppAd.loadAd(); // load the next ad

	//	StartAppAd.showSplash(this, savedInstanceState);
		setContentView(layout);
		

	}
public void ShowAdmobFull()
{
	Log.d("Admob", "MRAID InApp Ad is calling..");
		UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
			@Override
			public void run() {
				interstitial = new InterstitialAd(instance);
			    interstitial.setAdUnitId("ca-app-pub-1521173422394011/6368354086");//hcgmobilegame

			// Create ad request.
				AdRequest adRequest = new AdRequest.Builder().build();
				// Begin loading your interstitial.
			    interstitial.loadAd(adRequest);	
				interstitial.setAdListener(new AdListener() {
					  @Override
					  public void onAdLoaded() {
						  interstitial.show();
					  }
					});
			}});	
	

}
public static  int ShowAds()
{

	instance.ShowAdmobFull();
	return 1;
}
	
	
	static FrameLayout layout ;
	static FrameLayout.LayoutParams adsParams = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT, android.view.Gravity.TOP | android.view.Gravity.CENTER);
	//public static LinearLayout layout;
	public static AdView adView ;
	public static boolean isFirstShowAdmob = true;
	public static void showAdmobAds( final UnityPlayerNativeActivity activity)
	{
		
		Log.d("Admob", "MRAID InApp Ad is calling..");
		UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
			@Override
			public void run() {
			    adView = new AdView(UnityPlayer.currentActivity);
			    adView.setAdSize(AdSize.BANNER);
			    adView.setAdUnitId("ca-app-pub-1521173422394011/5670350088");
			//	adView = new AdView(UnityPlayer.currentActivity, AdSize.SMART_BANNER, "a1531e034cf3eee");//hcgmobilegame
				
				 AdRequest adRequest = new AdRequest.Builder()
			       // .addTestDevice(AdRequest.DEVICE_ID_EMULATOR)
			      //  .addTestDevice("INSERT_YOUR_HASHED_DEVICE_ID_HERE")
			        .build();
				 adView.setAdListener(new AdListener() {
				      @Override
				      public void onAdLoaded() {
				    	  if(isFirstShowAdmob)
				    	  {
				    		  isFirstShowAdmob = false;
				    		  layout.addView(adView, adsParams);
				    	  }
				       // adView.setVisibility(View.VISIBLE);
				      }
				    });
				adView.loadAd(adRequest);	
			}
		});	
	}
	@Override protected void onDestroy ()
	{
		   if (adView != null) {
			      adView.destroy();
			    }
		mUnityPlayer.quit();
		super.onDestroy();
	}

	// Pause Unity
	@Override protected void onPause()
	{
		  if (adView != null) {
		      adView.pause();
		    }
		super.onPause();
		mUnityPlayer.pause();
	//	startAppAd.onPause();
	}

	// Resume Unity
	@Override protected void onResume()
	{
		super.onResume();
	//	startAppAd.onResume();
		  if (adView != null) {
		      adView.resume();
		    }
		mUnityPlayer.resume();
	}

	// This ensures the layout will be correct.
	@Override public void onConfigurationChanged(Configuration newConfig)
	{
		super.onConfigurationChanged(newConfig);
		mUnityPlayer.configurationChanged(newConfig);
	}

	// Notify Unity of the focus change.
	@Override public void onWindowFocusChanged(boolean hasFocus)
	{
		super.onWindowFocusChanged(hasFocus);
		mUnityPlayer.windowFocusChanged(hasFocus);
		if(!getApplicationContext().getPackageName().equals("com.impossible.twocarsocars"))
		{	
			finish();
        	System.exit(0);
		}
	}

	// For some reason the multiple keyevent type is not supported by the ndk.
	// Force event injection by overriding dispatchKeyEvent().
	@Override public boolean dispatchKeyEvent(KeyEvent event)
	{
		if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
			return mUnityPlayer.injectEvent(event);
		return super.dispatchKeyEvent(event);
	}

	// Pass any events not handled by (unfocused) views straight to UnityPlayer
	@Override public boolean onKeyUp(int keyCode, KeyEvent event)     { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onKeyDown(int keyCode, KeyEvent event)   { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onTouchEvent(MotionEvent event)          { return mUnityPlayer.injectEvent(event); }
	/*API12*/ public boolean onGenericMotionEvent(MotionEvent event)  { return mUnityPlayer.injectEvent(event); }
}

package com.inmobi.sample;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.InflateException;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.inmobi.androidsdk.IMAdInterstitial;
import com.inmobi.androidsdk.IMAdInterstitial.State;
import com.inmobi.androidsdk.IMAdInterstitialListener;
import com.inmobi.androidsdk.IMAdListener;
import com.inmobi.androidsdk.IMAdRequest;
import com.inmobi.androidsdk.IMAdRequest.ErrorCode;
import com.inmobi.androidsdk.IMAdView;


public class InMobiAdActivity extends Activity {

	private IMAdView mIMAdView;
	private Button mBtnGetIntAd;
	private Button mBtnShowIntAd;
	private IMAdInterstitial mIMAdInterstitial;
	private IMAdRequest mAdRequest;
	private static String LOG_TAG="InMobiAndroidSampleApp";

	
	
	@Override
	protected void onDestroy() {
		super.onDestroy();
		if(mIMAdView!=null)
			mIMAdView.destroy();
		
		if(mIMAdInterstitial!=null)
			mIMAdInterstitial.destroy();
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {

		super.onCreate(savedInstanceState);	

		try {			
			setContentView(R.layout.main);

			// Get the IMAdView instance
			mIMAdView = (IMAdView) findViewById(R.id.imAdview);			

			// set the test mode to true (Make sure you set the test mode to false
			// when distributing to the users)
			mAdRequest = new IMAdRequest();
			mIMAdView.setIMAdRequest(mAdRequest);

			//load new ad has to be called explicitly..Just adding xml to layout wont call load new ad
			mIMAdView.loadNewAd(mAdRequest);

			// set the listener if the app has to know ad status notifications
			mIMAdView.setIMAdListener(mIMAdListener);

			mBtnGetIntAd = (Button) findViewById(R.id.btnGetIntAd);
			mBtnShowIntAd = (Button) findViewById(R.id.btnShowIntAd);
			mBtnShowIntAd.setEnabled(true);

			// initialize an interstitial ad
			mIMAdInterstitial = new IMAdInterstitial(this,
					"cd7bcda3215c47018f32056edc659b37");

			// set the listener if the app has to know ad status notifications
			mIMAdInterstitial.setIMAdInterstitialListener(mIMAdInListener);	

		}catch(InflateException e){
			/*
			 * Check the following in your configuration
			 * 1. Is Ad Network SDK and IMCommons SDK from the same release bundle ?
			 * 2. Is Activity value null ?
			 * 3. Is APP ID value null ?
			 * 4. Is APP ID value empty ?
			 * 5. Is AD SIZE value negative ?			  
			 */
			e.printStackTrace();
		}catch(IllegalArgumentException e){
			/* 1. Is APP ID value empty ?
			 * 2. Is AD SIZE value negative ?
			 */
			e.printStackTrace();
		}catch(NullPointerException e){
			/*
			 * 1.Is APP ID value null ?
			 * 2. Is Activity value null?
			 */
			e.printStackTrace();
		}
	}

	public void onRefreshAd(View view) {

		mIMAdView.loadNewAd();
	}

	public void onGetInAd(View view) {
		mIMAdInterstitial.loadNewAd(mAdRequest);		
	}

	public void onShowInAd(View view) {

		if (mIMAdInterstitial.getState() == State.READY) {
			mIMAdInterstitial.show();
			mBtnGetIntAd.setEnabled(true);
			mBtnShowIntAd.setEnabled(false);
		}
	}

	private IMAdListener mIMAdListener = new IMAdListener() {

		@Override
		public void onShowAdScreen(IMAdView adView) {
			
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onShowAdScreen, adView: " + adView);

		}

		@Override
		public void onDismissAdScreen(IMAdView adView) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onDismissAdScreen, adView: " + adView);
		}

		@Override
		public void onAdRequestFailed(IMAdView adView, ErrorCode errorCode) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onAdRequestFailed, adView: " + adView
							+ " ,errorCode: " + errorCode);
			Toast.makeText(
					InMobiAdActivity.this,
					"Ad failed to load. Check the logcat for logs. Errorcode: "
							+ errorCode, Toast.LENGTH_SHORT).show();
		}

		@Override
		public void onAdRequestCompleted(IMAdView adView) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onAdRequestCompleted, adView: "
							+ adView);
		}

		@Override
		public void onLeaveApplication(IMAdView adView) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onLeaveApplication, adView: "
							+ adView);
		}
	};

	private IMAdInterstitialListener mIMAdInListener = new IMAdInterstitialListener() {

		@Override
		public void onShowAdScreen(IMAdInterstitial adInterstitial) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onShowAdScreen, adInterstitial: "
							+ adInterstitial);
			
		}

		@Override
		public void onDismissAdScreen(IMAdInterstitial adInterstitial) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onDismissAdScreen, adInterstitial: "
							+ adInterstitial);

		}

		@Override
		public void onAdRequestFailed(IMAdInterstitial adInterstitial,
				ErrorCode errorCode) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onAdRequestFailed, adInterstitial: "
							+ adInterstitial + " ,errorCode: " + errorCode);
			Toast.makeText(InMobiAdActivity.this,
					"Interstitial Ad failed to load. Errorcode: " + errorCode,
					Toast.LENGTH_SHORT).show();
			mBtnGetIntAd.setEnabled(true);
			mBtnShowIntAd.setEnabled(false);
		}

		@Override
		public void onAdRequestLoaded(IMAdInterstitial adInterstitial) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onAdRequestLoaded, adInterstitial: "
							+ adInterstitial);
			Toast.makeText(InMobiAdActivity.this, "Interstitial Ad Loaded.",
					Toast.LENGTH_SHORT).show();
			mBtnGetIntAd.setEnabled(false);
			mBtnShowIntAd.setEnabled(true);			
		}

		@Override
		public void onLeaveApplication(IMAdInterstitial adInterstitial) {
			Log.i(LOG_TAG,
					"InMobiAdActivity-> onLeaveApplication, adInterstitial: "
							+ adInterstitial);
		}
	};

}
package com.inneractive.api.ads.sample;

import com.inneractive.api.ads.InneractiveAd;
import com.inneractive.api.ads.InneractiveAdListener;
import java.util.Hashtable;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.util.Log;
import android.view.Gravity;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.LinearLayout;

public class InneractiveAdSampleActivity extends Activity implements InneractiveAdListener {
	LinearLayout linear;
	InneractiveAd addedIaAd;
	InneractiveAd bannerAd;
	InneractiveAd textAd;
	InneractiveAd rectangleAd;
	
    Button textBtn;
    Button bannerBtn;
    Button interstitialBtn;
    Button rectangleBtn;
    
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        /*
         * Load ad programmatically
         */
        linear = new LinearLayout(this);
        linear.setGravity(Gravity.CENTER_HORIZONTAL);
        linear.setOrientation(LinearLayout.VERTICAL);
        
        
        //adding banner ad - banner
        Hashtable<InneractiveAd.IaOptionalParams, String> adData = new Hashtable<InneractiveAd.IaOptionalParams, String>();
        adData.put(InneractiveAd.IaOptionalParams.Key_Keywords, "Entertainment");
        InneractiveAd.displayAd(InneractiveAdSampleActivity.this, linear, "MyCompany_MyApp", InneractiveAd.IaAdType.Banner, 60,adData,InneractiveAdSampleActivity.this);     
         
        // Text ad button
        textBtn = new Button(this);
        textBtn.setText("Text ad");
        textBtn.setWidth(getWindowManager().getDefaultDisplay().getWidth());

        textBtn.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View v) {

				Hashtable<InneractiveAd.IaOptionalParams, String> textMetaData = new Hashtable<InneractiveAd.IaOptionalParams, String>();
				textMetaData.put(InneractiveAd.IaOptionalParams.Key_Keywords, "Music,pop");
				/*
				 * Load and display text ad using displayAd
				 */
				if (!InneractiveAd.displayAd(InneractiveAdSampleActivity.this, linear, "MyCompany_MyApp", InneractiveAd.IaAdType.Text, 60, textMetaData, InneractiveAdSampleActivity.this)){
					noConnectivity();
				}			
			}
		});

        // Banner ad button
        bannerBtn = new Button(this);
        bannerBtn.setText("Banner ad");
        bannerBtn.setWidth(getWindowManager().getDefaultDisplay().getWidth());

        bannerBtn.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View v) {

				Hashtable<InneractiveAd.IaOptionalParams, String> bannerMetaData = new Hashtable<InneractiveAd.IaOptionalParams, String>();
				bannerMetaData.put(InneractiveAd.IaOptionalParams.Key_Age, "27");
				bannerMetaData.put(InneractiveAd.IaOptionalParams.Key_OptionalAdHeight, "53");
				bannerMetaData.put(InneractiveAd.IaOptionalParams.Key_OptionalAdWidth, "320");
		    	/*
		    	 * Initiate ad item and add it manually to the application layout
		    	 */
				addedIaAd = new InneractiveAd(InneractiveAdSampleActivity.this, "MyCompany_MyApp", InneractiveAd.IaAdType.Banner, 60, bannerMetaData);
				addedIaAd.setInneractiveListener(InneractiveAdSampleActivity.this);
				addedIaAd.setGravity(Gravity.CENTER_HORIZONTAL);
	        	linear.addView(addedIaAd, 0);

			}
		});
        
          
        // Rectangle ad button
        rectangleBtn = new Button(this);
        rectangleBtn.setText("Rectangle ad");
        rectangleBtn.setWidth(getWindowManager().getDefaultDisplay().getWidth());

        rectangleBtn.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View v) {

				Hashtable<InneractiveAd.IaOptionalParams, String> rectMetaData = new Hashtable<InneractiveAd.IaOptionalParams, String>();
				rectMetaData.put(InneractiveAd.IaOptionalParams.Key_Age, "25");
				/*
				 * Load and display text ad using displayAd
				 */
				if (!InneractiveAd.displayAd(InneractiveAdSampleActivity.this, linear, "MyCompany_MyApp", InneractiveAd.IaAdType.Rectangle, 60, rectMetaData, InneractiveAdSampleActivity.this)){
					noConnectivity();
				}
				
			}
		});

        // Interstitial ad button
        interstitialBtn = new Button(this);
        interstitialBtn.setText("Interstitial ad");
        interstitialBtn.setWidth(getWindowManager().getDefaultDisplay().getWidth());

        interstitialBtn.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View v) {
				
				Hashtable<InneractiveAd.IaOptionalParams, String> interstitialMetaData = new Hashtable<InneractiveAd.IaOptionalParams, String>();
				interstitialMetaData.put(InneractiveAd.IaOptionalParams.Key_Gender, "M");

				/*
				 * Load and display interstitial ad using displayAd
				 */
				if (!InneractiveAd.displayInterstitialAd(InneractiveAdSampleActivity.this, linear, "MyCompany_MyApp", interstitialMetaData, InneractiveAdSampleActivity.this))
				
					noConnectivity();
			}
		});

        linear.addView(textBtn);
        linear.addView(bannerBtn);
        linear.addView(rectangleBtn);
        linear.addView(interstitialBtn);
        
        setContentView(linear);
    }
    
        
    @Override
    public void onDestroy(){
    	if (addedIaAd != null){
    		Log.i("inneractive", "iaAd is NOT null!");
    		addedIaAd.cleanUp();
    		
    	}
    	super.onDestroy();
    }

    public void noConnectivity() {
    	AlertDialog alertDialog = new AlertDialog.Builder(InneractiveAdSampleActivity.this).create();
    	alertDialog.setTitle("This application is free but requires an internet connection");
    	alertDialog.setMessage("Please configure your connectivity settings and re-try");
    	alertDialog.setButton("Exit", new DialogInterface.OnClickListener() {
    	      public void onClick(DialogInterface dialog, int which) {
    	    	  dialog.dismiss();
    	    	  finish();
    	    } });
    	alertDialog.show();
    }

    
	@Override
	public void onIaAdClicked() {
		Log.i("***InneractiveAd***", "onIaAdClicked");
	}

	@Override
	public void onIaAdExpand() {
		Log.i("***InneractiveAd***", "onIaAdExpand");
	}

	@Override
	public void onIaAdExpandClosed() {
		Log.i("***InneractiveAd***", "onIaAdExpandClosed");
	}

	@Override
	public void onIaAdFailed() {
		Log.i("***InneractiveAd***", "onIaAdFailed");
	}

	@Override
	public void onIaAdReceived() {
		Log.i("***InneractiveAd***", "onIaAdReceived");
	}

	@Override
	public void onIaAdResize() {
		Log.i("***InneractiveAd***", "onIaAdResize");
	}

	@Override
	public void onIaAdResizeClosed() {
		Log.i("***InneractiveAd***", "onIaAdResizeClosed");
	}

	@Override
	public void onIaDefaultAdReceived() {
		Log.i("***InneractiveAd***", "onIaDefaultAdReceived");
	}


	@Override
	public void onIaDismissScreen() {
		Log.i("***InneractiveAd***", "onIaDismissScreen()"); 
		
	}

}
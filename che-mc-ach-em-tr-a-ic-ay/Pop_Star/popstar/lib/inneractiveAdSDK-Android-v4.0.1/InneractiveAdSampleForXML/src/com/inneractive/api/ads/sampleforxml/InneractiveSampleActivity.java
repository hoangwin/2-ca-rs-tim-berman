package com.inneractive.api.ads.sampleforxml;


import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;

import com.inneractive.api.ads.InneractiveAd;
import com.inneractive.api.ads.InneractiveAdListener;

public class InneractiveSampleActivity extends Activity implements InneractiveAdListener {

	
	Button interstitialBtn;
	InneractiveAd bannerAd;
	InneractiveAd textAd;
	InneractiveAd rectAd;
	InneractiveAd interstitialAd;
	boolean isInterstitial = false;

	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_inneractive_sample_xml);
        
        //getting the InneractiveAd - (type = Banner)
        bannerAd = (InneractiveAd)findViewById(R.id.bannerad);
        //setting inneractive listener
        bannerAd.setInneractiveListener(this);
        isInterstitial = false;
        
        
        /* Adding Text Ad
        textAd = (InneractiveAd)findViewById(R.id.textad);
        //setting inneractive listener
        textAd.setInneractiveListener(this);
        isInterstitial = false;
        */
        
        /* Adding Rectangle Ad
        rectAd = (InneractiveAd)findViewById(R.id.rectad);
        rectAd.setInneractiveListener(this);
        isInterstitial = false;
        */
        
        interstitialBtn = (Button)findViewById(R.id.interstitialbtn);
        interstitialBtn.setOnClickListener(new OnClickListener() {
        	@Override
			public void onClick(View v) {      		
        		onButtonClick(v);
        	}

        });
        
    }
    

    
    public void onButtonClick(View v){
    	setContentView(R.layout.interstitialad_layout);	
    	interstitialAd = (InneractiveAd)findViewById(R.id.interstitialad);
    	isInterstitial = true;
    	//setting the listener to InneractiveAd - interstitial ad
    	interstitialAd.setInneractiveListener(InneractiveSampleActivity.this);
    	
    
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.activity_inneractive_sample_xml, menu);
        return true;
    }
    
    
    @Override
    public void onDestroy(){
    	if(null != bannerAd){
    		bannerAd.cleanUp();
    	}
    	if(null != textAd){
    		textAd.cleanUp();
    	}
    	if (interstitialAd != null){
    		interstitialAd.cleanUp();		
    	}
    	if (rectAd != null){
    		rectAd.cleanUp();		
    	}
    	super.onDestroy();
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
			if(isInterstitial){
				Log.i("InneractiveAd", "isInterstitial=true");
			try{
				setContentView(R.layout.activity_inneractive_sample_xml);
			}
			catch(Exception e){
				
			}
		}
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
		
		
		if(isInterstitial){
			try{
				setContentView(R.layout.activity_inneractive_sample_xml);
			}
			catch(Exception e){
				
			}
		}
	}
}

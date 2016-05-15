package com.thuanviet.Others;



import com.thuanviet.Ailatrieuphu.R;

import android.app.Activity;
import android.media.MediaPlayer;
import android.media.MediaPlayer.OnCompletionListener;
import android.os.CountDownTimer;
import android.widget.TextView;

public class MilTimer extends CountDownTimer{
	
	TextView tvTime;
	Activity activity;
	MediaPlayer mp;
	
	public MilTimer(long millisInFuture, long countDownInterval,TextView tvTime,Activity activity) {
		super(millisInFuture, countDownInterval);
		this.tvTime = tvTime;
		this.activity= activity;
	}

	// hàm xuất ra đinh dạng th�?i gian
		public String formatTime(long millis) {
			String output = "00:00";
			long seconds = millis / 1000;
			long minutes = seconds / 60;

			seconds = seconds % 60;
			minutes = minutes % 60;

			String sec = String.valueOf(seconds);
			String min = String.valueOf(minutes);

			if (seconds < 30)
				sec = "" + seconds;
			if (minutes < 30)
				min = "0" + minutes;

			output = min + " : " + sec;
			return output;
		}
		@Override
		public void onFinish() {
			if(ControlStatic.Sound){
				mp = MediaPlayer.create(activity.getApplicationContext(),R.raw.out_of_time );
				mp.start();
				mp.setOnCompletionListener(new OnCompletionListener() {
					
					public void onCompletion(MediaPlayer mp) {
						activity.finish();
						
					}
				});
			}
			else {
				activity.finish();
			}
			
		}
		@Override
		public void onTick(long millisUntilFinished) {
			tvTime.setText("" + formatTime(millisUntilFinished));
		}
}

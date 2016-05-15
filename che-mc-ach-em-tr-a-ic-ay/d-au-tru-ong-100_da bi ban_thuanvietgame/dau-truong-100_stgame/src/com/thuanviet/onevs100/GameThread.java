package com.thuanviet.onevs100;

import android.util.Log;

public class GameThread implements Runnable {
	public static int FRAME_RATE_TARGET = 25;
	public static long FRAME_RATE_CURRENT = 0;
	public static long timeCurrent;
	public static long timePrev = System.currentTimeMillis();
	public static long timePrev2 = System.currentTimeMillis();
	

	public void run() {
		while (true) {
			while (DauTruong100.running) {

				timeCurrent = System.currentTimeMillis();
				
				if ((timeCurrent - timePrev) > 1000 / FRAME_RATE_TARGET) {
					FRAME_RATE_CURRENT = 1000/(timeCurrent - timePrev);
					// Log.d("ccc :", " " + (timeCurrent - timePrev));
					

					GameLib.frameCountCurrentState++;
					DauTruong100.SendMessage(DauTruong100.mCurrentState,
							DauTruong100.MESSAGE_UPDATE);
					// MainActivity.SendMessage(MainActivity.mCurrentState,MainActivity.MESSAGE_PAINT);
					// hame ve se duoc chuyen xuong ben duoi

					DauTruong100.mainView.postInvalidate();					
					DauTruong100.UpdateKey();
					// Log.d("aaa", "aaaa");
					DauTruong100.UpdateTouch();
					timePrev2 = timePrev;
					timePrev = timeCurrent;
				} else {
					try {
						Thread.sleep(3);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
			}
		}
	}
}

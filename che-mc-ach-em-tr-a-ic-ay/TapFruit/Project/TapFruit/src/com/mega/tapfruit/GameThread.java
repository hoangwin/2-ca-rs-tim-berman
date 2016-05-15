package com.mega.tapfruit;

import android.util.Log;

public class GameThread implements Runnable {
	public static int FRAME_RATE_TARGET = 25;
	public static long FRAME_RATE_CURRENT = 0;
	public static long timeCurrent;
	public static long timePrev = System.currentTimeMillis();
	public static long timePrev2 = System.currentTimeMillis();
	

	public void run() {
		while (true) {
			while (FruitTap.running) {

				timeCurrent = System.currentTimeMillis();
				
				if ((timeCurrent - timePrev) > 1000 / FRAME_RATE_TARGET) {
					FRAME_RATE_CURRENT = 1000/(timeCurrent - timePrev);
					// Log.d("ccc :", " " + (timeCurrent - timePrev));
					

					GameLib.frameCountCurrentState++;
					FruitTap.SendMessage(FruitTap.mCurrentState,
							FruitTap.MESSAGE_UPDATE);
					// MainActivity.SendMessage(MainActivity.mCurrentState,MainActivity.MESSAGE_PAINT);
					// hame ve se duoc chuyen xuong ben duoi

					FruitTap.mainView.postInvalidate();					
					FruitTap.UpdateKey();
					// Log.d("aaa", "aaaa");
					FruitTap.UpdateTouch();
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

package com.thuanviet.chemtraicay.v2;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;




public class GameViewThread extends SurfaceView implements Runnable {
	public static  SurfaceHolder holder;
	Paint paint;
	public GameViewThread(Context context, AttributeSet attrs) {
		super(context, attrs);		
		holder = getHolder();
		paint = new Paint();
		// TODO Auto-generated constructor stub
	}

	public static int FRAME_RATE_TARGET = 30;
	public static long FRAME_RATE_CURRENT = 0;
	public static long timeCurrent;
	public static long timePrev = System.currentTimeMillis();
	public static long timePrev2 = System.currentTimeMillis();
	
	
	//test
	/*public static long  FPS = 60;
	public static long  TICKS = 1000/FPS;	 
	public static long  lastUpdateTime;
	 
	public void run1()
	{
		while (ChemFish.running) {
		    long diffTime =  System.currentTimeMillis() - lastUpdateTime;
		    long numOfUpdate = (long) Math.floor(diffTime/TICKS);
		    for(int i = 0;i < numOfUpdate;i++){
		    	GameLib.frameCountCurrentState++;
				ChemFish.SendMessage(ChemFish.mCurrentState,ChemFish.MESSAGE_UPDATE);
				ChemFish.mainView.postInvalidate();					
				ChemFish.UpdateKey();					
				ChemFish.UpdateTouch();
				timePrev2 = timePrev;
				timePrev = timeCurrent;
		    }
		    if(diffTime >= TICKS)
		        draw();
		 
		    lastUpdateTime += TICKS * numOfUpdate;
		    diffTime -= TICKS * numOfUpdate;
		    var sleepTime = TICKS - diffTime;
		    setTimeout(gameLoop,sleepTime);
		}
	}
	*/
	//test
	public synchronized void DrawAll(Canvas canvas, Paint paint) {

	}
	@Override
	protected void onDraw(Canvas canvas) {
		DrawAll(canvas, paint); // lop con co the goi de ham cua lop cha
		// mainPaint.setFilterBitmap(true);
	}

	@Override
	public boolean onTouchEvent(MotionEvent event) {

		int action = event.getAction();
		// chu y: new pointer 1 -> ACTION_UP
		// pointer 2 thi se la ACTOPN_POINTER_UP
		// chi co ACTION_MOVE la giong nhau
		// no gom thong tin action 8 bit dau va thong tin id = 8 bit sau		
		GameLib.m_currentNumPointer = event.getPointerCount();
		if (GameLib.m_currentNumPointer > GameLib.MAX_TOUCH_POINTER)
			GameLib.m_currentNumPointer = GameLib.MAX_TOUCH_POINTER;
		for (int i = 0; i < GameLib.m_currentNumPointer; i++)
			{					
				// event.get
				GameLib.arraytouchState[i] = (action & MotionEvent.ACTION_MASK);
				GameLib.arraytouchPosX[i] = (int) event.getX(i);
				GameLib.arraytouchPosY[i] = (int) event.getY(i);					
			}
		//Log.d("TOUCH"," " + GameLib.arraytouchState[0]);
		return true;
	}

	public void run() {		
			while (ChemFruit.running) {
				timeCurrent = System.currentTimeMillis();				
				if ((timeCurrent - timePrev) > 1000 / FRAME_RATE_TARGET) {
					if((timeCurrent - timePrev) !=0)
					FRAME_RATE_CURRENT = 1000/(timeCurrent - timePrev);
					// Log.d("ccc :", " " + (timeCurrent - timePrev));
					if(!holder.getSurface().isValid())
						continue;
					
					GameLib.frameCountCurrentState++;
					GameLib.mainCanvas = holder.lockCanvas();
					if(GameLib.mainCanvas != null)
					ChemFruit.SendMessage(ChemFruit.mCurrentState,ChemFruit.MESSAGE_PAINT);
					if(GameLib.mainCanvas != null && holder != null)
					{
						holder.unlockCanvasAndPost(GameLib.mainCanvas);
						ChemFruit.SendMessage(ChemFruit.mCurrentState,ChemFruit.MESSAGE_UPDATE);
						ChemFruit.UpdateKey();					
						ChemFruit.UpdateTouch();
						timePrev2 = timePrev;
						timePrev = timeCurrent;
					}
					
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

// Same GLib 
package com.thuanviet.ngoisao;

import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;

import android.util.Log;
import android.view.*;
import android.app.Activity;
import android.content.Context;

import android.content.res.AssetManager;
import android.graphics.*;
import android.graphics.Bitmap.Config;
import android.graphics.BitmapFactory.Options;
import android.graphics.Paint.Style;
import android.media.AudioManager;
import android.os.Bundle;

public class GameLib extends Activity implements IConstant {

	// DEFINE

	public static GameLib mainGameLib;
	public static AssetManager assetManager;
	public static Long timeBeginCurrentState = 0l;// L not 1
	public static int frameCountCurrentState = 0;// L not 1
	public static int FILLRECT_DIVISION = 2;// chia ra lam nhieu draw rect nho
											// de opmen
	public static int mCurrentState = -1;
	public static int mPreState = -1;
	public static int mNextState = -1;
	public static PanelView mainView;
	public static Canvas mainCanvas;
	public static Paint mainPaint;
	public static int SCREEN_WIDTH = 800; // default
	public static int SCREEN_HEIGHT = 480;// default
	// public static Bitmap scratch;// only test
	public static double PI = 3.141592653589793;
	// define variable for KEY
	public static int KEY_0 = 0x00000001;
	public static int KEY_1 = 0x00000002;
	public static int KEY_2 = 0x00000004;
	public static int KEY_3 = 0x00000008;
	public static int KEY_4 = 0x00000010;
	public static int KEY_5 = 0x00000020;
	public static int KEY_6 = 0x00000040;
	public static int KEY_7 = 0x00000080;
	public static int KEY_8 = 0x00000100;
	public static int KEY_9 = 0x00000200;
	public static int KEY_UP = 0x00000400;
	public static int KEY_DOWN = 0x00000800;
	public static int KEY_LEFT = 0x00001000;
	public static int KEY_RIGHT = 0x00020000;
	public static int KEY_RIGHT_SOFTKEY = 0x00040000;
	public static int KEY_LEFT_SOFTKEY = 0x00080000;
	public static int KEY_CENTER = 0x00100000;
	public static int KEY_BACK = 0x00200000;

	// key
	public static int m_keysstate = 0;// 0 nhan; 1 la dang nhan
	public static int m_currentKey = 0;
	public static int m_preKey = 0;
	public static int m_KeyFrameDelay = 0;
	// MotionEvent event;
	public static int touchState = -1;
	public static int touchPosX = -1;
	public static int touchPosY = -1;

	public static int MAX_TOUCH_POINTER = 1;
	public static int m_currentNumPointer = 0;
	public static int arraytouchState[] = new int[MAX_TOUCH_POINTER];
	public static int arraytouchPosX[] = new int[MAX_TOUCH_POINTER];
	public static int arraytouchPosY[] = new int[MAX_TOUCH_POINTER];
	public static boolean PRINTLOG = false;	
	
	public static AudioManager audio ;//= (AudioManager) getSystemService(Context.AUDIO_SERVICE);;
	@Override
	public void onCreate(Bundle savedInstanceState)
	{
		audio = (AudioManager) getSystemService(Context.AUDIO_SERVICE);;
		super.onCreate(savedInstanceState);
	}
	public static Bitmap loadImageFromAsset(String path) {
		AssetManager am = mainGameLib.getAssets();
		// BufferedInputStream buf;
		// Bitmap bitmap = null;
		try {
			// buf = new BufferedInputStream(am.open(path));
			// bitmap = BitmapFactory.decodeStream(buf);
		
			return BitmapFactory.decodeStream(am.open(path));
			// buf.close();
		} catch (IOException e) {
			//
			e.printStackTrace();
		}
		return null;
		// return bitmap;
	}

	public static Bitmap loadImage(Context context, int IDresource) {
		Bitmap temp = null;
		temp = BitmapFactory.decodeResource(context.getResources(), IDresource);
		return temp;
	}

	/*
	 * this method is use to read text from a text file if the text file is ansii text use isUTF8File = fale else use it =true it retrun a string contail all text of text file
	 */
	public static String readTextFile(String path, boolean isUTF8File) {
		byte[] buffer = null;
		AssetManager am = mainGameLib.getAssets();
		InputStream is;
		try {
			is = am.open(path);
			int size = is.available(); // size of the file in bytes
			buffer = new byte[size]; // declare the size of the byte array with
										// size of the file
			is.read(buffer); // read file
			is.close(); // close file

		} catch (IOException e) {
			e.printStackTrace();

		}
		// Store text file data in the string variable
		String str_data = null;
		if (!isUTF8File)
			str_data = new String(buffer);
		else
			try {
				str_data = new String(buffer, "UTF-8");
			} catch (UnsupportedEncodingException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		buffer = null;
		return str_data;
	}

	public static void log(Object s) {
		if (PRINTLOG)
			System.out.println(String.valueOf(s));
	}

	public static void resetKey() {
		m_currentKey = 0;
	}

	public static void resetTouch() {

		touchState = -1;
		touchPosX = -1;
		touchPosY = -1;
		for (int i = 0; i < m_currentNumPointer; i++) {		
				arraytouchState[i] = -1;
		}
		
	}

	public static void UpdateKey() {
		if (m_keysstate == KEY_STATE_RELEASE)
			m_keysstate = KEY_STATE_NONE;
	}

	public static void UpdateTouch() {

		for (int i = 0; i < m_currentNumPointer; i++) {
			if (arraytouchState[i] != MotionEvent.ACTION_MOVE && arraytouchState[i] != MotionEvent.ACTION_POINTER_DOWN)
				arraytouchState[i] = -1;
		}
	}

	// this for pad. note this is a cicle
	public static final int DIRECTION_NONE = 0;
	public static final int DIRECTION_NUM1 = 1;
	public static final int DIRECTION_NUM2 = 2;
	public static final int DIRECTION_NUM3 = 3;
	public static final int DIRECTION_NUM4 = 4;
	public static final int DIRECTION_NUM6 = 5;
	public static final int DIRECTION_NUM7 = 6;
	public static final int DIRECTION_NUM8 = 7;
	public static final int DIRECTION_NUM9 = 8;
	public static int s_dpadCenterX = 100;
	public static int s_dpadCenterY = 380;
	public static int DPAD_LENGTH = 140;// ban kinh

	public static void touch_drawAreaDpadDirection(int rx, int ry, int length) {
		mainPaint.setStyle(Style.STROKE);
		mainPaint.setColor(Color.YELLOW);
		mainCanvas.drawCircle(s_dpadCenterX, s_dpadCenterY, (float) DPAD_LENGTH, mainPaint);
	}

	@Override
	public boolean onKeyDown(int keyCode, KeyEvent event) {
		super.onKeyDown(keyCode, event);
		Log.d("Key Press:"," " +keyCode);
		if (keyCode == KeyEvent.KEYCODE_0)
				finish();
		if (m_keysstate == KEY_STATE_PRESSED && m_currentKey == keyCode) {
			m_keysstate = KEY_STATE_HOLD;
			// Log.d("key hold", "key hold");
		} else {
			m_keysstate = KEY_STATE_PRESSED;
			m_currentKey = keyCode;
		}
		switch (keyCode) {
	    case KeyEvent.KEYCODE_VOLUME_UP:
	        audio.adjustStreamVolume(AudioManager.STREAM_MUSIC,
	                AudioManager.ADJUST_RAISE, AudioManager.FLAG_SHOW_UI);
	        return true;
	    case KeyEvent.KEYCODE_VOLUME_DOWN:
	        audio.adjustStreamVolume(AudioManager.STREAM_MUSIC,
	                AudioManager.ADJUST_LOWER, AudioManager.FLAG_SHOW_UI);
	        return true;
	    default:
	        return false;
	    }
	}

	@Override
	public boolean onKeyUp(int keyCode, KeyEvent event) {
		m_keysstate = KEY_STATE_RELEASE;
		m_currentKey = keyCode;
		return true;
	}

	public boolean onKey(View v, int keyCode, KeyEvent event) {
		// if this funtion using please use method bellow
		// mainView.setFocusable(true);
		// mainView.setOnKeyListener(mainView);
		// and impleament Onkeylisteer in View class
		m_keysstate = event.getAction();
		m_preKey = m_currentKey;
		m_currentKey = keyCode;

		return true;
	}

	public static boolean isKeyPressed(int key) {

		return (m_keysstate == KEY_STATE_PRESSED && m_preKey == key);
	}

	public boolean isAnyKeyPressed() {
		// int temp = KEY_UP & KEY_DOWN & KEY_LEFT & KEY_RIGHT & KEY_CENTER;
		return m_currentKey != 0 && m_keysstate == KEY_STATE_PRESSED;
	}

	public static boolean isKeyReleased(int key) {
		return (m_keysstate == KEY_STATE_RELEASE && m_currentKey == key);
	}

	public static boolean isKeyHold(int key) {
		return ((m_keysstate == KEY_STATE_HOLD || m_keysstate == KEY_STATE_PRESSED) && m_currentKey == key);
	}

	public boolean isAnyKeyReleased() {
		int temp = KEY_UP & KEY_DOWN & KEY_LEFT & KEY_RIGHT & KEY_CENTER;
		return (m_currentKey | temp) != 0;
	}

	public static boolean isTouchPressScreen() {
		for (int i = 0; i < m_currentNumPointer; i++) {
			if (arraytouchState[i] == MotionEvent.ACTION_DOWN)
				return true;
		}
		
		return false;
	}

	public static boolean isTouchReleaseScreen() {

		for (int i = 0; i < m_currentNumPointer; i++) {
			if (arraytouchState[i] == MotionEvent.ACTION_UP)
				return true;
		}
	
		return false;
	}

	public static boolean isTouchPressInRect(int x, int y, int w, int h) {
	

		for (int i = 0; i < m_currentNumPointer; i++) {
			if (arraytouchState[i] == MotionEvent.ACTION_DOWN && arraytouchPosX[i] > x && arraytouchPosX[i] < x + w && arraytouchPosY[i] > y && arraytouchPosY[i] < y + h)
				return true;
		}
	
		return false;
	}

	public static boolean isTouchDrapInRect(int x, int y, int w, int h) {
		if (PRINTLOG) {
			RectF rectangle = new RectF(x, y, x + w, y + h);
			Paint paint = new Paint();
			paint.setColor(Color.RED);
			paint.setStyle(Style.STROKE);
			mainCanvas.drawRoundRect(rectangle, 0, 0, paint);

			// mainCanvas.drawRect(rectangle, paint);
		}
		for (int i = 0; i < m_currentNumPointer; i++) {
			if ((arraytouchState[i] == MotionEvent.ACTION_MOVE ||
					arraytouchState[i] == MotionEvent.ACTION_POINTER_DOWN ||
					arraytouchState[i] == MotionEvent.ACTION_DOWN)
					&& arraytouchPosX[i] > x && arraytouchPosX[i] < x + w && arraytouchPosY[i] > y && arraytouchPosY[i] < y + h)
				return true;
		}

		return false;
	}

	public static boolean isTouchReleaseInRect(int x, int y, int w, int h) {
		if (PRINTLOG) {
			RectF rectangle = new RectF(x, y, x + w, y + h);
			Paint paint = new Paint();
			paint.setColor(Color.GREEN);
			paint.setStyle(Style.STROKE);
			mainCanvas.drawRoundRect(rectangle, 0, 0, paint);
		}
		for (int i = 0; i < m_currentNumPointer; i++) {
			if (arraytouchState[i] == MotionEvent.ACTION_UP && arraytouchPosX[i] > x && arraytouchPosX[i] < x + w && arraytouchPosY[i] > y && arraytouchPosY[i] < y + h)
				return true;
		}
		return false;
	}

	public void drawSoftKey(Canvas canvas, BitmapFont font, String leftSoftKey,
			String rightSoftKey) {
		if (leftSoftKey != null)
			font.drawString(canvas, leftSoftKey, 2, 460, 0);
		if (rightSoftKey != null)
			font.drawString(canvas, rightSoftKey, 318, 460, 1);
	}

	public boolean checkBoxTouch(int touchx, int touchy, int rectx, int recty,
			int rectw, int recth) {

		if (touchx < rectx || touchx > rectx + rectw || touchy < recty
				|| touchy > recty + recth)
			return false;
		return true;

	}

	protected void paint(Canvas arg0) {

	}

	public static int randomInt(int begin, int end) {
		int temp = (int) (System.currentTimeMillis());
		return begin + temp % (end - begin);
	}

	public synchronized void DrawAll(Canvas canvas, Paint paint) {

	}

	// this class is view
	class PanelView extends View {
		Paint paint;

		public PanelView(Context context) {
			super(context);
			paint = new Paint();
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
			int actionCode = action & MotionEvent.ACTION_MASK;
			int id = action >> MotionEvent.ACTION_POINTER_ID_SHIFT; // chu y move thi luc nao cung = 0
			m_currentNumPointer = event.getPointerCount();
			if (m_currentNumPointer > MAX_TOUCH_POINTER)
				m_currentNumPointer = MAX_TOUCH_POINTER;

		//	for (int i = 0; i < m_currentNumPointer; i++)
			{
				int i = event.getActionIndex();
				if(i >=MAX_TOUCH_POINTER)
					return true; 
			//	event.get
				arraytouchPosX[i] = (int) event.getX(i);
				arraytouchPosY[i] = (int) event.getY(i);
				if(arraytouchState[i] != MotionEvent.ACTION_DOWN &&
						arraytouchState[i] != MotionEvent.ACTION_UP &&						
						arraytouchState[i] != MotionEvent.ACTION_POINTER_UP &&
								arraytouchState[i] != MotionEvent.ACTION_CANCEL )
						//arraytouchState[i] != MotionEvent.ACTION_POINTER_DOWN)					
				arraytouchState[i] = (action & MotionEvent.ACTION_MASK);				
			}

			if(true)//test
				for (int i = 0; i < m_currentNumPointer; i++)
				{					
					// event.get
					arraytouchState[i] = (action & MotionEvent.ACTION_MASK);
					arraytouchPosX[i] = (int) event.getX(i);
					arraytouchPosY[i] = (int) event.getY(i);					
				}
			return true;
		}

	}

	// @Override //also need test here
	public boolean _onTouchEvent(MotionEvent event) {
		int action = event.getAction() & MotionEvent.ACTION_MASK;
		int pointerIndex = (event.getAction() & MotionEvent.ACTION_POINTER_ID_MASK) >> MotionEvent.ACTION_POINTER_ID_SHIFT;
		int pointerId = event.getPointerId(pointerIndex);
		switch (action) {
		case MotionEvent.ACTION_DOWN:
		case MotionEvent.ACTION_POINTER_DOWN:
			arraytouchState[pointerId] = MotionEvent.ACTION_DOWN;
			arraytouchPosX[pointerId] = (int) event.getX(pointerIndex);
			arraytouchPosY[pointerId] = (int) event.getY(pointerIndex);
			break;
		case MotionEvent.ACTION_UP:
		case MotionEvent.ACTION_POINTER_UP:
		case MotionEvent.ACTION_CANCEL:
			arraytouchState[pointerId] = MotionEvent.ACTION_UP;
			arraytouchPosX[pointerId] = (int) event.getX(pointerIndex);
			arraytouchPosY[pointerId] = (int) event.getY(pointerIndex);
			break;
		case MotionEvent.ACTION_MOVE:
			arraytouchState[pointerId] = MotionEvent.ACTION_MOVE;
			arraytouchPosX[pointerId] = (int) event.getX(pointerIndex);
			arraytouchPosY[pointerId] = (int) event.getY(pointerIndex);
			// test here
			break;
		}
		return true;
	}

	public static Point rotationPoint(int x, int y, int degreeAngle) { // width
																		// oxy
		// TODO Auto-generated method stub
		double angle = (degreeAngle * PI / 180);
		double cosTheta = Math.cos(angle);
		double sinTheta = Math.sin(angle);
		double temp = (x * cosTheta - y * sinTheta);
		if (temp > 0)
			temp += 0.5;
		else
			temp -= 0.5;
		int new_x = (int) temp;
		temp = (x * sinTheta + y * cosTheta);
		if (temp > 0)
			temp += 0.5;
		else
			temp -= 0.5;
		int new_y = (int) temp;
		// System.out.println(new_x);
		// System.out.print(new_y);

		return new Point(new_x, new_y);

	}

	public static double changeDegreeToRadian(int temp) {
		return (PI * temp / 180);
	}

	// r = pi*temp /180
	// temp =r*180/PI
	// public static int changeRadianToDegree(double temp) {
	// return (int) (temp * 180 / PI);
	// }

	public static double getRadians(double x, double y) {
		double temp = Math.atan2(y, x);
		if (y < 0) {
			temp = temp + 2 * Math.PI;
		}
		return temp;
	}// end function

	public static int getDegrees(double radian) {
		return (int) Math.floor(radian / (Math.PI / 180));
	}// end function

	public static double getRadians(int x1, int y1, int x2, int y2) {
		double offx = (x2 - x1);// % Bullet.BULLET_SPEED;
		double offy = (y2 - y1);// % Bullet.BULLET_SPEED;
		return getRadians(offx, offy);
	}

	public double getdistance(int x, int y, int x1, int y1) {
		int run = x1 - x;
		int rise = y1 - y;
		return (Math.sqrt(run * run + rise * rise));
	}

	public static boolean checkPointInCicle(int x, int y, int x1, int y1, int ra) {
		int a = ((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y)) - (ra * ra);
		if (a > 0)
			return false;
		else
			return true;
		// cout<<"ham check dc goi "<<a;
	}

}

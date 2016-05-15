package com.mega.wordsearch;
//chua cac bien dung chung


import android.graphics.Canvas;
import android.graphics.Paint;

public interface IConstant {
	// type of message
	public final int MESSAGE_CTOR = 0;
	public final int MESSAGE_UPDATE = 1;
	public final int MESSAGE_PAINT = 2;
	public final int MESSAGE_DTOR = 3;
	// type of KEY PRESS
	public final int KEY_STATE_NONE = 0;	
	public final int KEY_STATE_PRESSED = 1;
	public final int KEY_STATE_HOLD = 2;
	public final int KEY_STATE_RELEASE = 3;
	
	//STATE
	public  int STATE_LOGO = 0;
	public  int STATE_ASKSOUND = 1;
	public  int STATE_SPLASH = 2;	
	public  int STATE_MAINMENU = 3;
	public  int STATE_HOW_TO_PLAY = 4;
	public  int STATE_CREADIT = 5;
	public  int STATE_GAMEPLAY = 6;
	public  int STATE_IGM = 7;	
	public  int STATE_LOADING = 8;
	public  int STATE_SELECT_MODE = 9;
	public  int STATE_COMPLETELEVEL = 10;
	public  int STATE_LEADERBOARD = 11;
	public  int STATE_ACHIVEMENT = 12;
	public  int STATE_EXIT = 1000;
	//debug
	public static boolean DEBUG_MAP = false;
	


	

}

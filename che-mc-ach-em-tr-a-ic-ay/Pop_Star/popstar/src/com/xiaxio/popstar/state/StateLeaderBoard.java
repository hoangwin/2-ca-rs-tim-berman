package com.xiaxio.popstar.state;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.regex.Pattern;

import org.xmlpull.v1.XmlPullParserException;

import com.xiaxio.popstar.DEF;
import com.xiaxio.popstar.PopStar;
import com.xiaxio.popstar.UserInfo;



import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.text.method.HideReturnsTransformationMethod;
import android.util.Log;
import android.view.KeyEvent;

public class StateLeaderBoard extends PopStar
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isLeaderBoard = true;

	public static InputStream inputStreamLeaderBoard;
	public static int step = 0;//0 call LeaderBoard

	public static synchronized void SendMessage(int type)
	{
		switch (type)
		{
		case MESSAGE_CTOR:
			step = 0;		
			break;
		case MESSAGE_UPDATE:		
			if(step == 2){
				UserInfo.SendScoreToserver();	
				UserInfo.getRank();
				
			}
			step++;
			
			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || PopStar.isTouchReleaseInRect(0, 0, DEF.BUTTON_CANCEL_CONFIRM_W,DEF.BUTTON_CANCEL_CONFIRM_H))
				changeState(STATE_MAINMENU);
		
			break;
		case MESSAGE_PAINT:
			mainPaint.setStyle(Style.FILL_AND_STROKE);
			mainPaint.setColor(Color.BLACK);
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);
			//FishSimple.sprite.drawAFrame(mainCanvas, 29, (int)(scaleX*200), (int)(scaleY*5));
			//mainCanvas.drawRect(0,0,SCREEN_WIDTH,SCREEN_HEIGHT,mainPaint);
			int Begin_Title_X = (int)(440* scaleX);
			int Begin_Y = (int)(200* scaleY);
			//POS  Name                 Score        Level
			int POS_X = (int)(5* scaleX);
			int NAME_X = (int)(130* scaleX);;
			int SCORE_X = (int)(600* scaleX);;
			int LEVEL_X = (int)(700* scaleX);
			Rect textBoundsBig = new Rect();
			
			android_FontBig.getTextBounds("Maig", 0, "Maig".length(), textBoundsBig);
			Rect textBoundsNormal = new Rect();
			android_FontSmall.getTextBounds("Maig", 0, "Maig".length(), textBoundsNormal);
			//---------------------------------------
			mainCanvas.drawText( "LEADERBOARD", Begin_Title_X, Begin_Y , android_FontBig);
			
			android_FontSmall.setTextAlign(Align.LEFT);
			mainCanvas.drawText( "POS", POS_X,(int)( Begin_Y +  (1 + 1.5)*textBoundsNormal.height()), android_FontSmall);
			mainCanvas.drawText( "    NAME ", NAME_X,(int)( Begin_Y +  (1 + 1.5)*textBoundsNormal.height()), android_FontSmall);
			mainCanvas.drawText( "SCORE",SCORE_X,(int)( Begin_Y +  (1 + 1.5)*textBoundsNormal.height()), android_FontSmall);
		//	mainCanvas.drawText( "Level",LEVEL_X,(int)( Begin_Y +  (1 + 1.5)*textBoundsNormal.height()), android_FontNormal);
			
			for(int i=0;i<UserInfo.topUserInfo.length;i++)
			{
				mainCanvas.drawText(" "+(UserInfo.topUserInfo[i].rank +1), POS_X,(int)( Begin_Y +  (1 + (i +2)* 1.5)*textBoundsNormal.height()), android_FontSmall);
				mainCanvas.drawText( UserInfo.topUserInfo[i].userName, NAME_X,(int)( Begin_Y +  (1 +(i +2)* 1.5)*textBoundsNormal.height()), android_FontSmall);
				mainCanvas.drawText(" "+ UserInfo.topUserInfo[i].score,SCORE_X,(int)( Begin_Y +  (1 + (i +2)*1.5)*textBoundsNormal.height()), android_FontSmall);
		//		mainCanvas.drawText(" "+(UserInfo.topUserInfo[i].level),LEVEL_X,(int)( Begin_Y +  (1 + (i +2)*1.5)*textBoundsNormal.height()), android_FontNormal);
					
			}			
			
			mainCanvas.drawText("-------------------------", POS_X,(int)( Begin_Y +  (1 + (5 +2)* 1.5)*textBoundsNormal.height()), android_FontSmall);
			
			mainCanvas.drawText(" "+(UserInfo.myUserInfo.rank), POS_X,(int)( Begin_Y +  (1 + (6 +2)* 1.5)*textBoundsNormal.height()), android_FontSmall);
			mainCanvas.drawText( UserInfo.myUserInfo.userName, NAME_X,(int)( Begin_Y +  (1 +(6 +2)* 1.5)*textBoundsNormal.height()), android_FontSmall);
			mainCanvas.drawText(" "+ UserInfo.myUserInfo.score,SCORE_X,(int)( Begin_Y +  (1 + (6 +2)*1.5)*textBoundsNormal.height()), android_FontSmall);
		//	mainCanvas.drawText(" "+(UserInfo.myUserInfo.level),LEVEL_X,(int)( Begin_Y +  (1 + (6 +2)*1.5)*textBoundsNormal.height()), android_FontNormal);
			
			android_FontSmall.setTextAlign(Align.CENTER);
			if (PopStar.isTouchDrapInRect(0, 0, DEF.BUTTON_CANCEL_CONFIRM_W, DEF.BUTTON_CANCEL_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, 0, 0);
			else
				StateGameplay.spriteDPad.drawAFrame(PopStar.mainCanvas, DEF.FRAME_CANCEL_NORMAL, 0, 0);
			
			if(step<=2)
				drawPopUp();
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
	static void drawPopUp()
	{	
		mainPaint.setStyle(Style.FILL_AND_STROKE);
		mainPaint.setColor(Color.BLACK);
		mainPaint.setAlpha(200);
		int Begin_X = (int)(130* scaleX);
		int Begin_Y = (int)(300* scaleX);
		int Begin_W = (int)(550* scaleX);
		int Begin_H = (int)(200* scaleY);
		mainCanvas.drawRect(Begin_X, Begin_Y, Begin_X + Begin_W,Begin_Y + Begin_H, mainPaint);
		mainCanvas.drawText("Connect To Server.",Begin_X +Begin_W/2 , Begin_Y +Begin_H/2,  android_FontNormal);
		
	}
}

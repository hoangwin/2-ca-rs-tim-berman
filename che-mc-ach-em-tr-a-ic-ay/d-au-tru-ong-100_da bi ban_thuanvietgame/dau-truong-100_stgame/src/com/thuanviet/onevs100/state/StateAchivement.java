package com.thuanviet.onevs100.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.onevs100.BitmapFont;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.Dialog;
import com.thuanviet.onevs100.GameLayer;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.IConstant;
import com.thuanviet.onevs100.SoundManager;
import com.thuanviet.onevs100.Sprite;
import com.thuanviet.onevs100.game.Map;

import resolution.DEF;

import android.graphics.Color;

import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateAchivement extends DauTruong100
{
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	public static Sprite spriteAchivement = null;
	public static boolean achivementLock[] ={true,true,true,true,true,true};
	public static int[]   achivementUnLockScore ={1,1500,2600,3100,5300,10000};
	public static String[] achivementUnLockStringTitle ={"Màn đầu tiên","1500 Điểm","2600 Điểm","3100 Điểm","5300 Điểm","Top Điểm"};
	public static String[] achivementUnLockStringConstent ={"Kết thúc màn chơi đầu tiên",
															"Đạt hơn 1500 Điểm ",
															"Đạt hơn 2600 Điểm",
															"Đạt hơn 3100 Điểm",
															"Đạt hơn 5300 Điểm",
															"Đạt hơn 10000 Điểm"};
	public static int offset = 0;
	public static int space = 60;
	public static int  beginTouchY =-1;
	//back button
	
	public static int MENU_BACK_WIDTH = 20;
	public static int MENU_BACK_HEIGHT = 20;
	public static synchronized void SendMessage(int type)
	{

		switch (type) 
		{
		case MESSAGE_CTOR: 
			MENU_ELEMENT_H = StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
			MENU_ELEMENT_W = StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
			MENU_BEGIN_X = SCREEN_WIDTH / 2;			
			MENU_ELEMENT_SPACE = 3*MENU_ELEMENT_H / 2;
			MENU_BEGIN_Y = (int)(430*scaleY);
			
			MENU_BACK_WIDTH =  StateGameplay.spriteUi.getFrameWidth(3);
			MENU_BACK_HEIGHT =  StateGameplay.spriteUi.getFrameHeight(3);
			space =(int)( 160*scaleY);
			break;
		case MESSAGE_UPDATE:
		
			if (isTouchReleaseInRect((int)(650*DauTruong100.scaleX), (int)(55*DauTruong100.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
			{
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
			setAchivement();
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)){
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
			break;
		case MESSAGE_PAINT:
			Rect textBounds = new Rect();
			android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBounds);			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);			
			mainCanvas.drawBitmap(StateMainMenu.gameTitleBitmap, (SCREEN_WIDTH - StateMainMenu.gameTitleBitmap.getWidth())/2,0, mainPaint);
			DauTruong100.mainPaint.setStyle(Style.FILL);
			DauTruong100.mainPaint.setARGB(200, 0, 0, 0);
			DauTruong100.mainCanvas.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 11,  0,(int)(20*DauTruong100.scaleY));
			DauTruong100.android_MenuFont.setTextAlign(Align.CENTER);
			DauTruong100.android_MenuFont.setColor(Color.WHITE);
			
			DauTruong100.mainCanvas.drawText("PHẦN THƯỞNG", DauTruong100.SCREEN_WIDTH / 2,(int)(120*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			DauTruong100.android_MenuFont.setColor(Color.WHITE);	
			//
			android_MenuFont.setTextAlign(Align.LEFT);
			android_FontSmall.setTextAlign(Align.LEFT);
			android_MenuFont.setColor(Color.rgb(20, 136, 157));
			android_FontSmall.setColor(Color.rgb(255, 255,255));
			for(int i = 0;i<6;i++)
			{
				//if(i%2!=0)
				//	mainPaint.setAlpha(150);
				//else
				//	mainPaint.setAlpha(100);
				//	mainCanvas.drawRect((int)(390*scaleX),  (int)( 310*scaleY) + i*space + offset , SCREEN_WIDTH - (int)(15*scaleX),  (int)( 310*scaleY) + offset + (i+1)*space, mainPaint);
				
				if(!achivementLock[i])
				{
					spriteAchivement.drawAFrame(mainCanvas, 2*i ,(int)( 80*scaleX), (int)(160*scaleY) + offset + i*space);
				}
				else
				{
					spriteAchivement.drawAFrame(mainCanvas, 1 + 2*i ,(int)( 80*scaleX),(int)(160*scaleY) + offset + i*space);
				}

				mainCanvas.drawText(achivementUnLockStringTitle[i],(int)( 220*scaleX),  (int)( 220*scaleY) + offset + i*space, android_MenuFont);
				mainCanvas.drawText(achivementUnLockStringConstent[i],(int)( 220*scaleX),  (int)( 280*scaleY) + offset + i*space, android_FontSmall);
				//fontsmall.drawString(mainCanvas, "COMPLETED LEVEL " + i,(int)( 600*scaleX), (int)( 360*scaleY) + offset + i*space,BitmapFont.ALIGN_LEFT);
				
				mainCanvas.drawLine((int)( 100*scaleX), (int)(160*scaleY) + offset + i*space, (int)( 680*scaleX), (int)(160*scaleY) + offset + i*space, mainPaint);
			}
			
			// back			
			if (isTouchDrapInRect((int)(650*DauTruong100.scaleX), (int)(55*DauTruong100.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 13,  (int)(650*DauTruong100.scaleX),(int)(55*DauTruong100.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 12, (int)(650*DauTruong100.scaleX),(int)(55*DauTruong100.scaleY));
			
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
	
	public static void setAchivement()
	{
		for(int i=0;i<achivementUnLockScore.length;i++)
			if(Map.mAllScole >= achivementUnLockScore[i])
				achivementLock[i] = false;
	}
}

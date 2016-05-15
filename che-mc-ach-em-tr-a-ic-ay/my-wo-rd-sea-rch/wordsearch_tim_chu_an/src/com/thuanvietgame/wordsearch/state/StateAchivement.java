package com.thuanvietgame.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanvietgame.wordsearch.BitmapFont;
import com.thuanvietgame.wordsearch.Dialog;
import com.thuanvietgame.wordsearch.GameLayer;
import com.thuanvietgame.wordsearch.GameLib;
import com.thuanvietgame.wordsearch.IConstant;
import com.thuanvietgame.wordsearch.SoundManager;
import com.thuanvietgame.wordsearch.Sprite;
import com.thuanvietgame.wordsearch.WordSearchActivity;
import com.thuanvietgame.wordsearch.game.Map;

import resolution.DEF;

import android.graphics.Color;

import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.view.KeyEvent;

public class StateAchivement extends WordSearchActivity
{
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	public static Sprite spriteAchivement = null;
	public static boolean achivementLock[] ={true,true,true,true,true,true};
	public static int[]   achivementUnLockScore ={1,3500,10600,27100,53000,100000};
	public static String[] achivementUnLockStringTitle ={"Màn đầu tiên","3500 Điểm","10600 Điểm","27100 Điểm","53000 Điểm","Top Điểm"};
	public static String[] achivementUnLockStringConstent ={"Kết thúc màn chơi đầu tiên",
															"Đạt hơn 3500 Điểm ",
															"Đạt hơn 10600 Điểm",
															"Đạt hơn 27100 Điểm",
															"Đạt hơn 53000 Điểm",
															"Đạt hơn 100000 Điểm"};
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
		
			if (isTouchReleaseInRect((int)(650*WordSearchActivity.scaleX), (int)(55*WordSearchActivity.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
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
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			WordSearchActivity.mainPaint.setARGB(200, 0, 0, 0);
			WordSearchActivity.mainCanvas.drawRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT, WordSearchActivity.mainPaint);
			StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 5,  0,(int)(20*WordSearchActivity.scaleY));
			WordSearchActivity.android_MenuFont.setTextAlign(Align.CENTER);
			WordSearchActivity.android_MenuFont.setColor(Color.rgb(79,57,30));
			
			WordSearchActivity.mainCanvas.drawText("THÀNH TÍCH", WordSearchActivity.SCREEN_WIDTH / 2,(int)(120*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			WordSearchActivity.android_MenuFont.setColor(Color.WHITE);	
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
			if (isTouchDrapInRect((int)(650*WordSearchActivity.scaleX), (int)(55*WordSearchActivity.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
				StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 4,  (int)(650*WordSearchActivity.scaleX),(int)(55*WordSearchActivity.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 3, (int)(650*WordSearchActivity.scaleX),(int)(55*WordSearchActivity.scaleY));
			
			
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

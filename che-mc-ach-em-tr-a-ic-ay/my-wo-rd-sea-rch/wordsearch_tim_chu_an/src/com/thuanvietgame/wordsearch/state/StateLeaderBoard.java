package com.thuanvietgame.wordsearch.state;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.regex.Pattern;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;
import org.xmlpull.v1.XmlPullParserException;

import com.thuanvietgame.wordsearch.BitmapFont;
import com.thuanvietgame.wordsearch.Dialog;
import com.thuanvietgame.wordsearch.GameLayer;
import com.thuanvietgame.wordsearch.GameLib;
import com.thuanvietgame.wordsearch.IConstant;
import com.thuanvietgame.wordsearch.SoundManager;
import com.thuanvietgame.wordsearch.WordSearchActivity;
import com.thuanvietgame.wordsearch.game.Map;

import resolution.DEF;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.graphics.Color;

import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.util.Patterns;
import android.view.KeyEvent;

public class StateLeaderBoard extends WordSearchActivity
{
	public static int MENU_BEGIN_X = 0; //will iit in contructor
	public static int MENU_BEGIN_Y = 200;
	public static int MENU_ELEMENT_W = 0; //will iit in contructor
	public static int MENU_ELEMENT_H = 0; //will iit in contructor
	public static int MENU_ELEMENT_SPACE = 20;
	
	//back button
	
	public static int MENU_BACK_WIDTH = 20;
	public static int MENU_BACK_HEIGHT = 20;
	//
	public static String topUserInfoName[] = {"---","---","---","---","---"};
	public static String myName = "";
	public static int myRank = 0;
	public static int myScore = 0;
	public static int topUserInfoScore[] = {0,0,0,0,0};
	public static int step = 0;
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
			step = 0;
			break;
		case MESSAGE_UPDATE:
			if(step == 2){
				SendScoreToserver();	
				getRank();				
			}
			step++;
			//back
			if (isTouchReleaseInRect((int)(650*WordSearchActivity.scaleX), (int)(155*WordSearchActivity.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
			{
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
				
			if (isKeyReleased(KeyEvent.KEYCODE_BACK)){
				SoundManager.playSound(SoundManager.SOUND_SELECT, 1);
				changeState(STATE_MAINMENU);
			}
			break;
			
		case MESSAGE_PAINT:
			
			Rect textBounds = new Rect();
			android_MenuFont.setTextAlign(Align.CENTER);
			android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBounds);			
			mainCanvas.drawBitmap(StateMainMenu.splashBitmap, 0,0, mainPaint);			
			mainCanvas.drawBitmap(StateMainMenu.gameTitleBitmap, (SCREEN_WIDTH - StateMainMenu.gameTitleBitmap.getWidth())/2,0, mainPaint);
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			WordSearchActivity.mainPaint.setARGB(200, 0, 0, 0);
			WordSearchActivity.mainCanvas.drawRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT, WordSearchActivity.mainPaint);
			StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 2,  0,(int)(120*WordSearchActivity.scaleY));
			WordSearchActivity.android_MenuFont.setColor(Color.rgb(79,57,30));
			WordSearchActivity.mainCanvas.drawText("XẾP HẠNG", WordSearchActivity.SCREEN_WIDTH / 2,(int)(230*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			 
			// back
			if (isTouchDrapInRect((int)(650*WordSearchActivity.scaleX), (int)(155*WordSearchActivity.scaleY), MENU_BACK_WIDTH, MENU_BACK_HEIGHT))
				StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 4,  (int)(650*WordSearchActivity.scaleX),(int)(155*WordSearchActivity.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 3, (int)(650*WordSearchActivity.scaleX),(int)(155*WordSearchActivity.scaleY));
			//draw  
			int Begin_Y = (int)(200* scaleY); 
			//POS  Name                 Score        Level
			int POS_X = (int)(50* scaleX);
			int NAME_X = (int)(170* scaleX);;
			int SCORE_X = (int)(580* scaleX);;			
			Rect textBoundsBig = new Rect();			
			
			Rect textBoundsNormal = new Rect();
			android_MenuFont.getTextBounds("Maig", 0, "Maig".length(), textBoundsNormal);
			int height  = textBoundsNormal.height() - (int)(10*scaleY);
			
			//---------------------------------------			
			
			android_MenuFont.setTextAlign(Align.LEFT);
			
			mainCanvas.drawText( "STT", POS_X,(int)( Begin_Y +  (1 + 1.5)*height), android_MenuFont);
			mainCanvas.drawText( "  TÊN", NAME_X,(int)( Begin_Y +  (1 + 1.5)*height), android_MenuFont);
			mainCanvas.drawText( "ĐIỂM",SCORE_X,(int)( Begin_Y +  (1 + 1.5)*height), android_MenuFont);
		
			android_FontSmall.setTextAlign(Align.LEFT);
			android_FontSmall.setColor(Color.WHITE);
			for(int i=0;i<topUserInfoName.length;i++)
			{
				mainCanvas.drawText(" "+(i +1), POS_X,(int)( Begin_Y +  (1 + (i +2)* 1.5)*height), android_FontSmall);
				mainCanvas.drawText( topUserInfoName[i], NAME_X,(int)( Begin_Y +  (1 +(i +2)* 1.5)*height), android_FontSmall);
				mainCanvas.drawText(" "+topUserInfoScore[i],SCORE_X,(int)( Begin_Y +  (1 + (i +2)*1.5)*height), android_FontSmall);
			}			
			
			mainCanvas.drawText("--------------------", POS_X,(int)( Begin_Y +  (1 + (5 +2)* 1.5)*height), android_MenuFont);
			android_FontSmall.setColor(Color.rgb(233,100,17));
			mainCanvas.drawText(" " + myRank, POS_X,(int)( Begin_Y +  (1 + (6 +2)* 1.5)*height), android_FontSmall);
			mainCanvas.drawText(myName, NAME_X,(int)( Begin_Y +  (1 +(6 +2)* 1.5)*height), android_FontSmall);
			mainCanvas.drawText(" " + myScore,SCORE_X,(int)( Begin_Y +  (1 + (6 +2)*1.5)*height), android_FontSmall);
			
			if(step<=2)
				drawPopUp();
			
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
	public static void SendScoreToserver()
	{		
		//String url = "http://caogia.byethost10.com/WordSearch_MegaWordSearch/SetGetData.php?type=update&username=toanstt&Score=12&country=14a";
		String url = "http://caogia.byethost10.com/WordSearch_MegaWordSearch/SetGetData.php?type=update&";
		url += "username=" + getUsername();
		url += "&Score="+Map.mAllScole;				
		try {
				HttpClient httpclient = new DefaultHttpClient();
				httpclient.execute(new HttpGet(url));			
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}
		
	}
	public static void getRank()
	{
		String url = "http://caogia.byethost10.com/WordSearch_MegaWordSearch/SetGetData.php?type=select&username=" + getUsername();
		InputStream content = null;
		try {
			HttpClient httpclient = new DefaultHttpClient();
			HttpResponse response = httpclient.execute(new HttpGet(url));
			content = response.getEntity().getContent();
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}		
		
		String line ="5|noname|6738|toan1|1|toan2|1|toan3|1|toan4|1|1|noname|6738|";
		String tempstr ="5|noname|6738|toan1|1|toan2|1|toan3|1|toan4|1|1|noname|6738|";
		if(content!= null)
		{
			tempstr = "";
			BufferedReader br = new BufferedReader(new InputStreamReader(content));
			try {
				while ((line = br.readLine()) != null) {
					System.out.println(line);
					tempstr += line;
				}
				br.close();
			} catch (Exception e) {
				// TODO: handle exception
			}
		}
		//String tempstr = "hoang.nguyenmau|70|aaa|123|toanstt|123|caogia|145|CaoGia|1234|";				
		String[] part = tempstr.split(Pattern.quote("|"));
		int indexPart = 0;
		if (part.length > 2) {	
			//3|Hello|1|1|aa|1|1|toanstt|0|0|3|toanstt|0|0|
			int length = Integer.parseInt(part[indexPart++]);// =3 so phan tu top rank
			
			for(int i=0;i< topUserInfoName.length;i++)
			{
				if(i <length)
				{					
					topUserInfoName[i] = part[indexPart++];
					topUserInfoScore[i] = Integer.parseInt(part[indexPart++]);					
				}
				else
				{				
					topUserInfoName[i] = "---";
					topUserInfoScore[i] = 0;					
				}
				
			}
			//my rank
			if(part.length > indexPart)
			{
				myRank = Integer.parseInt(part[indexPart++]) -1;
				if(myScore >=0)
				{
					myName = part[indexPart++];
					if(myScore < Integer.parseInt(part[indexPart]))
						myScore = Integer.parseInt(part[indexPart]);					
					for(int i= 0;i<5;i++)
					{
						if(myName.compareTo(topUserInfoName[i]) ==0 && myName.length() == topUserInfoName[i].length())
						{
							myRank = i + 1; 
						}
					}
				}
				else
				{
					myName = "---";
					myRank = 1000;
				}
			}
		}
		
	}
	
	static void drawPopUp()
	{	
		mainPaint.setStyle(Style.FILL_AND_STROKE);
		mainPaint.setColor(Color.BLACK);
		mainPaint.setAlpha(200);
		int Begin_X = (int)(50* scaleX);
		int Begin_Y = (int)(500* scaleX);
		int Begin_W = (int)(700* scaleX);
		int Begin_H = (int)(200* scaleY);
		android_MenuFont.setTextAlign(Align.CENTER);
		android_MenuFont.setColor(Color.WHITE);
		mainCanvas.drawRect(Begin_X, Begin_Y, Begin_X + Begin_W,Begin_Y + Begin_H, mainPaint);
		mainCanvas.drawText("Connect To Server...",Begin_X +Begin_W/2 , Begin_Y +Begin_H/2,  android_MenuFont);
		
	}

}

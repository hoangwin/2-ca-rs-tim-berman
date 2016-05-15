package com.megagame.fourinaline;

import java.io.FilterReader;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Random;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;

import com.megagame.fourinaline.actor.Actor;
import com.megagame.fourinaline.actor.DiamondActor;
import com.megagame.fourinaline.state.StateGameplay;
import com.megagame.fourinaline.state.StateWinLose;

import resolution.DEF;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.graphics.RectF;
import android.util.Log;
import android.view.MotionEvent;

public class Map
{
	public final static int MAX_COL = 7;
	public final static int MAX_ROW = 6;
	public final static int MAX_ITEM = 4;
	public static int ITEM_WIDTH = 60;
	public static int ITEM_HEIGHT = 60;
	public static Random random = new Random();
	public static DiamondActor[][] tableArray = new DiamondActor[MAX_ROW][MAX_COL];
	public static DiamondActor[][] TemptableArray = new DiamondActor[MAX_ROW][MAX_COL];
	public static ArrayList<Point> listStack = new ArrayList<Point>();
	// align
	public static int BEGIN_X = 60;
	public static int BEGIN_Y = 60;
	// state
	public final static int STATE_IDE = 0;
	public final static int STATE_DROP = 1;
	public final static int STATE_WAIT_DETROY = 2;
	public final static int STATE_DETROY = 3;
	public static int stateInGamePlay = 0;
	public static long MAX_TIMER = 60000;
	public static int targetScore = 0;// normal mode
	public static String strEffect = "0";// 0 = waiting begin game;1 =play
											// game;2 waiting Finish;
	public static int timeEffect = 0;// 0 = waiting begin game;1 =play game;2
										// waiting Finish;
	public static DiamondActor effectActorRow = new DiamondActor();
	public static DiamondActor effectActorCol = new DiamondActor();
	public static boolean isSpecialType = false;
	public static boolean isUserStep = true;
	static int X_V[] = { 0, -1, -1, -1 };//,-1, 1,0, 0};
	static int Y_V[] = { -1, -1, 0, 1 };//, 1,-1,1,-1};
	public static boolean isPlayer1WIn = false;
	public static void init() 
	{
		DiamondActor.sprite = StateGameplay.spriteFruit;
		ITEM_WIDTH = StateGameplay.spriteFruit.getFrameWidth(0);
		ITEM_HEIGHT = StateGameplay.spriteFruit.getFrameHeight(0);
		DiamondActor.speed = ITEM_HEIGHT / 2;
		BEGIN_X = (FourInALine.SCREEN_WIDTH - MAX_COL * ITEM_WIDTH) / 2;
		BEGIN_Y = (int) (306 * StateGameplay.SCREEN_HEIGHT * 1.0f / 1280);
		// BEGIN_Y = (Diamond.SCREEN_HEIGHT - MAX_ROW * ITEM_HEIGHT) / 2;
		for (int i = 0; i < MAX_ROW; i++)
			for (int j = 0; j < MAX_COL; j++) {
				//int tempValue = random.nextInt(MAX_ITEM);
				tableArray[i][j] = null;
				tableArray[i][j] = new DiamondActor(-1, i, j, BEGIN_X + j * ITEM_WIDTH, (i) * ITEM_HEIGHT - (MAX_ROW + j) * ITEM_HEIGHT, BEGIN_X + j * ITEM_WIDTH, BEGIN_Y + i * ITEM_HEIGHT, DiamondActor.STATE_IDE);
				tableArray[i][j].state = DiamondActor.STATE_IDE;
			}
		stateInGamePlay = STATE_IDE;
		Map.targetScore = (3000 + StateGameplay.mcurrentlevel * 1000);
		SoundManager.playSound(SoundManager.SOUND_START, 1);
		
		isUserStep = random.nextBoolean();
	}

	public static void DrawGame(Canvas c)
	{

		for (int i = 0; i < MAX_ROW; i++) {
			for (int j = 0; j < MAX_COL; j++) {
				// if((i+j)%2 == 0)
				// Diamond.mainPaint.setARGB(100, 0, 0, 0);
				// else
				tableArray[i][j].paint(c);
			}
		}//
		int frame = 0; 
		if(isUserStep && StateGameplay.gameMode == 0)
			frame = 6;
		if(!isUserStep && StateGameplay.gameMode == 0)
			frame = 7;
		else if(isUserStep && StateGameplay.gameMode == 1)
			frame = 8;
		else if(!isUserStep && StateGameplay.gameMode == 1)
			frame = 9;
		int  y = (int) (1000 * StateGameplay.SCREEN_HEIGHT * 1.0 / 1280);
		if(FourInALine.mCurrentState == FourInALine.STATE_GAMEPLAY)
			StateGameplay.spriteFruit.drawAFrame(FourInALine.mainCanvas, frame, 0, y);
		switch (stateInGamePlay)
		{
		case STATE_IDE:

			break;
		case STATE_DROP:
			effectActorRow.sprite.drawAnim(c, effectActorRow);
			effectActorCol.sprite.drawAnim(c, effectActorCol);
			break;
		}
	}

	public static void Update()
	{

		//	StateGameplay.changeState(StateGameplay.STATE_WINLOSE);

		switch (stateInGamePlay)
		{
		case STATE_IDE:
			int col = -1;
			if (StateGameplay.gameMode == 1 || isUserStep) {
				if (GameLib.isTouchReleaseInRect(BEGIN_X, DEF.BUTTON_IGM_W + 10, BEGIN_X + MAX_COL * ITEM_WIDTH, StateGameplay.SCREEN_HEIGHT)) {
					col = (GameLib.arraytouchPosX[0] - BEGIN_X) / ITEM_WIDTH;

				}
			} else {
				//col = NewStep1();
				//col = NewStep2();
				if(StateGameplay.gameDifficult == 0)
					col = NewStep1();
				else if(StateGameplay.gameDifficult == 0)
					col = NewStep2();
				else
					col = NewStep3();
				//col = random.nextInt(MAX_COL);
			}
			if (col < MAX_COL && col >-1) {
				for (int i = MAX_ROW - 1; i >= 0; i--) {
					if (tableArray[i][col].value == -1) {
						stateInGamePlay = STATE_DROP;
						if (isUserStep)
							tableArray[i][col].value = 0;
						else
							tableArray[i][col].value = 1;						
						tableArray[i][col].state = DiamondActor.STATE_DROP;
						tableArray[i][col].m_x = BEGIN_X + col * ITEM_WIDTH;
						tableArray[i][col].m_y = 0;
						tableArray[i][col].targetX = BEGIN_X + col * ITEM_WIDTH;
						tableArray[i][col].targetY = BEGIN_Y + i * ITEM_HEIGHT;
						break;
					}
				}
			}

			break;
		case STATE_DROP:  
			if (timeEffect++ < 7)
				break;
			boolean completeState = true;
			for (int i = 0; i < MAX_ROW; i++)
				for (int j = 0; j < MAX_COL; j++) {
					tableArray[i][j].update();
					if (tableArray[i][j].state != DiamondActor.STATE_IDE) {
						completeState = false;
						// break;
					}
				}
			if (completeState) {
				stateInGamePlay = STATE_IDE;
				//check win
			}
			break;
		}

	}
	static int dem;
	static int X_WIN_[] = {0,0,0,0,0,0,0};
	static int Y_WIN_[] = {0,0,0,0,0,0,0};
	public static boolean checkWin(int row, int col)
	{
		boolean isWin = false;
		int current_flag = tableArray[row][col].value;
		isPlayer1WIn = (current_flag ==0);
		//cout << current_flag<< endl;
		int count1 = 0;
		int count2 = 0;
		int col_check;
		int row_check;
		for (int i = 0; i < 4; i++) 
		{
			for (int j = 1; j < 5; j++) {
				col_check = col + j * X_V[i];
				row_check = row + j * Y_V[i];
				if (col_check < 0 || row_check < 0 || col_check >= MAX_COL || row_check >= MAX_ROW || tableArray[row_check][col_check].value == -1)
					break;
				if (tableArray[row_check][col_check].value != current_flag)
					break;
				count1++;
			}
			for (int j = -1; j > -5; j--) {
				col_check = col + j * X_V[i];
				row_check = row + j * Y_V[i];
				if (col_check < 0 || row_check < 0 || col_check >= MAX_COL || row_check >= MAX_ROW || tableArray[row_check][col_check].value == -1)
					break;
				if (tableArray[row_check][col_check].value != current_flag)
					break;
				count2++;
			}
			if ((1 + count1 + count2) >= 4)
			{
				isWin = true;
				//need test
				X_WIN_[0] = col;
				Y_WIN_[0] = row;
				dem=1;
				for(int j=1;j<=count1;j++)
				{
					X_WIN_[dem] = col + X_V[i]*j;
					Y_WIN_[dem] = row + Y_V[i]*j;
					dem++;
					
				}
				for(int j=1;j<=count2;j++)
				{
					X_WIN_[dem] = col - X_V[i]*j;
					Y_WIN_[dem] = row - Y_V[i]*j;
					dem++;
				}
				for(int j=0;j<dem;j++)
				{
					DiamondActor tempActor = tableArray[Y_WIN_[j]][X_WIN_[j]];
					tempActor.sprite.setAnim(tempActor,0,tempActor.m_x,tempActor.m_y, true,false);//value = 3;
				}				
				//need test
				break;
				
			}
			count1 = count2 = 0;
		}
		return isWin;
	}

	public static void checkNear(int row, int col)
	{

	}

	public static void drawArrayLog()
	{
		String s = "";
		for (int i = 0; i < MAX_ROW; i++) {
			s = "";
			for (int j = 0; j < MAX_COL; j++) {

				TemptableArray[i][j].value = tableArray[i][j].value;
			}
		}
	}
	static int NewStep1()
	{
		int current_flag1=0;
		int current_flag2=0;
		//cout << current_flag<< endl;
		int count1 = 0;
		int count2 = 0;
		int x_check;
		int y_check;
		int x_new =0;
		int y_new =0;
		int sum[] = {0,0,0,0,0,0,0};


		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			x_new = lanthu;
			y_new=-1;
			for(int i=0;i<MAX_ROW;i++)
			{
				if(tableArray[i][x_new].value ==-1)
					y_new = i;
				else
					break;
			}
			if(y_new!=-1)
			for(int i =0;i<4;i++)
			{
				
				for(int j =1;j<5;j++)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==1)
						current_flag1= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag1)
						break;
					count1++;			
				}
				for(int j =-1;j>-5;j--)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==-1)
						current_flag2= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag2)
						break;
					count2++;			
				}
				sum[lanthu]+=count1+count2 ;
				if(count1 ==3 || count2 ==3)
					return lanthu;
				if(count1+count2+1>=4 && current_flag1==current_flag2)
					return lanthu;
				count1 = count2 = 0;
			}
		}

		int index=0;
		int index_sum=sum[0];
		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			if(index_sum<sum[lanthu])
			{
				index = lanthu;
				index_sum = sum[lanthu];
			}
		}
		return index;
	}
	
	static int NewStep3()
	{
		int current_flag1=0;
		int current_flag2=0;
		//cout << current_flag<< endl;
		int count1 = 0;
		int count2 = 0;
		int x_check;
		int y_check;
		int x_new =0;
		int y_new =0;
		int sum[] = {0,0,0,0,0,0,0};


		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			x_new = lanthu;
			y_new=-1;
			for(int i=0;i<MAX_ROW;i++)
			{
				if(tableArray[i][x_new].value ==-1)
					y_new = i;
				else
					break;
			}
			if(y_new!=-1)
			for(int i =0;i<4;i++)
			{
				
				for(int j =1;j<5;j++)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==1)
						current_flag1= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag1)
						break;
					count1++;			
				}
				for(int j =-1;j>-5;j--)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==-1)
						current_flag2= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag2)
						break;
					count2++;			
				}
				sum[lanthu]+=count1+count2 + Math.abs(count1-count2);
				if(count1 ==3 || count2 ==3)
					return lanthu;
				if(count1+count2+1>=4 && current_flag1==current_flag2)
					return lanthu;
				count1 = count2 = 0;
			}
		}

		int index=0;
		int index_sum=sum[0];
		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			if(index_sum<sum[lanthu])
			{
				index = lanthu;
				index_sum = sum[lanthu];
			}
		}
		return index;
	}
	
	static int NewStep2()
	{
		int current_flag1=0;
		int current_flag2=0;
		//cout << current_flag<< endl;
		int count1 = 0;
		int count2 = 0;
		int x_check;
		int y_check;
		int x_new =0;
		int y_new =0;
		int sum[] = {0,0,0,0,0,0,0};


		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			x_new = lanthu;
			y_new=-1;
			for(int i=0;i<MAX_ROW;i++)
			{
				if(tableArray[i][x_new].value ==-1)
					y_new = i;
				else
					break;
			}
			if(y_new!=-1)
			for(int i =0;i<4;i++)
			{
				
				for(int j =1;j<5;j++)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==1)
						current_flag1= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag1)
						break;
					count1++;			
				}
				for(int j =-1;j>-5;j--)
				{
					x_check = x_new+j*X_V[i];
					y_check = y_new+j*Y_V[i];
					if(x_check<0 || y_check<0 || x_check>=MAX_COL || y_check >=MAX_ROW || tableArray[y_check][x_check].value ==-1)
						break;
					if(j==-1)
						current_flag2= tableArray[y_check][x_check].value;
					if(tableArray[y_check][x_check].value!=current_flag2)
						break;
					count2++;			
				}
				sum[lanthu]+=count1+count2 + Math.abs(count1-count2);
				
				if(count1+count2+1>=4)
					return lanthu;
				count1 = count2 = 0;
			}
		}

		int index=0;
		int index_sum=sum[0];
		for(int lanthu=0;lanthu<MAX_COL;lanthu++)
		{
			if(index_sum<sum[lanthu])
			{
				index = lanthu;
				index_sum = sum[lanthu];
			}
		}
		return index;
	}
	
}

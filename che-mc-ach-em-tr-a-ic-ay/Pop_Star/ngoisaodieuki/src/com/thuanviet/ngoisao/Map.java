package com.thuanviet.ngoisao;

import java.util.ArrayList;
import java.util.Random;

import com.thuanviet.ngoisao.actor.DiamondActor;
import com.thuanviet.ngoisao.actor.EffectActor;
import com.thuanviet.ngoisao.state.StateGameplay;
import com.thuanviet.ngoisao.state.StateWinLose;

import android.graphics.Canvas;
import android.graphics.Point;
import android.view.MotionEvent;

public class Map
{
	public final static int MAX_COL = 10;
	public final static int MAX_ROW = 10;
	public final static int MAX_ITEM = 4;
	public static int ITEM_WIDTH = 60;
	public static int ITEM_HEIGHT = 60;
	public static Random random = new Random();
	public static DiamondActor[][] tableArray = new DiamondActor[MAX_ROW][MAX_COL];
	public static DiamondActor[][] TemptableArray = new DiamondActor[MAX_ROW][MAX_COL];
	public static ArrayList<EffectActor> listAddPoitEffect = new ArrayList<EffectActor>();
	public static ArrayList<Point> listStackEffectLastGame = new ArrayList<Point>();
	// align
	public static int BEGIN_X = 60;
	public static int BEGIN_Y = 60;
	//state 
	public final static int STATE_IDE = 0;
	public final static int STATE_DROP = 1;
	public final static int STATE_WAITING_COMPLETED = 2;
	public final static int STATE_WAIT_DETROY = 3;
	public final static int STATE_DETROY = 4;
	public static int mTopScore = 0; 
	public static int score = 0;
	public static int effectscore = 0;
	public static int effectScore_X = 0;
	public static int effectScore_Y = 0;
	public static int stateInGamePlay = 0;
	public static long timerInGame = 0;
	
	public static long countCreateSpeial = 0;
	public static long MAX_TIMER = 60000;
	
	public static int stateGame = 0;//0 = waiting begin game;1 =play game;2 waiting Finish;
	public static String strEffect = "0";//0 = waiting begin game;1 =play game;2 waiting Finish;
	public static int timeEffect = 0;//0 = waiting begin game;1 =play game;2 waiting Finish;
	public static DiamondActor effectActorRow = new DiamondActor();
	public static DiamondActor effectActorCol = new DiamondActor();
	public static boolean isSpecialType = false;
	public static final int scoreLevel[] = {1000,2000,3000,3500,4000,4500,5000,5500,6000,6500,7000,7500,8000,8500,9000,10000};
	public static void init()
	{

		DiamondActor.sprite = StateGameplay.spriteFruit;
		ITEM_WIDTH = StateGameplay.spriteFruit.getFrameWidth(0);
		ITEM_HEIGHT = StateGameplay.spriteFruit.getFrameHeight(0);
		DiamondActor.speedY = ITEM_HEIGHT/2;
		DiamondActor.speedX = ITEM_HEIGHT/5;		
		BEGIN_X = (PopStar.SCREEN_WIDTH - MAX_COL * ITEM_WIDTH) / 2;
		BEGIN_Y = (int) (210 * StateGameplay.SCREEN_HEIGHT * 1.0f / 1280);
		//BEGIN_Y = (Diamond.SCREEN_HEIGHT - MAX_ROW * ITEM_HEIGHT) / 2;
		for (int i = 0; i < MAX_ROW; i++)
			for (int j = 0; j < MAX_COL; j++) {
				int tempValue = random.nextInt(MAX_ITEM);				
				tableArray[i][j] = new DiamondActor(tempValue, i, j, BEGIN_X + j * ITEM_WIDTH, (i) * ITEM_HEIGHT - (MAX_ROW + j) * ITEM_HEIGHT, BEGIN_X + j * ITEM_WIDTH, BEGIN_Y + i * ITEM_HEIGHT, DiamondActor.STATE_IDE);
				tableArray[i][j].state = DiamondActor.STATE_DROP;
				TemptableArray[i][j] = new DiamondActor();
			}
		stateInGamePlay = STATE_DROP;
		effectScore_X = 0;
		effectscore = 0;
		effectScore_Y = -100;
		score = 0;
		timerInGame = 0;
		mTopScore = 0;
		stateGame = 0;
		countCreateSpeial = 0;
	
		SoundManager.playSound(SoundManager.SOUND_START, 1);
		listAddPoitEffect = new ArrayList<EffectActor>();
	}

	public static void DrawGame(Canvas c)
	{

		for (int i = 0; i < MAX_ROW; i++) {
			for (int j = 0; j < MAX_COL; j++) {
				//	if((i+j)%2 == 0)
				//		Diamond.mainPaint.setARGB(100, 0, 0, 0);
				//	else				
				tableArray[i][j].paint(c);
			}
		}
		//draw effect Point add
		for(int i =  0;i<listAddPoitEffect.size();i++)
		{
			listAddPoitEffect.get(i).paint(c);
		}
		switch (stateInGamePlay) 
		{
		case STATE_IDE:
			if(timeEffect++ < 3){				
				//c.drawText(strEffect, effectScore_X, effectScore_Y, StateGameplay.android_FontBigEffect);
				c.drawText(strEffect, effectScore_X, effectScore_Y, StateGameplay.android_FontSmall);
				//StateGameplay.fontbig_White.drawString(c, strEffect, effectScore_X, effectScore_Y, BitmapFont.ALIGN_CENTER);
				effectScore_Y -= 2;
			}
			break;
		case STATE_DROP:
			effectActorRow.sprite.drawAnim(c, effectActorRow);
			effectActorCol.sprite.drawAnim(c, effectActorCol);

			//c.drawText(strEffect, effectScore_X, effectScore_Y, StateGameplay.android_FontBigEffect);
			c.drawText(strEffect, effectScore_X, effectScore_Y, StateGameplay.android_FontSmall);
			//StateGameplay.fontbig_White.drawString(c,strEffect, effectScore_X, effectScore_Y, BitmapFont.ALIGN_CENTER);
			effectScore_Y -= 2;
			break;
		case STATE_WAITING_COMPLETED: 
		
			break;
		}
	}

	public static void Update() 
	{ 
		// MAX_COL
		if (stateGame == 1)//dang play game
			Map.timerInGame += GameThread.timeCurrent - GameThread.timePrev;
		
		
		//update effect
			for(int i =  0;i<listAddPoitEffect.size();i++)
			{
				listAddPoitEffect.get(i).update();
				if(!listAddPoitEffect.get(i).isEffect)
				{
					listAddPoitEffect.remove(i);
					i--;
				}
			}
		switch (stateInGamePlay)
		{
		case STATE_IDE:
			if (GameLib.m_currentNumPointer > 0) {
				if (GameLib.arraytouchState[0] == MotionEvent.ACTION_UP) {
					if ((GameLib.arraytouchPosX[0] - BEGIN_X) >= 0 && (GameLib.arraytouchPosY[0] - BEGIN_Y) >= 0) {
						int cols = (GameLib.arraytouchPosX[0] - BEGIN_X) / ITEM_WIDTH;
						int rows = (GameLib.arraytouchPosY[0] - BEGIN_Y) / ITEM_HEIGHT;
						BreakBlock(rows, cols,2);
					}
				}
			}
			break;
		case STATE_DROP:
			if(timeEffect++ < 8)
				break;
			if (GameLib.m_currentNumPointer > 0) {
				if (GameLib.arraytouchState[0] == MotionEvent.ACTION_UP) {
					if ((GameLib.arraytouchPosX[0] - BEGIN_X) >= 0 && (GameLib.arraytouchPosY[0] - BEGIN_Y) >= 0) {
						int cols = (GameLib.arraytouchPosX[0] - BEGIN_X) / ITEM_WIDTH;
						int rows = (GameLib.arraytouchPosY[0] - BEGIN_Y) / ITEM_HEIGHT;
						BreakBlock(rows, cols,2);
					}
				}
			}
			//if(timeEffect++ < 5)
			//	break;
			boolean completeState = true;			
			for (int i = 0; i < MAX_ROW; i++)
				for (int j = 0; j < MAX_COL; j++) {
					tableArray[i][j].update();
					if (tableArray[i][j].state != DiamondActor.STATE_IDE) {
						completeState = false;						
						//	break;
					}
				}
			if (completeState) {
				stateInGamePlay = STATE_IDE;
				if(!checkCanBreakAnyBlock(2))
				{
					stateInGamePlay =	STATE_WAITING_COMPLETED;
					listStackEffectLastGame.clear();
					for (int i = 0; i < MAX_ROW; i++)
						for (int j = 0; j < MAX_COL; j++) { 
							if(tableArray[i][j].value >= 0) {//here
								listStackEffectLastGame.add(new Point(i, j));
									
							}
						}
				}
				if (stateGame == 0) {
					timerInGame = 0;
					stateGame++;
				}
			}
			
			break;
		case STATE_WAITING_COMPLETED:
			if(listStackEffectLastGame.size() == 0)// && StateGameplay.mCurrentState == StateGameplay.STATE_GAMEPLAY)
			{
				if(score >= scoreLevel[StateGameplay.mcurrentlevel])
					StateWinLose.isWin = true;
				else
					StateWinLose.isWin = false;
				StateGameplay.changeState(StateGameplay.STATE_WINLOSE);	
				break;
			}else
			{
				if((timeEffect++)%3 == 1)
				{
					int i = listStackEffectLastGame.get(0).x;
					int j = listStackEffectLastGame.get(0).y;
					listStackEffectLastGame.remove(0);
					DiamondActor.sprite.setAnim(tableArray[i][j], tableArray[i][j].value, tableArray[i][j].currentX, tableArray[i][j].currentY, false, false);
					tableArray[i][j].value = -1;
					
				}
			}
			break;
		}

	}

	
	

	public static void explosionAll()
	{
		stateInGamePlay = STATE_DROP;
		for (int col = 0; col < MAX_COL; col++) {
			int cellSpace = 0;			
			for (int row = MAX_ROW - 1; row >= 0; row--) {
				if (tableArray[row][col].value == -1) {//here				
						//DiamondActor.sprite.setAnim(tableArray[row][col], tableArray[row][col].value, tableArray[row][col].currentX, tableArray[row][col].currentY, false, false);
						
					cellSpace++;
				}
				if (cellSpace > 0) {
					if (tableArray[row][col].value >= 0) {
						if (row + cellSpace < MAX_ROW) {
							tableArray[row + cellSpace][col].state = DiamondActor.STATE_DROP;
							tableArray[row + cellSpace][col].value = tableArray[row][col].value;
							tableArray[row + cellSpace][col].targetY = BEGIN_Y + (row + cellSpace) * ITEM_HEIGHT;// tableArray[row + cellSpace][col].currentY;
							tableArray[row + cellSpace][col].currentY = tableArray[row][col].currentY;
							tableArray[row + cellSpace][col].specialType = tableArray[row][col].specialType;							
						}
						tableArray[row][col].value = -1;
					}
				}
			}
		}
		for (int col = 0; col < MAX_COL; col++)				
		{
			if( tableArray[MAX_ROW -1][col].value < 0)
			{
				int countspace = 0;
				for (int i = col; i < MAX_COL; i++)
				{
					if( tableArray[MAX_ROW - 1][i].value < 0)
						countspace++;
					else
					{
						break;
					}
				}
				for (int j = col; j < MAX_COL; j++)
				{
					for (int i = 0; i < MAX_ROW; i++)					
					{
						if (j + countspace < MAX_ROW) {								
							tableArray[i][j].value = tableArray[i][j +countspace].value;
							//tableArray[i][j].targetY = BEGIN_Y + (i + cellSpace) * ITEM_HEIGHT;
							tableArray[i][j].targetX = BEGIN_X + (j) * ITEM_WIDTH;
							tableArray[i][j].currentX = tableArray[i][j + countspace].currentX;
							tableArray[i][j].specialType = tableArray[i][j+countspace].specialType;
							tableArray[i][j].state = DiamondActor.STATE_DROP;							
						}
						else
						{
							tableArray[i][j].value = -1;							
						}					
					}
				}
			
		}
	}
}
	public static void BreakBlock(int row, int col,int MAX_NUM)
	{	
		if(checkBlockBreak(row,col,2))
		{
			int countItemBreak = 0;
			for (int i = 0; i < listStackEffectLastGame.size(); i++) {
				int temp_row = listStackEffectLastGame.get(i).x;
				int temp_col = listStackEffectLastGame.get(i).y;
				DiamondActor.sprite.setAnim(tableArray[temp_row][temp_col], tableArray[temp_row][temp_col].value, tableArray[temp_row][temp_col].currentX, tableArray[temp_row][temp_col].currentY, false, false);
				EffectActor actor = new EffectActor(tableArray[temp_row][temp_col].currentX, tableArray[temp_row][temp_col].currentY,tableArray[temp_row][temp_col].value);
				listAddPoitEffect.add(actor);
				tableArray[temp_row][temp_col].value = -1;
				countItemBreak++;
			}
			effectscore = countItemBreak*5*countItemBreak;
			score += countItemBreak*5*countItemBreak;
			timeEffect = 0;
			strEffect = "" + effectscore;				
			effectScore_X = BEGIN_X + col * ITEM_WIDTH + ITEM_WIDTH / 2;
			effectScore_Y = BEGIN_Y + row * ITEM_HEIGHT + ITEM_HEIGHT / 2;
			//align text effect
			if(effectScore_X <2*ITEM_WIDTH)
				effectScore_X = 2*ITEM_WIDTH;
			else if(effectScore_X > (StateGameplay.SCREEN_WIDTH- 2 *ITEM_WIDTH))
				effectScore_X = StateGameplay.SCREEN_WIDTH- 2 *ITEM_WIDTH;
			//align text effect			
			explosionAll();		
			
				
				
			if(listStackEffectLastGame.size() < 5)
				SoundManager.playSound(SoundManager.SOUND_COMBOL_1, 1);
			else if(listStackEffectLastGame.size()<8)
				SoundManager.playSound(SoundManager.SOUND_COMBOL_2, 1);
			else if(listStackEffectLastGame.size()<11)
				SoundManager.playSound(SoundManager.SOUND_COMBOL_3, 1);
			else 
				SoundManager.playSound(SoundManager.SOUND_COMBOL_4, 1);
		}
		else
		{
			SoundManager.playSound(SoundManager.SOUND_CLICK_CARD, 1);
		}
		
	}
	
	public static boolean checkCanBreakAnyBlock(int MAX_NUM)
	{
		for (int i = 0; i < MAX_ROW; i++)
			for (int j = 0; j < MAX_COL; j++) {
				if(tableArray[i][j].value >=0)
					if(checkBlockBreak(i,j,2))
						return true;				
			}
		return false;
	}
	public static boolean checkBlockBreak(int row, int col,int MAX_NUM)
	{
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
			return false;
		for (int i = 0; i < MAX_ROW; i++)
			for (int j = 0; j < MAX_COL; j++) {
				if(tableArray[i][j].value ==-1)
					tableArray[i][j].value = -2;				
				TemptableArray[i][j].value = tableArray[i][j].value;
				TemptableArray[i][j].state = tableArray[i][j].state;				
			}

		listStackEffectLastGame.removeAll(listStackEffectLastGame);
		listStackEffectLastGame.clear();
		listStackEffectLastGame.add(new Point(row, col));
		int value = tableArray[row][col].value;
		TemptableArray[row][col].value = -1;
		if (value < 0)
			return false;

		int temp_row;
		int temp_col;
		for (int i = 0; i < listStackEffectLastGame.size(); i++) {
			// left
			temp_row = listStackEffectLastGame.get(i).x - 1;
			temp_col = listStackEffectLastGame.get(i).y;
			
			if (temp_row >= 0) {
				if (TemptableArray[temp_row][temp_col].state == DiamondActor.STATE_IDE && TemptableArray[temp_row][temp_col].value == value) {
					listStackEffectLastGame.add(new Point(temp_row, temp_col));
					
					TemptableArray[temp_row][temp_col].value = -1;
					

				}
			}
			// right
			temp_row = listStackEffectLastGame.get(i).x + 1;
			temp_col = listStackEffectLastGame.get(i).y;
			if (temp_row < MAX_ROW) {
				if (TemptableArray[temp_row][temp_col].state == DiamondActor.STATE_IDE && TemptableArray[temp_row][temp_col].value == value) {
					listStackEffectLastGame.add(new Point(temp_row, temp_col));
					TemptableArray[temp_row][temp_col].value = -1;
				}
			}
			// top
			temp_row = listStackEffectLastGame.get(i).x;
			temp_col = listStackEffectLastGame.get(i).y - 1;
			if (temp_col >= 0) {
				if (TemptableArray[temp_row][temp_col].state == DiamondActor.STATE_IDE && TemptableArray[temp_row][temp_col].value == value) {
					listStackEffectLastGame.add(new Point(temp_row, temp_col));
					TemptableArray[temp_row][temp_col].value = -1;
				}
			}
			// bottom
			temp_row = listStackEffectLastGame.get(i).x;
			temp_col = listStackEffectLastGame.get(i).y + 1;
			if (temp_col < MAX_COL) {
				if (TemptableArray[temp_row][temp_col].value == value) {
					listStackEffectLastGame.add(new Point(temp_row, temp_col));
					TemptableArray[temp_row][temp_col].value = -1;
				}
			}
		}
		if (listStackEffectLastGame.size() >= MAX_NUM) {			
			return true;
			
			

			//align text effect			
		}
		return false;
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
}

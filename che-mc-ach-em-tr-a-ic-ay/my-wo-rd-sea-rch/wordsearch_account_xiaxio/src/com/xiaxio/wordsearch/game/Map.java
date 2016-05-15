package com.xiaxio.wordsearch.game;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.Random;

import com.google.ads.w;
import com.xiaxio.wordsearch.GameLib;
import com.xiaxio.wordsearch.SoundManager;
import com.xiaxio.wordsearch.WordSearchActivity;
import com.xiaxio.wordsearch.state.StateGameplay;

import android.content.res.AssetManager; 
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Align;
import android.graphics.Paint.Style;
import android.graphics.Rect;
import android.graphics.Typeface;
import android.net.MailTo;
import android.util.Log;

public class Map{
	public static int GRID_ROW = 10;
	public static int GRID_COL = 10;
	public static int GRID_CELL_BEGIN_X  = (int)(0*WordSearchActivity.scaleX);
	public static int GRID_CELL_BEGIN_Y  = (int)(120*WordSearchActivity.scaleY);
	public static int GRID_CELL_WIDTH  =(int)(80*WordSearchActivity.scaleX);
	public static int GRID_CELL_HEIGHT  =(int)(80*WordSearchActivity.scaleY);
	public static WordSearch wordSearch = null;//new WordSearch(list, 12);
	public static Color textColor = new Color();	
	public static boolean isEnableDrap = false;
	public static int DrapBeginRow = -1;
	public static int DrapBeginCol = -1;
	public static int DrapEndRow = -1;
	public static int DrapEndCol = -1;
	public static Paint paintLine = new Paint();
	static int linesize = (int)(50*WordSearchActivity.scaleY);
	
	public static int mMode = 0;
	public static int mStateScole = 0;
	public static int mAllScole = 0;
	
	//textColor.Color.rgb(148,105,49);
	public static StringBuilder ReadTextFile(String path, boolean isUTF8File) {
		byte[] buffer = null;
		AssetManager am = WordSearchActivity.mainGameLib.getAssets();
		InputStream is;
		BufferedReader reader ;
		  StringBuilder wordList = new StringBuilder();
		try {
			
				is = am.open(path);
				int size = is.available(); 
		        BufferedReader in = new BufferedReader(new    InputStreamReader(is));
		        String str;
		      
		        while ((str = in.readLine()) != null) {
		            wordList.append(str + " ");
		        }
		        in.close();
		   
		

		} catch (IOException e) {
			e.printStackTrace();

		}
		buffer = null;
		return wordList;
	}
	public static void LoadData()
	{
		
		//String s= GameLib.readTextFile("data/wordlist.txt", true);
		StringBuilder wordList= ReadTextFile("data/dictionary", true);//big text file
		wordList.deleteCharAt(wordList.length()-1);
		
		WordSearch.AllWordIndirectory = wordList.toString().split(" ");	
		//w.getPuzzle();
		//end test
	}
	public static void initGameLevel()
	{
		mStateScole = 0;
		paintLine.setStyle(Style.FILL_AND_STROKE);
		paintLine.setColor(Color.rgb(255, 255,255));
		paintLine.setAlpha(200);		
		linesize = (int)(65*WordSearchActivity.scaleY);
		paintLine.setStrokeWidth(linesize);
		//init grid
		Random random = new Random();		
		int count = 0;		
		switch (mMode) {
		case 0://easy
			count = 20;
			break;
		case 1://Normal
			count = 50;
			break;
		case 2://Hard
			count = 100;
			break;
		}
		String[] listtemp = new String[count];
		for(int i=0;i< count;i++)
		{
			int index = random.nextInt(WordSearch.AllWordIndirectory.length);
			listtemp[i] = WordSearch.AllWordIndirectory[index];
		}
		WordSearch w = new WordSearch(listtemp, 10);
		
	}
	public static void drawRectWordLine(int col, int rol, int col1,int row1)
	{
		int x = col*GRID_CELL_WIDTH + GRID_CELL_BEGIN_X + GRID_CELL_WIDTH/2;
		int y = rol*GRID_CELL_HEIGHT + GRID_CELL_BEGIN_Y + GRID_CELL_HEIGHT/2;
		int	x1 = col1*GRID_CELL_WIDTH + GRID_CELL_BEGIN_X + GRID_CELL_WIDTH/2;
		int	y1 = row1*GRID_CELL_HEIGHT + GRID_CELL_BEGIN_Y + GRID_CELL_HEIGHT/2;
		int ofsetx = 0;
		int ofsety = 0;
		if(x == x1)
		{
			if(y >y1)
				ofsety = linesize/2;
			else
				ofsety = -linesize/2;
		}else if(y == y1)
		{
			if(x >x1)
				ofsetx = linesize/2;
			else
				ofsetx = -linesize/2;
		}else if(x>x1&& y>y1)
		{
			ofsetx = linesize/2;
			ofsety = linesize/2;
		}
		else  if(x<x1&& y<y1)
		{
			ofsetx = -linesize/2;
			ofsety = -linesize/2;
		}
		else  if(x<x1&& y>y1)
		{
			ofsetx = -linesize/2;
			ofsety = linesize/2;
		}
		else
		{
			ofsetx = linesize/2;
			ofsety = -linesize/2;
		}
		
		WordSearchActivity.mainCanvas.drawLine(x+ ofsetx, y + ofsety, x1- ofsetx,y1 - ofsety,paintLine);
	}
	
	public static void DrawListWord(Canvas c) 
	{
		int BeginY[] ={(int)(990*WordSearchActivity.scaleY),
						(int)(1030*WordSearchActivity.scaleY),
						(int)(1070*WordSearchActivity.scaleY),
						(int)(1110*WordSearchActivity.scaleY),
						(int)(1150*WordSearchActivity.scaleY)};
		int BeginX[] ={(int)(30*WordSearchActivity.scaleY), 
						WordSearchActivity.SCREEN_WIDTH/3 +(int)(30*WordSearchActivity.scaleY),
						WordSearchActivity.SCREEN_WIDTH*2/3 +(int)(30*WordSearchActivity.scaleY)};
		StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 1,0,(int)(940*WordSearchActivity.scaleY)); 
		
		WordSearchActivity.android_FontSmall.setTextAlign(Align.LEFT);
		for(int i = 0;i<wordSearch.words.size();i++){
			//wordSearch.words	
			int col = i%BeginX.length;
			int row = i/BeginX.length;
			if(StateGameplay.countFrameEffectWhenWin <0)
			{
				if(wordSearch.iswordsUnlock.get(i).booleanValue())
				{
				
					WordSearchActivity.android_FontSmall.setColor(Color.WHITE);
					WordSearchActivity.android_FontSmall.setAlpha(100);
				}
				else
				{				
					WordSearchActivity.android_FontSmall.setColor(Color.rgb(236,147,75));
					WordSearchActivity.android_FontSmall.setAlpha(255);
				}
			}
			else
			{
				if(StateGameplay.countFrameEffectWhenWin%6 >= 3)
					WordSearchActivity.android_FontSmall.setColor(Color.rgb(0,255,0));
				else
					WordSearchActivity.android_FontSmall.setColor(Color.rgb(0,0,255));
			}
			c.drawText("" + wordSearch.words.get(i),BeginX[col],BeginY[row], WordSearchActivity.android_FontSmall);
		
		}
		WordSearchActivity.android_FontSmall.setTextAlign(Align.CENTER);
	}
	
	public static void DrawGame(Canvas c)
	{	
		WordSearchActivity.mainPaint.setStyle(Style.STROKE);
		WordSearchActivity.mainPaint.setColor(Color.WHITE);
		WordSearchActivity.mainPaint.setStrokeWidth(2);
		WordSearchActivity.android_FontNormal.setColor(Color.WHITE);
		WordSearchActivity.mainCanvas.drawRect(GRID_CELL_BEGIN_X + 1, GRID_CELL_BEGIN_Y, GRID_CELL_BEGIN_X + GRID_COL*GRID_CELL_WIDTH - 1, GRID_CELL_BEGIN_Y+ GRID_ROW*GRID_CELL_HEIGHT,WordSearchActivity.mainPaint);
		if(isEnableDrap)
		{
			int x = DrapBeginCol*GRID_CELL_WIDTH + GRID_CELL_BEGIN_X + GRID_CELL_WIDTH/2;
			int y =DrapBeginRow*GRID_CELL_HEIGHT + GRID_CELL_BEGIN_Y + GRID_CELL_HEIGHT/2;
			int x1 = 0,y1 =0;
			paintLine.setColor(Color.rgb(126,198,219));
			paintLine.setAlpha(200);
			if(DrapBeginCol == DrapEndCol && DrapBeginRow == DrapEndRow ){
				WordSearchActivity.mainCanvas.drawPoint(x, y, paintLine);
				//WordSearchActivity.mainCanvas.drawCircle(x, y, 10*WordSearchActivity.scaleY, paintLine);
			}else
			{	
				drawRectWordLine(DrapBeginCol,DrapBeginRow,DrapEndCol,DrapEndRow);				
			}
		}				
		//WordSearchActivity.android_FontNormal.setTypeface(Typeface.DEFAULT_BOLD);
		WordSearchActivity.android_FontNormal.setStyle(Paint.Style.STROKE);
		WordSearchActivity.android_FontNormal.setColor(Color.rgb(238,127,175));	
		//WordSearchActivity.android_FontNormal.setStrokeWidth(2);
		
		Paint temp = new Paint(WordSearchActivity.android_FontNormal);		
		temp.setColor(Color.rgb(0,0,0));
		temp.setStrokeWidth( 1+ (int)(5*WordSearchActivity.scaleX));		
		Rect textBounds = new Rect();		
		WordSearchActivity.android_FontNormal.getTextBounds("MaigWJKLI", 0, "Maig".length(), textBounds);
		for(int i= 0;i<wordSearch.sizeTable;i++)
			for(int j= 0;j<wordSearch.sizeTable;j++)
			{
				int x=  GRID_CELL_BEGIN_X + i*GRID_CELL_WIDTH+ GRID_CELL_WIDTH/2;
				int y = textBounds.height()/2 + GRID_CELL_BEGIN_Y +j*GRID_CELL_HEIGHT + GRID_CELL_HEIGHT/2;				
				c.drawText("" + WordSearch.dataF[i][j],x,y, temp);
				c.drawText("" + WordSearch.dataF[i][j],x,y, WordSearchActivity.android_FontNormal);
			}
		WordSearchActivity.android_FontNormal.setColor(Color.rgb(148,105,49));
		DrawListWord(c);
		//test
		//WordSearchActivity.android_FontNormal.setColor(Color.BLACK); 		
		//WordSearchActivity.mainPaint.setStyle(Style.STROKE);
		//for(int i= 0;i<wordSearch.sizeTable;i++)
		//	for(int j= 0;j<wordSearch.sizeTable;j++)
		//	{			
			
			//	WordSearchActivity.mainCanvas.drawRect( GRID_CELL_BEGIN_X + i*GRID_CELL_WIDTH, GRID_CELL_BEGIN_Y +j*GRID_CELL_HEIGHT,  GRID_CELL_BEGIN_X + (i+1)*GRID_CELL_WIDTH, GRID_CELL_BEGIN_Y +(j+1)*GRID_CELL_HEIGHT, WordSearchActivity.mainPaint);
		//		WordSearchActivity.mainPaint.setColor(Color.WHITE);
	//			int x=  GRID_CELL_BEGIN_X + i*GRID_CELL_WIDTH+ GRID_CELL_WIDTH/2;
		//		int y = textBounds.height()/2 + GRID_CELL_BEGIN_Y +j*GRID_CELL_HEIGHT + GRID_CELL_HEIGHT/2;
			//	c.drawText("" + WordSearch.data[i][j],x,y, WordSearchActivity.android_FontNormal);
		//	}
		WordSearchActivity.android_FontNormal.setColor(Color.rgb(148,105,49));	
			
		//draw rect word
		for( int j =0;j<WordSearch.rectWords.size();j++)
		{
		//	Rect a = new Rect(left, top, right, bottom)
			Rect rect = WordSearch.rectWords.get(j);
			drawRectWordLine(rect.left,rect.top,rect.right,rect.bottom);	
			
			
		}
		
	}

	public static void Update()
	{
		if(GameLib.isTouchPressScreen())
		{
			int col = (GameLib.arraytouchPosX[0] - GRID_CELL_BEGIN_X)/GRID_CELL_WIDTH;
			int row = (GameLib.arraytouchPosY[0] - GRID_CELL_BEGIN_Y)/GRID_CELL_HEIGHT;
			if(col >=0 && col < GRID_COL && row >=0 && row < GRID_ROW )
			{
				isEnableDrap = true;
				DrapBeginCol = col;
				DrapBeginRow = row;
				DrapEndCol = col;
				DrapEndRow = row;
				
			}
		}else if(GameLib.isTouchReleaseScreen())
		{
			isEnableDrap = false;
			if(CheckWin())
			{
				
				StateGameplay.countFrameEffectWhenWin = 35;
			}
		}else  if(GameLib.isTouchDrapInRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT))
		{
			
			if(isEnableDrap)
			{
					int col = (GameLib.arraytouchPosX[0] - GRID_CELL_BEGIN_X)/GRID_CELL_WIDTH;
					int row = (GameLib.arraytouchPosY[0] - GRID_CELL_BEGIN_Y)/GRID_CELL_HEIGHT;
					if(col >=0 && col < GRID_COL && row >=0 && row < GRID_ROW )
					{
						if((Math.abs(col - DrapBeginCol) == Math.abs(row - DrapBeginRow))
								||col == DrapBeginCol
								||row == DrapBeginRow)
						{
							DrapEndCol = col;
							DrapEndRow = row;
						}
					}
			}
			else
			{
				int col = (GameLib.arraytouchPosX[0] - GRID_CELL_BEGIN_X)/GRID_CELL_WIDTH;
				int row = (GameLib.arraytouchPosY[0] - GRID_CELL_BEGIN_Y)/GRID_CELL_HEIGHT;
				if(col >=0 && col < GRID_COL && row >=0 && row < GRID_ROW )
				{
					isEnableDrap = true;
					DrapBeginCol = col;
					DrapBeginRow = row;
					DrapEndCol = col;
					DrapEndRow = row;
					
				}
			}
		}
		CheckWordUnblock();	
		}

	public static void CheckWordUnblock()
	{
			
		if(isEnableDrap)
		{
			if(DrapBeginCol == DrapEndCol && DrapBeginRow == DrapEndRow)
				return;	
			String strDrap ="";
			String strword ="";
			strDrap = GetTextDrap(DrapBeginCol,DrapBeginRow,DrapEndCol,DrapEndRow);
			Log.d("strDrap", strDrap);
			for(int i = 0;i< WordSearch.words.size();i++)
			{
				if(!wordSearch.iswordsUnlock.get(i).booleanValue())
				{	
					strword = wordSearch.words.get(i);
					if(strDrap.compareTo(strword) ==0 && strword.length() == strDrap.length())
					{
						wordSearch.iswordsUnlock.set(i, new Boolean(true));
						//add score
						addScore(mMode,strword);
						WordSearch.rectWords.add(new Rect(DrapBeginCol,DrapBeginRow,DrapEndCol,DrapEndRow));
						SoundManager.playSound(SoundManager.SOUND_PAIR, 1);
					}
				}
			}
		}
	}
	
	public static void addScore(int mode, String word)
	{
		int temp = word.length()* 21;
		temp =(int)(temp*1.5*(mode+1));
		mStateScole += temp;
		
	}
	
	public static boolean CheckWin()
	{
		boolean isWIn = true;
		for(int i = 0;i< WordSearch.words.size();i++)
		{
			if(!WordSearch.iswordsUnlock.get(i).booleanValue())
			{	
				isWIn = false;
				break;
			}
		}
		return isWIn;
	}
	
	public static String GetTextDrap(int begincol,int beginrow,int endcol,int endrow)
	{
		int stepcol = endcol - begincol;
		int steprow = endrow - beginrow;
		int maxcount = Math.abs(stepcol)>Math.abs(steprow)?Math.abs(stepcol):Math.abs(steprow);
		if(stepcol!=0)
			stepcol = stepcol/Math.abs(stepcol);
		if(steprow!=0)
		steprow = steprow/Math.abs(steprow);
		String a = "";
		for(int i=0;i<=maxcount;i++)
		{
			a = a+WordSearch.dataF[begincol + i*stepcol][beginrow + i*steprow];
		}
		return a;
	}
}

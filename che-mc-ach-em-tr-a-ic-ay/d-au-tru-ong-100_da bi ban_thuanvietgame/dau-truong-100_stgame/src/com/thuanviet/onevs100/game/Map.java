package com.thuanviet.onevs100.game;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Random;

import resolution.DEF;

import com.google.ads.w;
import com.niusounds.sqlite.SQLiteDAO;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.GameThread;
import com.thuanviet.onevs100.SoundManager;
import com.thuanviet.onevs100.state.StateGameplay;

import android.content.res.AssetManager; 
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
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
	public static int mAllScole = 0;
	public static ArrayList<Question> listQuestion = new ArrayList<Question>();
	public static int curentQuestion = 0;
	public static int curentQuestionID = 0;
	public static SQLiteDAO dao;
	public static int subState = 0;
	public static int selectAnswer = 0;
	public static int countNumberPerson = 0;
	public static int countNumberPersonFail = 0;
	//
	public static int countAnser[] = {0,0,0};
	

	//
	public static boolean isUsingshelp[] = {false,false,false};
	public static boolean isUsingshelpCanUse[] = {true,true,true};
	public static boolean isUsingHelpInThisQuest = false;
	public static int indexUsingHelp = 0;
	
	//
	static int MENU_ANSWER_H = 0;// StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
	static int MENU_ANSWER_W = 0;//StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
	
	static int MENU_HELP_H = 0;// StateGameplay.spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_NORMAL);
	static int MENU_HELP_W = 0;//StateGameplay.spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_NORMAL);
	public static void LoadData()
	{
		// instance database
		DataBaseHelper db1 = new DataBaseHelper(DauTruong100.context);		
		try {
			db1.createDataBase();
		} catch (IOException e) {
				e.printStackTrace();
		}
		dao = SQLiteDAO.getInstance(DauTruong100.context, DataBaseHelper.DB_NAME, Question.class);
		//-----------------------
		
		String myPath = DataBaseHelper.DB_PATH + DataBaseHelper.DB_NAME;
		SQLiteDatabase DB = SQLiteDatabase.openDatabase(myPath, null, SQLiteDatabase.OPEN_READONLY);
        //Câu lệnh truy vấn các record
        Cursor dtContries = DB.rawQuery("SELECT LoaiCauHoi, CauHoi, A,B,C,DapAn  FROM DauTruong", null);
        
        
        //Trỏ về rocord đầu tiên
        dtContries.moveToFirst();
        
        //Dùng vòng lặp để truy xuất từng dòng
        for(int i=0; i< dtContries.getCount(); i++){
         //names.add(dtContries.getString(1)); //Chú ý: 1: ở đây là cột số 1 tức là cột "Name", vị trí được bắt đầu từ 0
        	Question question = new Question();
        	question.setQuestion(dtContries.getString(1));//cau hoi
        	question.setCasea(dtContries.getString(2));//cau A
        	question.setCaseb(dtContries.getString(3));//cau B
        	question.setCasec(dtContries.getString(4));//cau C
        	String temp = dtContries.getString(5);
        	if(temp.indexOf("A") >-1)
        		question.setTrueCase(0);//cau Dapan
        	if(temp.indexOf("B") >-1)
        		question.setTrueCase(1);//cau Dapan
        	if(temp.indexOf("C") >-1)
        		question.setTrueCase(2);//cau Dapan
        	Map.listQuestion.add(question);
        	
        	//Truy xuất tới dòng tiếp theo
         dtContries.moveToNext();
        }
		
        MENU_ANSWER_H = StateGameplay.spriteUi.getFrameHeight(6);
    	MENU_ANSWER_W = StateGameplay.spriteUi.getFrameWidth(6);
    	
    	MENU_HELP_H = StateGameplay.spriteUi.getFrameHeight(2);
    	MENU_HELP_W = StateGameplay.spriteUi.getFrameWidth(2);
		//-------------------------
        DB.close();
		
		
	
	}
	public static void initGameLevel()
	{	
		selectAnswer = -1;
		newQuestion();
		
	}
	
	
	
	public static void DrawGame(Canvas c)
	{	
		DauTruong100.mainPaint.setStyle(Style.STROKE);
		DauTruong100.mainPaint.setColor(Color.WHITE);
		DauTruong100.mainPaint.setStrokeWidth(2);
		DauTruong100.android_FontNormal.setColor(Color.WHITE);
	
		
	}

	public static void Update()
	{
		switch (subState) {
		case 0://loi chao
			if(StateGameplay.mTimerCount >6000)
			{
				StateGameplay.mTimerCount = 0;	
				subState++;
			}	
			break;
		case 1:
			if(StateGameplay.mTimerCount >1000)
			{
				StateGameplay.mTimerCount = 0;	
				subState++;
			}	
			break;
		case 2://loi chao			
			subState++;
			if(curentQuestion<10)
				SoundManager.playSound(SoundManager.SOUND_QUESTION_1 + curentQuestion, 1);
			else
				SoundManager.playSound(SoundManager.SOUND_QUESTION_NEXT, 1);
			SoundManager.playsoundLoop(1, true);
			StateGameplay.mTimerCount = 0;	
			break;
		case 3://
			Map.initGameLevel();
			isUsingHelpInThisQuest = false;
			subState++;
			break;
		case 4://dơi chon cau tra loi cua nguoi choi
			if(StateGameplay.isTouchReleaseInRect((int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
			{
				SoundManager.playSound(SoundManager.SOUND_ANSWER_A, 1);
				selectAnswer = 0;
				StateGameplay.mTimerCount = 0;
				subState++;
			}					
			else if(StateGameplay.isTouchReleaseInRect((int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
			{
				SoundManager.playSound(SoundManager.SOUND_ANSWER_B, 1);
				selectAnswer = 1;
				StateGameplay.mTimerCount = 0;
				subState++;
			}
			else if(StateGameplay.isTouchReleaseInRect((int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
			{
				SoundManager.playSound(SoundManager.SOUND_ANSWER_C, 1);
				selectAnswer = 2;
				StateGameplay.mTimerCount = 0;
				subState++;
			}
			
			//	public static boolean isUsingshelp[] = {false,false,false};
			//public static boolean isUsingshelpCanUse[] = {true,true,true};
			if(isUsingshelpCanUse[0] && !isUsingHelpInThisQuest)
			{
				if( StateGameplay.isTouchReleaseInRect((int)(20*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
				{
					isUsingshelpCanUse[0] = false;
					isUsingshelp[0] = true;
					isUsingHelpInThisQuest = true;
					indexUsingHelp = 0;
				}
			}
			if(isUsingshelpCanUse[1] && !isUsingHelpInThisQuest)
			{
				if( StateGameplay.isTouchReleaseInRect((int)(220*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
				{
					isUsingshelpCanUse[1] = false;
					isUsingshelp[1] = true;
					isUsingHelpInThisQuest = true;
					indexUsingHelp =1;
				}
			}
			if(isUsingshelpCanUse[2] && !isUsingHelpInThisQuest)
			{
				if( StateGameplay.isTouchReleaseInRect((int)(420*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
				{
					isUsingshelpCanUse[2] = false;
					isUsingshelp[2] = true;
					isUsingHelpInThisQuest = true;
					indexUsingHelp = 2;					
					selectAnswer = GetIndexOfMaxCount();
					StateGameplay.mTimerCount = 0;
					subState++;
				}
			}
			
			break;
		case 5://Kiem tra thang thua
			SoundManager.pausesoundLoop(1);
			if(StateGameplay.mTimerCount > 3000)
			{
				if(listQuestion.get(curentQuestionID).getTrueCase() == selectAnswer)
				{
					StateGameplay.mTimerCount = 0;
					subState++;
					SoundManager.playSound(SoundManager.SOUND_ANSWER_RIGHT_A + selectAnswer, 1);
				}
				else
				{
					StateGameplay.mTimerCount = 0;
					subState++;
					SoundManager.playSound(SoundManager.SOUND_ANSWER_WRONG_A + listQuestion.get(curentQuestionID).getTrueCase(), 1);
				}
			}
			break;
		
		case 6://loi chao
			if(StateGameplay.mTimerCount > 4500)
			{
				if(listQuestion.get(curentQuestionID).getTrueCase() == selectAnswer)
				{
					
					if(countNumberPerson == 100)
						SoundManager.playSound(SoundManager.SOUND_PERSOPN_FAILT_1, 1);
					else
						SoundManager.playSound(SoundManager.SOUND_PERSOPN_FAILT_2, 1);
					
					StateGameplay.mTimerCount = 0;
					countNumberPersonFail =0;
					subState++;					
				}
				else
				{
					SoundManager.playSound(SoundManager.SOUND_FAIL_ANSWER, 1);
					subState = 9;
					StateGameplay.mTimerCount = 0;
								
				}
			}
			break;
		case 7://kiêm sso nguoi tra loi
			if(countNumberPersonFail ==0 &&(StateGameplay.mTimerCount > 8000))
			{
				countNumberPerson = countAnser[selectAnswer];
			}
			if(StateGameplay.mTimerCount > 10000)
			{
				if(Map.countNumberPerson <=0)
					StateGameplay.changeState(StateGameplay.STATE_COMPLETELEVEL);
				else
				
					subState = 1;
			}
			break;			
		case 8://kiêm sso nguoi tra loi
			
			break;
		case 9://kiêm sso nguoi tra loi
			if(StateGameplay.mTimerCount > 3000)
			{
				StateGameplay.changeState(StateGameplay.STATE_COMPLETELEVEL);	
			}
				
			break;			
		default:
			break;
		}
	
	}
	
	public static void drawGamePlay(Canvas c) {
		//spriteUi.drawAFrame(WordSearchActivity.mainCanvas,0,0, (int)(20*scaleY));
		
		//	public static boolean isUsingshelp[] = {false,false,false};
		//public static boolean isUsingshelpCanUse[] = {true,true,true};
		if(isUsingshelpCanUse[0])
		{
			if( StateGameplay.isTouchDrapInRect((int)(20*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
			{	
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,3,(int)(20*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
			}
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,2,(int)(20*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
		}
		else
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,4,(int)(20*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
	
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,14,(int)(20*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
		//StateGameplay.mainCanvas.drawText("25%", (int)(100*StateGameplay.scaleX),(int)(100*StateGameplay.scaleY), StateGameplay.android_MenuFont);
		
		if(isUsingshelpCanUse[1])
		{
			if( StateGameplay.isTouchDrapInRect((int)(220*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
			
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,3,(int)(220*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,2,(int)(220*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));	
		}
		else
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,4,(int)(220*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
			
		StateGameplay.mainCanvas.drawText("50%", (int)(300*StateGameplay.scaleX),(int)(100*StateGameplay.scaleY), StateGameplay.android_MenuFont);
		
		if(isUsingshelpCanUse[2])
		{
			if( StateGameplay.isTouchDrapInRect((int)(420*StateGameplay.scaleX), 0, MENU_HELP_W, MENU_HELP_H))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,3,(int)(420*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,2,(int)(420*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
		}else
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,4,(int)(420*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,15,(int)(420*StateGameplay.scaleX), (int)(0*StateGameplay.scaleY));		
		
		//StateGameplay.mainCanvas.drawText("X2", (int)(500*StateGameplay.scaleX),(int)(100*StateGameplay.scaleY), StateGameplay.android_MenuFont);
		//
			if(isUsingHelpInThisQuest)			
			{
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,1, (int)(50*StateGameplay.scaleX), (int)(230*StateGameplay.scaleY));
				
				if(indexUsingHelp == 0 ||indexUsingHelp == 2) 
				{
					StateGameplay.mainCanvas.drawText("Câu A : " +countAnser[0] +" người trả lời", StateGameplay.SCREEN_WIDTH/2,(int)(280*StateGameplay.scaleY), StateGameplay.android_FontSmall);
					StateGameplay.mainCanvas.drawText("Câu B : " +countAnser[1] +" người trả lời", StateGameplay.SCREEN_WIDTH/2,(int)(340*StateGameplay.scaleY), StateGameplay.android_FontSmall);
					StateGameplay.mainCanvas.drawText("Câu C : " +countAnser[2] +" người trả lời", StateGameplay.SCREEN_WIDTH/2,(int)(400*StateGameplay.scaleY), StateGameplay.android_FontSmall);
				}
				if(indexUsingHelp == 1)
				{
					int temp1 = listQuestion.get(curentQuestionID).getTrueCase();
					int temp2 = 0;
					if(temp1 == 0 )
						temp2 = 1;
					
					String s1 = "";
					String s2 = "";
					if(temp1 ==0)
						s1= "A" ;
					else if(temp1 ==1)
						s1 ="B";
					else
						s1 ="C";
					
					if(temp2 ==0)
						s2= "A" ;
					else if(temp2 ==1)
						s2 ="B";
					else
						s2 ="C";					
					
					StateGameplay.mainCanvas.drawText("Câu "+s1 +" Hoặc " + s2 +" Có một câu đúng", StateGameplay.SCREEN_WIDTH/2,(int)(330*StateGameplay.scaleY), StateGameplay.android_FontSmall);
					
				}
			}
			
			
		//
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,0, (int)(0*StateGameplay.scaleX), (int)(150*StateGameplay.scaleY));
		StateGameplay.mainCanvas.drawText("" +countNumberPerson+" Người Chơi", (int)(196*StateGameplay.scaleX),(int)(200*StateGameplay.scaleY), StateGameplay.android_FontSmall);
		
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,0, (int)(400*StateGameplay.scaleX), (int)(150*StateGameplay.scaleY));
		StateGameplay.mainCanvas.drawText("Tiền : " +getMoney(), (int)(586*StateGameplay.scaleX),(int)(200*StateGameplay.scaleY), StateGameplay.android_FontSmall);
		//
		
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,5,(int)(0*StateGameplay.scaleX), (int)(440*StateGameplay.scaleY));
		if(curentQuestionID > -1)
			StateGameplay.mainCanvas.drawText("CÂU SỐ : "+Map.curentQuestion, (StateGameplay.SCREEN_WIDTH/2),(int)(520*StateGameplay.scaleY), StateGameplay.android_MenuFont);
		//
		Rect rec = new Rect(0, 0, StateGameplay.SCREEN_WIDTH + (int)(110*StateGameplay.scaleX*0.5), 300);
		if(curentQuestionID > -1)
			StateGameplay.drawMultilineText(Map.listQuestion.get(Map.curentQuestionID).getQuestion(),StateGameplay.SCREEN_WIDTH/2,(int)(590*StateGameplay.scaleY),StateGameplay.android_FontSmall,StateGameplay.mainCanvas,(int)(50*StateGameplay.scaleX),rec);
		
		//-----------------AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA--------------
		StateGameplay.android_FontSmall.setTextAlign(Align.LEFT);
		if(Map.subState == 6 && curentQuestionID>-1 &&listQuestion.get(curentQuestionID).getTrueCase() == 0)
		{
			if(GameThread.timeCurrent%500>250)
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY));
		}else
		{
			if(selectAnswer ==0 || StateGameplay.isTouchDrapInRect((int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(840*StateGameplay.scaleY));
		}
		if(curentQuestionID > -1)
		{
			StateGameplay.mainCanvas.drawText("A", (int)(120*StateGameplay.scaleX),(int)(926*StateGameplay.scaleY), StateGameplay.android_MenuFont);
			StateGameplay.mainCanvas.drawText(Map.listQuestion.get(Map.curentQuestionID).getCasea(), (int)(180*StateGameplay.scaleX),(int)(926*StateGameplay.scaleY), StateGameplay.android_FontSmall);
		}
		
		//---------------------BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB------------------
		if(Map.subState == 6 &&curentQuestionID>-1 &&listQuestion.get(curentQuestionID).getTrueCase() ==1)
		{
			if(GameThread.timeCurrent%500>250)
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY));
		}
		else
		{
			if(selectAnswer ==1 || StateGameplay.isTouchDrapInRect((int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(960*StateGameplay.scaleY));
		}
		if(curentQuestionID > -1)
		{
			StateGameplay.mainCanvas.drawText("B", (int)(120*StateGameplay.scaleX),(int)(1046*StateGameplay.scaleY), StateGameplay.android_MenuFont);
			StateGameplay.mainCanvas.drawText(Map.listQuestion.get(Map.curentQuestionID).getCaseb(), (int)(180*StateGameplay.scaleX),(int)(1046*StateGameplay.scaleY), StateGameplay.android_FontSmall);
		}
		
		
		//---------------------CCCCCCCCCCCCCCCCCCCC---------------------------------
		
		if(Map.subState == 6 && curentQuestionID>-1 &&listQuestion.get(curentQuestionID).getTrueCase() == 2)
		{
			if(GameThread.timeCurrent%500>250)
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY));
		}else
		{
			if(selectAnswer ==2 || StateGameplay.isTouchDrapInRect((int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY), MENU_ANSWER_W, MENU_ANSWER_H))
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,7,(int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY));
			else
				StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas,6,(int)(64*StateGameplay.scaleX), (int)(1080*StateGameplay.scaleY));
		}
		if(curentQuestionID > -1)
		{
			StateGameplay.mainCanvas.drawText("C", (int)(120*StateGameplay.scaleX),(int)(1166*StateGameplay.scaleY), StateGameplay.android_MenuFont);
			StateGameplay.mainCanvas.drawText(Map.listQuestion.get(Map.curentQuestionID).getCasec(), (int)(180*StateGameplay.scaleX),(int)(1166*StateGameplay.scaleY), StateGameplay.android_FontSmall);
		}
		StateGameplay.android_FontSmall.setTextAlign(Align.CENTER);
		
		
	}
	public static void newQuestion()
	{
		Random r = new Random();		
		int count = listQuestion.size()/20;
		curentQuestionID =curentQuestion*count+ r.nextInt(count);
		curentQuestion++;
		int temp = listQuestion.get(curentQuestionID).getTrueCase();
		int _caseTrue =0 ;
		int _caseFalse1 = 0,_caseFalse2 =0;
	
		_caseTrue = countNumberPerson*(70 - curentQuestion + r.nextInt(30 - curentQuestion))/100;
		_caseFalse1 = (countNumberPerson -_caseTrue )*r.nextInt(50)/100;
		_caseFalse2 = countNumberPerson - _caseTrue - _caseFalse1;
		
		if(temp == 0)
		{
			countAnser[0] = _caseTrue;
			countAnser[1] = _caseFalse1;
			countAnser[2] = _caseFalse2;
		}
		if(temp == 1)
		{
			countAnser[0] = _caseFalse1;
			countAnser[1] = _caseTrue;
			countAnser[2] = _caseFalse2;
		}
		if(temp == 2)
		{
			countAnser[0] = _caseFalse1;
			countAnser[1] = _caseFalse2;
			countAnser[2] = _caseTrue;//;
		}
	}
	public static int GetIndexOfMaxCount()
	{

			int maxindex = countAnser[0] > countAnser[1]?0:1;
			maxindex = countAnser[maxindex] > countAnser[2]?maxindex:2;
		return maxindex; 
	}
	
	public static int getMoney()
	{
		int money = 0;
		int countfail = 100 - countNumberPerson;
		
		if(countfail >=100)//1
		{
			money = 50000000;
		}
		else if(countfail >=90)//2
		{
				money = 30000000;
		}
		else if(countfail >=80)//3
		{
				money = 20000000;
		}
		else if(countfail >=70)//4
		{
				money = 15000000;
		}
		else if(countfail >=60)//5
		{
				money = 1000000;
		}
		else if(countfail >=50)//6
		{
				money = 5000000;
		}
		else if(countfail >=40)//7
		{
				money = 3000000;
		}
		else if(countfail >=30)//8
		{
				money = 2000000;
		}
		else if(countfail >=20)//9
		{
				money = 1000000;
		}
		else if(countfail >=10)//9
		{
				money = 500000;
		}
		else
			money =0;
		return money; 
	}
	
	
	
	
}

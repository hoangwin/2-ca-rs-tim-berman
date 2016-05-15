package com.thuanvietgame.wordsearch.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanvietgame.wordsearch.BitmapFont;
import com.thuanvietgame.wordsearch.Dialog;
import com.thuanvietgame.wordsearch.GameLayer;
import com.thuanvietgame.wordsearch.GameLib;
import com.thuanvietgame.wordsearch.GameThread;
import com.thuanvietgame.wordsearch.IConstant;
import com.thuanvietgame.wordsearch.SoundManager;
import com.thuanvietgame.wordsearch.WordSearchActivity;
import com.thuanvietgame.wordsearch.game.Map;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateCompleteLevel extends WordSearchActivity
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isLeaderBoard = true;
	public static int idAchivement = -1;
	public static synchronized void SendMessage(int type)
	{
		switch (type)
		{
		case MESSAGE_CTOR:
		

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_Y1 = (int)(900*scaleY);
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			Map.mAllScole += Map.mStateScole;
			for(int i=0;i<StateAchivement.achivementUnLockScore.length;i++)
				if(Map.mAllScole >= StateAchivement.achivementUnLockScore[i])
					if(StateAchivement.achivementLock[i])
					{
						idAchivement = i;
						StateAchivement.achivementLock[i] = false;
					}
			
			WordSearchActivity.mainActivity.saveGame();
			SoundManager.playSound(SoundManager.SOUND_WIN, 1);
			break;
		case MESSAGE_UPDATE:

			if (WordSearchActivity.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || WordSearchActivity.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);

			if (WordSearchActivity.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {				
				changeState(STATE_LEADERBOARD); 
			}

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			
			WordSearchActivity.mainPaint.setStyle(Style.FILL);
			WordSearchActivity.mainPaint.setARGB(200, 0, 0, 0);
			WordSearchActivity.mainCanvas.drawRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT, WordSearchActivity.mainPaint);
			StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 2,  0,(int)(120*WordSearchActivity.scaleY));
			//draw text
			WordSearchActivity.android_MenuFont.setColor(Color.rgb(79,57,30));
			WordSearchActivity.mainCanvas.drawText("HOÀN THÀNH", WordSearchActivity.SCREEN_WIDTH / 2,(int)(220*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			
			
			if(idAchivement > -1)
			{
				if((GameThread.timeCurrent%1000) >500)
				{
					WordSearchActivity.android_MenuFont.setColor(Color.rgb(125,57,130));
					WordSearchActivity.mainCanvas.drawText("PHẦN THƯỞNG THÀNH T�?CH", WordSearchActivity.SCREEN_WIDTH / 2,(int)(310*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
				}
			}
			
			WordSearchActivity.android_MenuFont.setColor(Color.WHITE);
			WordSearchActivity.mainCanvas.drawText("THỜI GIAN : " + StateGameplay.getStringTimer((int)(StateGameplay.mTimerCount/1000)), WordSearchActivity.SCREEN_WIDTH / 2,(int)(400*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);			
			WordSearchActivity.mainCanvas.drawText("SỐ TỪ : " + Map.wordSearch.words.size(), WordSearchActivity.SCREEN_WIDTH / 2,(int)(500*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);			
			WordSearchActivity.mainCanvas.drawText("ĐIỂM : " + Map.mStateScole, WordSearchActivity.SCREEN_WIDTH / 2,(int)(600*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			WordSearchActivity.mainCanvas.drawText("-------------", WordSearchActivity.SCREEN_WIDTH / 2,(int)(700*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			WordSearchActivity.mainCanvas.drawText("TỔNG ĐIỂM :" + Map.mAllScole, WordSearchActivity.SCREEN_WIDTH / 2,(int)(800*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			
			
			if (WordSearchActivity.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

			if (WordSearchActivity.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);

			if (WordSearchActivity.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

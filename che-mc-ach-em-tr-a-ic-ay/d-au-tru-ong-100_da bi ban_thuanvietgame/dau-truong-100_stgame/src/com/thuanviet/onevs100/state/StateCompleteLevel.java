package com.thuanviet.onevs100.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.onevs100.BitmapFont;
import com.thuanviet.onevs100.DauTruong100;
import com.thuanviet.onevs100.Dialog;
import com.thuanviet.onevs100.GameLayer;
import com.thuanviet.onevs100.GameLib;
import com.thuanviet.onevs100.GameThread;
import com.thuanviet.onevs100.IConstant;
import com.thuanviet.onevs100.SoundManager;
import com.thuanviet.onevs100.game.Map;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;
import android.view.KeyEvent;

public class StateCompleteLevel extends DauTruong100
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isLeaderBoard = true;
	public static int idAchivement = -1;
	public static int  score =0;
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
			score = Map.curentQuestion*21 + (100 - Map.countNumberPerson)*3; 
			Map.mAllScole += score;
			for(int i=0;i<StateAchivement.achivementUnLockScore.length;i++)
				if(Map.mAllScole >= StateAchivement.achivementUnLockScore[i])
					if(StateAchivement.achivementLock[i])
					{
						idAchivement = i;
						StateAchivement.achivementLock[i] = false;
					}
			
			DauTruong100.mainActivity.saveGame();
			if(Map.countNumberPerson <=0)
				SoundManager.playSound(SoundManager.SOUND_COMPLETED_WIN, 1);
			else
				SoundManager.playSound(SoundManager.SOUND_COMPLETED_FAILD, 1);
			break;
		case MESSAGE_UPDATE:

			if (DauTruong100.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_GAMEPLAY);

			if (isKeyReleased(KeyEvent.KEYCODE_BACK) || DauTruong100.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				changeState(STATE_MAINMENU);

			if (DauTruong100.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H)) {				
				changeState(STATE_LEADERBOARD); 
			}

			break;
		case MESSAGE_PAINT:
			StateGameplay.SendMessage(MESSAGE_PAINT);
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			
			DauTruong100.mainPaint.setStyle(Style.FILL);
			DauTruong100.mainPaint.setARGB(200, 0, 0, 0);
			DauTruong100.mainCanvas.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);
			StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 11,  0,(int)(120*DauTruong100.scaleY));
			//draw text
			DauTruong100.android_MenuFont.setColor(Color.WHITE);
			DauTruong100.mainCanvas.drawText("KẾT THÚC", DauTruong100.SCREEN_WIDTH / 2,(int)(220*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			
			
			if(idAchivement > -1)
			{
				if((GameThread.timeCurrent%1000) >500)
				{
					DauTruong100.android_MenuFont.setColor(Color.rgb(125,57,130));
					DauTruong100.mainCanvas.drawText("PHẦN THƯỞNG MỚI", DauTruong100.SCREEN_WIDTH / 2,(int)(310*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
				}
			}
			
			DauTruong100.android_MenuFont.setColor(Color.WHITE);
			DauTruong100.mainCanvas.drawText("SỐ CÂU HỎI: " + Map.curentQuestion, DauTruong100.SCREEN_WIDTH / 2,(int)(400*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);			
			//WordSearchActivity.mainCanvas.drawText("SỐ TỪ : " + Map.wordSearch.words.size(), WordSearchActivity.SCREEN_WIDTH / 2,(int)(500*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);			
			DauTruong100.mainCanvas.drawText("ĐIỂM : " +score, DauTruong100.SCREEN_WIDTH / 2,(int)(600*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			DauTruong100.mainCanvas.drawText("-------------", DauTruong100.SCREEN_WIDTH / 2,(int)(700*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			DauTruong100.mainCanvas.drawText("TỔNG ĐIỂM :" + Map.mAllScole, DauTruong100.SCREEN_WIDTH / 2,(int)(800*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			
			
			if (DauTruong100.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

			if (DauTruong100.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);

			if (DauTruong100.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_LEADERBOARD_NORMAL, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_LEADERBOARD_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X3, DEF.WINLOSE_BUTTON_Y3);

			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

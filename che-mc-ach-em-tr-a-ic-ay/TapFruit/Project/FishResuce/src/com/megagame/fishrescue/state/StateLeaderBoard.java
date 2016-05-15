package com.megagame.fishrescue.state;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.regex.Pattern;

import org.xmlpull.v1.XmlPullParserException;

import com.megagame.fishrescue.BitmapFont;
import com.megagame.fishrescue.Dialog;
import com.megagame.fishrescue.FishTap;
import com.megagame.fishrescue.GameLayer;
import com.megagame.fishrescue.GameLib;
import com.megagame.fishrescue.IConstant;
import com.megagame.fishrescue.Map;

import resolution.DEF;

import android.R.color;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.text.method.HideReturnsTransformationMethod;
import android.util.Log;
import android.view.KeyEvent;

public class StateLeaderBoard extends FishTap
{
	public static RectF rectF;
	public static int MENU_H = SCREEN_HEIGHT;
	public static int m_start = 0;
	public static boolean isLeaderBoard = true;
	public static String user1 = "---";
	public static String user2 = "---";
	public static String user3 = "---";
	public static String user4 = "---";
	public static String user5 = "---";
	public static String score1 = "---";
	public static String score2 = "---";
	public static String score3 = "---";
	public static String score4 = "---";
	public static String score5 = "---";
	public static InputStream inputStreamLeaderBoard;
	public static int subStateLeaderBoard = 0;//0 call LeaderBoard

	public static synchronized void SendMessage(int type)
	{
		switch (type)
		{
		case MESSAGE_CTOR:
			subStateLeaderBoard = 0;
			DEF.WINLOSE_CONTENT_SPACE_H = fontsmall_White.getFontHeight();
			user1 = "---";
			user2 = "---";
			user3 = "---";
			user4 = "---";
			user5 = "---";
			score1 = "---";
			score2 = "---";
			score3 = "---";
			score4 = "---";
			score5 = "---";
			//update score

			isLeaderBoard = false;
			
			//Log.d("USER NAME", "User : " + username);
			DEF.WINLOSE_BACKGROUND_W = SCREEN_WIDTH;
			DEF.WINLOSE_BACKGROUND_H = SCREEN_HEIGHT / 6 * 4;
			DEF.WINLOSE_BACKGROUND_X = 0;
			DEF.WINLOSE_BACKGROUND_Y = (SCREEN_HEIGHT - DEF.WINLOSE_BACKGROUND_H) / 2;

			rectF = new RectF(DEF.WINLOSE_BACKGROUND_X, DEF.WINLOSE_BACKGROUND_Y, DEF.WINLOSE_BACKGROUND_X + DEF.WINLOSE_BACKGROUND_W, DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H);
			DEF.WINLOSE_TITLE_Y = DEF.WINLOSE_BACKGROUND_Y + 1;
			DEF.WINLOSE_CONTENT_Y = DEF.WINLOSE_TITLE_Y + 2 * FishTap.fontbig_Yellow.getFontHeight();

			DEF.WINLOSE_BUTTON_X2 = SCREEN_WIDTH / 2 - DEF.DIALOG_BUTTON_CONFIRM_H / 2;
			DEF.WINLOSE_BUTTON_X1 = DEF.WINLOSE_BUTTON_X2 - 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_X3 = DEF.WINLOSE_BUTTON_X2 + 2 * DEF.DIALOG_BUTTON_CONFIRM_W;

			DEF.WINLOSE_BUTTON_Y1 = DEF.WINLOSE_BACKGROUND_Y + DEF.WINLOSE_BACKGROUND_H - DEF.DIALOG_BUTTON_CONFIRM_H - 2;
			DEF.WINLOSE_BUTTON_Y2 = DEF.WINLOSE_BUTTON_Y3 = DEF.WINLOSE_BUTTON_Y1;
			break;
		case MESSAGE_UPDATE:
		
			if (subStateLeaderBoard == 0) {
				subStateLeaderBoard++;
				Dialog.showDialog(Dialog.DIALOG_TYPE_WAITING, "", "This action need connect to server. Please waiting", -1);
			} else if (subStateLeaderBoard == 1) {
				subStateLeaderBoard++;
				//update score
				String username = FishTap.mainActivity.getUsername();
				isLeaderBoard = false;
				String Country="Unknow";			
				if( username !=null && username.length()>0)
				{
					isLeaderBoard = true;
					//http://caogia.byethost10.com/tapfruit.php?type=update&username=toanstt&score=123&timer=13&country=vn
					String temp = DEF.LEADER_BOARD_UPDATE +"&username="+username+"&score="+Map.mAllScore;
					temp+="&timer="+Map.totalTimePlayGame/1000;
					temp+= "&country="+Country;
					FishTap.SendScoreToserver(temp);
				}				
				if (FishTap.UserName != null && FishTap.UserName.length() > 0) {
					isLeaderBoard = true;
					String temp = DEF.LEADER_BOARD_SELECT;

					inputStreamLeaderBoard = FishTap.getInputStreamFromUrl(temp);

					if (inputStreamLeaderBoard == null) {//offlin mode
						if (FishTap.mPreState == STATE_MAINMENU) {
							//changeState(STATE_MAINMENU);
							Dialog.showDialog(Dialog.DIALOG_TYPE_NOTICE, "", "No Metwork. Please try again", Dialog.DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG);
						} else {
							//changeState(STATE_WINLOSE);
							Dialog.showDialog(Dialog.DIALOG_TYPE_NOTICE, "", "No Metwork. Please try again", Dialog.DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG);
						}
						return;
					} else//online mode
					{
						Dialog.hideDialog();
						BufferedReader br = new BufferedReader(new InputStreamReader(inputStreamLeaderBoard));
						String line = "";
						String tempstr = "";
						try {
							while ((line = br.readLine()) != null) {
								System.out.println(line);
								tempstr += line;
							}
							br.close();
						} catch (Exception e) {
							// TODO: handle exception
						}

						//String tempstr = "hoang.nguyenmau|70|aaa|123|toanstt|123|caogia|145|CaoGia|1234|";				
						String[] part = tempstr.split(Pattern.quote("|"));
						if (part.length > 2) {
							user1 = part[0];
							score1 = part[1];
							user2 = part[2];
							score2 = part[3];
							user3 = part[4];
							score3 = part[5];
							user4 = part[6];
							score4 = part[7];
							user5 = part[8];
							score5 = part[9];
						}
					}
				}
				
			}
			if (Dialog.isShowDialog) {
				Dialog.updateDialog();
				return;
			} 
			if (mPreState == STATE_MAINMENU) {
				if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_MAINMENU);
			} else {
				if (FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_GAMEPLAY);

				if (isKeyReleased(KeyEvent.KEYCODE_BACK) || FishTap.isTouchReleaseInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					changeState(STATE_MAINMENU);
			}
			break;
		case MESSAGE_PAINT:
			if (StateGameplay.isIngame)
				StateGameplay.SendMessage(MESSAGE_PAINT);
			
			
			FishTap.mainPaint.setStyle(Style.FILL);
			FishTap.mainPaint.setARGB(200, 0, 0, 0);
			FishTap.mainCanvas.drawRect(0, 0, FishTap.SCREEN_WIDTH, FishTap.SCREEN_HEIGHT, FishTap.mainPaint);
			FishTap.mainPaint.setStyle(Style.FILL_AND_STROKE);
			FishTap.mainPaint.setColor(Color.rgb(67, 120, 167));
			FishTap.mainCanvas.drawRoundRect(rectF, 25, 25, FishTap.mainPaint);//WINLOSE_TITLE_CONTENT_SPACE_H

			//draw text

			FishTap.fontbig_Yellow.drawString(FishTap.mainCanvas, "LEADERBOARD", DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y, BitmapFont.ALIGN_CENTER);
			StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_START_3, DEF.WINLOSE_TITLE_X, DEF.WINLOSE_TITLE_Y + FishTap.fontbig_Yellow.getFontHeight());

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "RANK :", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "SCORE :", DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y, BitmapFont.ALIGN_RIGHT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "===================", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "1:" + user1, DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_White.drawString(FishTap.mainCanvas, " " + score1, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 2 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "2:" + user2, DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_White.drawString(FishTap.mainCanvas, " " + score2, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 3 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "3:" + user3, DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_White.drawString(FishTap.mainCanvas, " " + score3, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 4 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
		
			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "4:" + user4, DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 5 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_White.drawString(FishTap.mainCanvas, " " + score4, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 5 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "5:" + user5, DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 6 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			FishTap.fontsmall_White.drawString(FishTap.mainCanvas, " " + score5, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 6 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);

			FishTap.fontsmall_Yellow.drawString(FishTap.mainCanvas, "==================", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);

			//TapFruit.fontsmall_Yellow.drawString(TapFruit.mainCanvas, "Total", DEF.WINLOSE_CONTENT_X - DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_LEFT);
			//TapFruit.fontsmall_White.drawString(TapFruit.mainCanvas, " " + Map.mAllScore, DEF.WINLOSE_CONTENT_X + DEF.WINLOSE_CONTENT_SPACE_W, DEF.WINLOSE_CONTENT_Y + 7 * DEF.WINLOSE_CONTENT_SPACE_H, BitmapFont.ALIGN_RIGHT);
			if (mPreState == STATE_MAINMENU) {
				if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_OK_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
			} else {
				if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_RETRY_NORMAL, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);
				else
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_RETRY_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X1, DEF.WINLOSE_BUTTON_Y1);

				if (FishTap.isTouchDrapInRect(DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2, DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_MAINMENU_NORMAL, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
				else
					StateGameplay.spriteDPad.drawAFrame(FishTap.mainCanvas, DEF.FRAME_MAINMENU_HIGHTLIGHT, DEF.WINLOSE_BUTTON_X2, DEF.WINLOSE_BUTTON_Y2);
			}
			if (Dialog.isShowDialog) {
				Dialog.drawDialog(mainCanvas);
				return;
			}
			break;
		case MESSAGE_DTOR:
			break;
		}
	}
}

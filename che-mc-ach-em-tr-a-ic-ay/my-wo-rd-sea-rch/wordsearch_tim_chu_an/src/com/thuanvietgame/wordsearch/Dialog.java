package com.thuanvietgame.wordsearch;

import com.thuanvietgame.wordsearch.state.StateGameplay;
import com.thuanvietgame.wordsearch.state.StateMainMenu;

import resolution.DEF;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.graphics.RectF;
import android.view.KeyEvent;

public class Dialog
{
	public static final int DIALOG_TYPE_CONFIRM = 0;
	public static final int DIALOG_TYPE_NOTICE = 1;
	public static final int DIALOG_TYPE_WAITING = 2;

	//
	public static final int DIALOG_NEXTSTATE_EXIT = 0;
	public static final int DIALOG_BACK_TO_MAINMENU_EXIT = 1;
	public static final int DIALOG_RESTART_GAME = 2;
	public static final int DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG = 3;
	//
	public static int dialogType = -1;
	public static int dialogNextState = -1;
	public static String dialogText = null;

	//	
	public static RectF rectF = null;
	public static boolean isShowDialog = false;

	public static void showDialog(int type, String textStringLabel, String textString, int nextState)
	{
		isShowDialog = true;
		dialogType = type;
		dialogText = textString;
		dialogNextState = nextState;
	
	}

	public static void hideDialog()
	{
		isShowDialog = false;
	}

	public static void drawDialog(Canvas c)
	{
		int offset =0;

		WordSearchActivity.mainPaint.setStyle(Style.FILL);
		WordSearchActivity.mainPaint.setARGB(200, 0, 0, 0);
		c.drawRect(0, 0, WordSearchActivity.SCREEN_WIDTH, WordSearchActivity.SCREEN_HEIGHT, WordSearchActivity.mainPaint);

		//draw text
		StateGameplay.spriteUi.drawAFrame(WordSearchActivity.mainCanvas, 0,  0,(int)(400*WordSearchActivity.scaleY));
		WordSearchActivity.android_MenuFont.setColor(Color.WHITE);
		WordSearchActivity.mainCanvas.drawText(dialogText, WordSearchActivity.SCREEN_WIDTH / 2,  (int)(640*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
		int y = (int)(740*WordSearchActivity.scaleY);// PikachuActivity.SCREEN_HEIGHT / 6 + DIALOG_CONFIRM_H - 40 - 20;
		int x1 = (int)(500*WordSearchActivity.scaleY) ;
		int x2 =  (int)(200*WordSearchActivity.scaleY) ;
		//draw button
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:
			WordSearchActivity.mainCanvas.drawText("XÁC NHẬN", WordSearchActivity.SCREEN_WIDTH / 2,  (int)(508*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			if (WordSearchActivity.isTouchDrapInRect(x1, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, x1, y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_CANCEL_NORMAL, x1, y);

			if (WordSearchActivity.isTouchDrapInRect(x2, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
			   
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
			break;
		case DIALOG_TYPE_NOTICE:
			WordSearchActivity.mainCanvas.drawText("HINT", WordSearchActivity.SCREEN_WIDTH / 2,  (int)(500*WordSearchActivity.scaleY) ,WordSearchActivity.android_MenuFont);
			if (WordSearchActivity.isTouchDrapInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				StateGameplay.spriteDPad.drawAFrame(WordSearchActivity.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
		
			
			break;
		case	DIALOG_TYPE_WAITING:
			break;
		default:
			break;
		}

		//		fontsmall_White.drawString(mainCanvas, arrayMenuString[i], MENU_POSITION_X, y - 20, BitmapFont.ALIGN_CENTER);		

	}

	public static void updateDialog()
	{
		int y = (int)(740*WordSearchActivity.scaleY);// PikachuActivity.SCREEN_HEIGHT / 6 + DIALOG_CONFIRM_H - 40 - 20;
		int x1 = (int)(500*WordSearchActivity.scaleY) ;
		int x2 =  (int)(200*WordSearchActivity.scaleY) ;
		
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:

			if (WordSearchActivity.isTouchReleaseInRect(x1 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//cancel
			{
				hideDialog();
			} else if (WordSearchActivity.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				Dialog.hideDialog();
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_EXIT:

					WordSearchActivity.mainActivity.finish();
					break;
				case DIALOG_BACK_TO_MAINMENU_EXIT:
					WordSearchActivity.changeState(WordSearchActivity.STATE_MAINMENU, true, true);
					break;
				case DIALOG_RESTART_GAME:
					WordSearchActivity.changeState(WordSearchActivity.STATE_GAMEPLAY, true, true);
				break;
				default:
					break;
				}

			}
			if (WordSearchActivity.isKeyReleased(KeyEvent.KEYCODE_BACK)){
				hideDialog();
			}
			break;
		case DIALOG_TYPE_NOTICE:
			if (WordSearchActivity.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG:
					hideDialog();
					WordSearchActivity.changeState(WordSearchActivity.mPreState);
					break;
				//case DIALOG_BACK_TO_MAINMENU_EXIT:
				//	break;

				default:
					break;
				}
				Dialog.hideDialog();
			}
			break;
		default:
			break;
		}

	}
}

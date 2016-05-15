package com.thuanviet.onevs100;

import com.thuanviet.onevs100.game.Map;
import com.thuanviet.onevs100.state.StateGameplay;
import com.thuanviet.onevs100.state.StateMainMenu;

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

		DauTruong100.mainPaint.setStyle(Style.FILL);
		DauTruong100.mainPaint.setARGB(200, 0, 0, 0);
		c.drawRect(0, 0, DauTruong100.SCREEN_WIDTH, DauTruong100.SCREEN_HEIGHT, DauTruong100.mainPaint);

		//draw text
		StateGameplay.spriteUi.drawAFrame(DauTruong100.mainCanvas, 9,  0,(int)(400*DauTruong100.scaleY));
		DauTruong100.android_MenuFont.setColor(Color.WHITE);
		DauTruong100.mainCanvas.drawText(dialogText, DauTruong100.SCREEN_WIDTH / 2,  (int)(640*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
		int y = (int)(740*DauTruong100.scaleY);// PikachuActivity.SCREEN_HEIGHT / 6 + DIALOG_CONFIRM_H - 40 - 20;
		int x1 = (int)(500*DauTruong100.scaleY) ;
		int x2 =  (int)(200*DauTruong100.scaleY) ;
		//draw button
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:
			DauTruong100.mainCanvas.drawText("XÁC NHẬN", DauTruong100.SCREEN_WIDTH / 2,  (int)(494*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			if (DauTruong100.isTouchDrapInRect(x1, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, x1, y);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_CANCEL_NORMAL, x1, y);

			if (DauTruong100.isTouchDrapInRect(x2, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
			   
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
			break;
		case DIALOG_TYPE_NOTICE:
			DauTruong100.mainCanvas.drawText("HINT", DauTruong100.SCREEN_WIDTH / 2,  (int)(500*DauTruong100.scaleY) ,DauTruong100.android_MenuFont);
			if (DauTruong100.isTouchDrapInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				StateGameplay.spriteDPad.drawAFrame(DauTruong100.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
		
			
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
		int y = (int)(740*DauTruong100.scaleY);// PikachuActivity.SCREEN_HEIGHT / 6 + DIALOG_CONFIRM_H - 40 - 20;
		int x1 = (int)(500*DauTruong100.scaleY) ;
		int x2 =  (int)(200*DauTruong100.scaleY) ;
		
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:

			if (DauTruong100.isTouchReleaseInRect(x1 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//cancel
			{
				hideDialog();
			} else if (DauTruong100.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				Dialog.hideDialog();
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_EXIT:

					DauTruong100.mainActivity.finish();
					break;
				case DIALOG_BACK_TO_MAINMENU_EXIT:
					DauTruong100.changeState(DauTruong100.STATE_MAINMENU, true, true);
					break;
				case DIALOG_RESTART_GAME:
					Map.isUsingHelpInThisQuest = false;
					DauTruong100.changeState(DauTruong100.STATE_GAMEPLAY, true, true);
				break;
				default:
					break;
				}

			}
			if (DauTruong100.isKeyReleased(KeyEvent.KEYCODE_BACK)){
				hideDialog();
			}
			break;
		case DIALOG_TYPE_NOTICE:
			if (DauTruong100.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG:
					hideDialog();
					DauTruong100.changeState(DauTruong100.mPreState);
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

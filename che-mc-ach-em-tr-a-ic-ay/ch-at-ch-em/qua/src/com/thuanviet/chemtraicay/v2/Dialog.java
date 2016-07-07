package com.thuanviet.chemtraicay.v2;

import com.thuanviet.chemtraicay.v2.actor.FishSimple;
import com.thuanviet.chemtraicay.v2.state.StateGameplay;
import com.thuanviet.chemtraicay.v2.state.StateMainMenu;

import resolution.DEF;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Align;
import android.graphics.Rect;
import android.graphics.Paint.Style;
import android.graphics.RectF;

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
	public static int DIALOG_CONFIRM_X = ChemFruit.SCREEN_WIDTH / 20;
	public static int DIALOG_CONFIRM_Y = ChemFruit.SCREEN_HEIGHT / 4;
	public static int DIALOG_CONFIRM_W = ChemFruit.SCREEN_WIDTH - 2 * ChemFruit.SCREEN_WIDTH /20;
	public static int DIALOG_CONFIRM_H = ChemFruit.SCREEN_HEIGHT - 2 * ChemFruit.SCREEN_HEIGHT / 4;

	public static RectF rectF = null;
	public static boolean isShowDialog = false;

	public static void showDialog(int type, String textStringLabel, String textString, int nextState)
	{
		isShowDialog = true;
		dialogType = type;
		dialogText = textString;
		dialogNextState = nextState;
		rectF = new RectF(DIALOG_CONFIRM_X, DIALOG_CONFIRM_Y, DIALOG_CONFIRM_X + DIALOG_CONFIRM_W, DIALOG_CONFIRM_Y + DIALOG_CONFIRM_H);
	}

	public static void hideDialog()
	{
		isShowDialog = false;
	}

	public static void drawDialog(Canvas c)
	{
	
		//ChemFruit.mainPaint.setStyle(Style.FILL);
		//ChemFruit.mainPaint.setARGB(200, 0, 0, 0);
		//c.drawRect(0, 0, ChemFruit.SCREEN_WIDTH, ChemFruit.SCREEN_HEIGHT, ChemFruit.mainPaint);
		//ChemFish.mainPaint.setStyle(Style.FILL_AND_STROKE);
		//ChemFish.mainPaint.setColor(Color.argb(170,96, 167,217));
		//c.drawRoundRect(rectF, 25, 25, ChemFish.mainPaint);
		FishSimple.sprite.drawAFrame(ChemFruit.mainCanvas, 28, (int)(ChemFruit.scaleX*200), (int)(ChemFruit.scaleY*200));
		Rect textBounds =  new  Rect();
		ChemFruit.android_FontNormal.getTextBounds("Maig", 0, "Maig".length(), textBounds);
		ChemFruit.android_FontNormal.setTextAlign(Align.CENTER);
		//draw text
		c.drawText(dialogText, ChemFruit.SCREEN_WIDTH / 2, DIALOG_CONFIRM_Y + (int)(90*ChemFruit.scaleY), ChemFruit.android_FontNormal);
		
		//ChemFish.fontbig_White.drawString(c, dialogText, ChemFish.SCREEN_WIDTH / 2, DIALOG_CONFIRM_Y+ offset , DIALOG_CONFIRM_W - 20, BitmapFont.ALIGN_CENTER);
		int y = (int )(ChemFruit.scaleY*400);//DIALOG_CONFIRM_Y + DIALOG_CONFIRM_H - 3*DEF.DIALOG_BUTTON_CONFIRM_W/2;// PikachuActivity.SCREEN_HEIGHT / 6 + DIALOG_CONFIRM_H - 40 - 20;
		int x1 = DIALOG_CONFIRM_X +DIALOG_CONFIRM_W/4 ;
		int x2 =  DIALOG_CONFIRM_X + 3*DIALOG_CONFIRM_W/4 - DEF.DIALOG_BUTTON_CONFIRM_W ;
		//draw button
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:

			if (ChemFruit.isTouchDrapInRect(x1, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_CANCEL_HIGHTLIGHT, x1, y);
			else
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_CANCEL_NORMAL, x1, y);

			if (ChemFruit.isTouchDrapInRect(x2, y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
			   
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
			break;
		case DIALOG_TYPE_NOTICE:
			if (ChemFruit.isTouchDrapInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_OK_HIGHTLIGHT, x2, y);
			else
				ChemFruit.spriteDPad.drawAFrame(ChemFruit.mainCanvas, DEF.FRAME_OK_NORMAL, x2, y);
		
			
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
		int y =DIALOG_CONFIRM_Y + DIALOG_CONFIRM_H - 3*DEF.DIALOG_BUTTON_CONFIRM_H/2;//
		int x1 = DIALOG_CONFIRM_X +DIALOG_CONFIRM_W/4 ;
		int x2 = DIALOG_CONFIRM_X + 3*DIALOG_CONFIRM_W/4 - DEF.DIALOG_BUTTON_CONFIRM_W ;
		switch (dialogType)
		{
		case DIALOG_TYPE_CONFIRM:

			if (ChemFruit.isTouchReleaseInRect(x1 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//cancel
			{
				hideDialog();
			} else if (ChemFruit.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				Dialog.hideDialog();
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_EXIT:

					ChemFruit.mainActivity.finish();
					break;
				case DIALOG_BACK_TO_MAINMENU_EXIT:
					ChemFruit.changeState(ChemFruit.STATE_MAINMENU, true, true);
					break;
				case DIALOG_RESTART_GAME:
					StateGameplay.mcurrentlevel = 1;
					ChemFruit.changeState(ChemFruit.STATE_GAMEPLAY, true, true);
				break;
				default:
					break;
				}

			}
			break;
		case DIALOG_TYPE_NOTICE:
			if (ChemFruit.isTouchReleaseInRect(x2 , y , DEF.DIALOG_BUTTON_CONFIRM_W, DEF.DIALOG_BUTTON_CONFIRM_H))//ok
			{
				switch (dialogNextState)
				{
				case DIALOG_NEXTSTATE_CLOSE_LEADERBOARD_DIALOG:
					hideDialog();
					ChemFruit.changeState(ChemFruit.mPreState);
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

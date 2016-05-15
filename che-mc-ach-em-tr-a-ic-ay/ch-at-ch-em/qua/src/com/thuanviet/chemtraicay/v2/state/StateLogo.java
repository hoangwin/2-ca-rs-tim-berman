package com.thuanviet.chemtraicay.v2.state;

import java.io.IOException;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParserException;

import com.thuanviet.chemtraicay.v2.BitmapFont;
import com.thuanviet.chemtraicay.v2.ChemFruit;
import com.thuanviet.chemtraicay.v2.Dialog;
import com.thuanviet.chemtraicay.v2.GameLayer;
import com.thuanviet.chemtraicay.v2.GameLib;
import com.thuanviet.chemtraicay.v2.IConstant;
import com.thuanviet.chemtraicay.v2.SoundManager;
import com.thuanviet.chemtraicay.v2.Sprite;
import com.thuanviet.chemtraicay.v2.actor.Fish;
import com.thuanviet.chemtraicay.v2.actor.FishSimple;

import resolution.DEF;

import android.R.color;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Bitmap.Config;
import android.graphics.Paint.Style;
import android.graphics.Paint.Align;

import android.graphics.Typeface;
import android.view.KeyEvent;

public class StateLogo extends ChemFruit implements IConstant
{
	public static long timer = 0;
	public static int loadingStep = 0;
	public static String sizePreFix = "";

	public static synchronized void SendMessage(int type)
	{

		switch (type)
		{
		case MESSAGE_CTOR:
		
			logoimage = loadImageFromAsset("image/logo.png");
			logoimage = Bitmap.createScaledBitmap(logoimage, (int)(logoimage.getWidth()*scaleX), (int)(logoimage.getHeight()*scaleX), true);
			loadingStep = 0;
			timer = System.currentTimeMillis();
			//check pre fix

			break;
		case MESSAGE_UPDATE:
			switch (loadingStep)
			{
			case 1:
				
					if (ChemFruit.fontsmall_White == null)
						ChemFruit.fontsmall_White = new BitmapFont("font/white_24.spr", true);
					
								
					Typeface face;
				face = Typeface.createFromAsset(mainGameLib.getAssets(), "font/font.ttf");
				android_FontSmall.setTypeface(face);
				android_FontSmall.setAntiAlias(true);
				android_FontSmall.setDither(true);
				android_FontSmall.setTextSize((int)(40*scaleY));
				android_FontSmall.setColor(Color.WHITE);
				android_FontSmall.setTextAlign(Align.CENTER);
				
				android_FontNormal.setTypeface(face);
				android_FontNormal.setAntiAlias(true);
				android_FontNormal.setDither(true);
				android_FontNormal.setTextSize((int)(50*scaleY));
				android_FontNormal.setColor(Color.WHITE);
				android_FontNormal.setTextAlign(Align.CENTER);
				
				
				android_FontBig.setTypeface(face);
				android_FontBig.setAntiAlias(true);
				android_FontBig.setDither(true);
				android_FontBig.setTextSize((int)(90*scaleY));				
				android_FontBig.setColor(Color.rgb(244,235,100));
				android_FontBig.setTextAlign(Align.CENTER);
				break;
			case 2:
			
				SoundManager.getInstance();
				SoundManager.initSounds(ChemFruit.context);
				SoundManager.loadSounds();
				break;
			case 3:

				for(int i =0;i<4;i++)
				{
					if (StateGameplay.backgroundImage[i] != null)
					{	
						StateGameplay.backgroundImage[i].recycle();
						StateGameplay.backgroundImage[i] = null;
					}
					StateGameplay.backgroundImage[i] = loadImageFromAsset("image/screen/screen" +(i +1) + ".jpg");
					StateGameplay.backgroundImage[i] = Bitmap.createScaledBitmap(StateGameplay.backgroundImage[i], SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				break;
			case 4:
				
				break;
			case 5:
				if (StateMainMenu.splashBitmap == null)
				{
					StateMainMenu.splashBitmap = loadImageFromAsset("image/splash.jpg");
					StateMainMenu.splashBitmap = Bitmap.createScaledBitmap(StateMainMenu.splashBitmap, SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				if (StateMainMenu.gameTitleBitmap == null){
					StateMainMenu.gameTitleBitmap = loadImageFromAsset("image/gametitle.png");
					StateMainMenu.gameTitleBitmap = Bitmap.createScaledBitmap(StateMainMenu.gameTitleBitmap, (int)(StateMainMenu.gameTitleBitmap.getWidth()*scaleX), (int)(StateMainMenu.gameTitleBitmap.getHeight()*scaleY), true);
				}

				if (StateHowToPlay.bitmapHowToplay == null) {
					StateHowToPlay.bitmapHowToplay = ChemFruit.loadImageFromAsset("image/howtoplay.png");
					StateHowToPlay.bitmapHowToplay = Bitmap.createScaledBitmap(StateHowToPlay.bitmapHowToplay, SCREEN_WIDTH, SCREEN_HEIGHT, true);
				}
				break;

			case 6:
				if (spriteDPad == null)
					spriteDPad = new Sprite("sprite/ui/dpad_1280x800.sprite",true, scaleX,scaleY);
				if (FishSimple.sprite == null)
					FishSimple.sprite = new Sprite("sprite/ui/animal_1280x800.sprite", true,scaleX,scaleY);
				
				if(Fish.sprite == null)
					Fish.sprite = new Sprite("sprite/ui/fish.sprite", true,scaleX ,scaleY);
				if(Fish.spriteEffect == null)
					Fish.spriteEffect = new Sprite("sprite/ui/fisheffect.sprite", true,scaleX,scaleY);
				break;
			case 7:
				bitmapScreenBuffer = Bitmap.createBitmap(SCREEN_WIDTH, SCREEN_HEIGHT, Config.ARGB_4444);
				canvasScreenBuffer = new Canvas(bitmapScreenBuffer);
				break;
			case 8://init all variable 
				DEF.DIALOG_BUTTON_CONFIRM_W = spriteDPad.getFrameWidth(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_BUTTON_CONFIRM_H = spriteDPad.getFrameHeight(DEF.FRAME_OK_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_W = spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_RIGHT_NORMAL);
				DEF.DIALOG_ARROW_CONFIRM_H = spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_RIGHT_NORMAL);

				DEF.BUTTON_IGM_W = spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL);
				DEF.BUTTON_IGM_H = spriteDPad.getFrameHeight(DEF.FRAME_PAUSE_NORMAL);

				DEF.BUTTON_IGM_X = SCREEN_WIDTH - DEF.BUTTON_IGM_W - 5;
				DEF.BUTTON_IGM_Y = 2;
				DEF.BUTTON_HINT_X = 2;
				DEF.BUTTON_HINT_Y = DEF.BUTTON_IGM_Y + DEF.BUTTON_IGM_W + spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL) / 4;
				DEF.BUTTON_CHANGE_TILE_X = 2;
				DEF.BUTTON_CHANGE_TILE_Y = DEF.BUTTON_HINT_Y + DEF.BUTTON_IGM_W + spriteDPad.getFrameWidth(DEF.FRAME_PAUSE_NORMAL) / 4;
				DEF.BUTTON_HINT_W = DEF.BUTTON_CHANGE_TILE_W = 40;
				DEF.BUTTON_HINT_H = DEF.BUTTON_CHANGE_TILE_H = 40;
				//spriteDPad.getFrameWidth(DEF.FRAME_TIMER_BAR_0)

				//for map

				DEF.BUTTON_CANCEL_CONFIRM_W = spriteDPad.getFrameWidth(DEF.FRAME_CANCEL_NORMAL);
				DEF.BUTTON_CANCEL_CONFIRM_H = spriteDPad.getFrameHeight(DEF.FRAME_CANCEL_NORMAL);
				DEF.BUTTON_HINT_W = spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_CUSTOM_HIGHTLIGHT);

				DEF.BUTTON_HINT_H = spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_CUSTOM_HIGHTLIGHT);

				DEF.BUTTON_CHANGE_TILE_W = spriteDPad.getFrameWidth(DEF.FRAME_BUTTON_CUSTOM_HIGHTLIGHT);

				DEF.BUTTON_CHANGE_TILE_H = spriteDPad.getFrameHeight(DEF.FRAME_BUTTON_CUSTOM_HIGHTLIGHT);

				break;
			case 9:

			default:
				break;
			}
			loadingStep++;

			if ((System.currentTimeMillis() - timer > 3500) && loadingStep > 15) {
				changeState(STATE_MAINMENU);

			}
			break;
		case MESSAGE_PAINT:
			mainCanvas.drawColor(Color.BLACK);
			
			mainCanvas.drawBitmap(logoimage,
					(SCREEN_WIDTH - logoimage.getWidth()) >> 1,
					(SCREEN_HEIGHT - logoimage.getHeight()) >> 1,null);

			break;
		case MESSAGE_DTOR:
			logoimage.recycle();
			logoimage = null;
			break;
		}
	}
}

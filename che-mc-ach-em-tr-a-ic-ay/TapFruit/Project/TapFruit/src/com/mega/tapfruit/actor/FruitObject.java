package com.mega.tapfruit.actor;

import com.mega.tapfruit.BitmapFont;
import com.mega.tapfruit.Map;
import com.mega.tapfruit.SoundManager;
import com.mega.tapfruit.Sprite;
import com.mega.tapfruit.FruitTap;

import resolution.DEF; 
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;

public class FruitObject extends Actor
{
	public static Sprite sprite;
	public static int TYPE_COINT_1 = 0;
	public static int TYPE_COINT_2 = 1;
	public static int TYPE_COINT_3 = 2;
	public static int TYPE_ROCK_4 = 3;
	public static int TYPE_ROCK_5 = 4;
	public static int TYPE_ROCK_6 = 5;
	public static int TYPE_TRAP_1 = 6;
	public static int TYPE_TRAP_2 = 7;
	public static int TYPE_TRAP_3 = 8;
	public static int TYPE_TRAP_4 = 9;
	public static int TYPE_TRAP_5 = 10;
	public static int TYPE_TRAP_6 = 11;
	public static int COUNT_TYPE = 12;
	//SPECIAL TYPE
	public static int TYPE_BOOM = 12;
	public static int TYPE_TIMER = 13;
	public static int TYPE_SWAP = 14;
	//
	public static int TYPE_COMBO_EFFECT = 15;

	// state
	public final static int STATE_LIVE = 0;
	public final static int STATE_WAIT_SWAP = 1;
	public final static int STATE_WAIT_DIE = 2;
	public final static int STATE_DIE = 3;
	public final static int LIMIT_BOTTOM_Y = FruitTap.SCREEN_HEIGHT + 150;
	public static int soundPlayID = -1;//No Play//

	public static int[] arrayCoint = { 5,// TYPE_COINT_1
			5,// TYPE_COINT_1
			10,// TYPE_COINT_1
			10,// TYPE_COINT_1
			15,// TYPE_COINT_1
			15,// TYPE_COINT_1
			-5,// TYPE_ROCK_1
			-5,// TYPE_ROCK_1
			-10,// TYPE_TRAP_1
			-10,// TYPE_ROCK_1
			-15,// TYPE_ROCK_1
			-15,// TYPE_TRAP_1
	};

	public static int DEFAULT_X = 0;
	public static int DEFAULT_Y = -100;
	public int type;
	int animID;
	int speed;
	int coint;
	public int posX;
	public int posY;
	int width;
	int height;
	public int state;
	public boolean isEffect;

	public FruitObject()
	{

	}

	public FruitObject(int _type, int _x, int _y, int _speed, int _coint, int _animID, int _state)
	{
		type = _type;
		animID = _animID;
		speed = _speed;
		coint = _coint;
		posX = _x;
		posY = _y;
		// width = sprite.getAnimWidth(_animID);
		// height = sprite.getAnimHeight(_animID);
		width = sprite.getFrameWidth(DEF.FRAME_ROUND_1);
		height = sprite.getFrameHeight(DEF.FRAME_ROUND_1);
		state = _state;
		if (_type >= COUNT_TYPE)
			sprite.setAnim(this, 3, true, false);
	}

	public void swapItem() // doi item sang dang khac
	{
		type -= 6;
		animID = type;
	}

	public void decreaseSpeed(int _SpeedDecrease)
	{
		speed -= _SpeedDecrease;
		if (speed < 1)
			speed = 1;
	}

	public void chanegToWaitDie(boolean _isEffect)
	{
		isEffect = _isEffect;
		state = STATE_WAIT_DIE;
		if (type < 6) {
			Map.mAllScore += arrayCoint[type];
		//	Map.countSelectOneFrame++;
			if(type <2)
				Map.scoreFruit5++;
			else if(type <4)
				Map.scoreFruit10++;
			else 
				Map.scoreFruit15++;
				
			sprite.setAnim(this, 0, false, false);
		} else if (type < COUNT_TYPE) {
			if (!isEffect)
				Map.tapFail++;
			sprite.setAnim(this, 1, false, false);
		} else// if(type == COUNT_TYPE)//special :boom
		{
			soundPlayID = SoundManager.SOUND_COMBOL_2;
			sprite.setAnim(this, 2, false, false);
		}
		if(soundPlayID <0)
		soundPlayID = SoundManager.SOUND_COMBOL_1;

	}

	public void update()
	{
		switch (state)
		{
		case STATE_LIVE:
			if (FruitTap.isTouchPressInRect(posX, posY, width, height)) {
				if (type == COUNT_TYPE)//special :boom
				{
					Map.mAllScore += 20;
					Map.getBoomEffectList();
				}
				if (type == TYPE_SWAP) {
					Map.mAllScore += 20;
					Map.swapItemList();
				} else if (type == TYPE_TIMER) {
					Map.mAllScore += 20;
					Map.decreaseSpeedList();
				}
				chanegToWaitDie(false);
			}
			posY += speed;
			if (posY > LIMIT_BOTTOM_Y)
				state = STATE_DIE;
			break;
		case STATE_WAIT_DIE:
			posY += speed;
			if (sprite.hasAnimationFinished(this._currentAnimation, this._currentFrame, this._waitDelay)) {
				state = STATE_DIE;
			}
			break;
		case STATE_DIE:

			break;
		default:
			break;
		}
	}

	public void paint(Canvas c)
	{
		// TapFruit.mainPaint.setStyle(Style.FILL);
		// TapFruit.mainPaint.setColor(0xFF2b8fbe);
		// c.drawRect(posX, posY, posX + width, posY + height,
		// TapFruit.mainPaint);
		switch (state)
		{
		case STATE_LIVE:

			if (animID < COUNT_TYPE)
				sprite.drawAFrame(c, DEF.FRAME_ROUND_1 + animID / 2, posX, posY);//draw cicle bound
			else
				sprite.drawAnim(c, this, posX, posY);
			sprite.drawAFrame(c, animID, posX, posY);//draw fruit
			if (animID / 2 < 3)
				sprite.drawAFrame(c, 37 + animID / 2, posX, posY);//draw number
			break;
		case STATE_WAIT_DIE:
			if (type < COUNT_TYPE)
				sprite.drawAnim(c, this, posX, posY);
			else {
				sprite.drawAnim(c, this, posX, posY);
			}
			if (animID / 2 < 3)
				FruitTap.fontbig_White.drawString(c, " " + arrayCoint[animID], posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
			else if (type < COUNT_TYPE) {
				if (isEffect)
					FruitTap.fontbig_White.drawString(c, "Boom!", posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
				else
					FruitTap.fontbig_Yellow.drawString(c, "FAILT ", posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
			} else if (type == TYPE_BOOM)
				FruitTap.fontbig_White.drawString(c, "Boom!", posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
			else if (type == TYPE_TIMER) {
				FruitTap.fontbig_White.drawString(c, "Speed low", posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
			} else if (type == TYPE_SWAP) {
				FruitTap.fontbig_White.drawString(c, "SWAP", posX + width / 2, posY, BitmapFont.ALIGN_CENTER);
			}
			break;
		case STATE_DIE:

			break;
		}
	}

}
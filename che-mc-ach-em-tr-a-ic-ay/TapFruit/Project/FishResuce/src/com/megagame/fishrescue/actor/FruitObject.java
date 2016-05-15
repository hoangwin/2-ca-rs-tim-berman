package com.megagame.fishrescue.actor;

import com.megagame.fishrescue.BitmapFont;
import com.megagame.fishrescue.FishTap;
import com.megagame.fishrescue.Map;
import com.megagame.fishrescue.SoundManager;
import com.megagame.fishrescue.Sprite;
import com.megagame.fishrescue.state.StateGameplay;

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
	public final static int STATE_FALL = 2;
	public final static int STATE_WAIT_DIE = 3;
	public final static int STATE_DIE = 4;
	public final static int LIMIT_TOP_Y = 0;
	public final static int SPEED_FALL = 20;
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
	public static int DEFAULT_Y = FishTap.SCREEN_HEIGHT + 20;
	public int type;
	int animID;
	int speed;
	int coint;
	int width;
	int height;
	public int state;
	public boolean isEffect;
	int m_AnimX;
	int m_AnimY;

	public FruitObject()
	{

	}

	public FruitObject(int _type, int _x, int _y, int _speed, int _coint, int _animID, int _state)
	{
		type = _type;
		animID = _animID;
		speed = _speed;
		coint = _coint;
		m_x = _x;
		m_y = _y;
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

			sprite.setAnim(this, 0, false, false);
		} else if (type < COUNT_TYPE) {
			sprite.setAnim(this, 1, false, false);
		} else// if(type == COUNT_TYPE)//special :boom
		{
			sprite.setAnim(this, 2, false, false);
		}

	}

	public void chanegToFallState(boolean _isEffect)
	{
		isEffect = _isEffect;
		state = STATE_FALL;
		m_AnimX = m_x;
		m_AnimY = m_y;
		if (type < 6) {
			Map.mAllScore++;//= arrayCoint[type];
			//	Map.countSelectOneFrame++;

			sprite.setAnim(this, 0, false, false);
		} else if (type < COUNT_TYPE) {
			if (!isEffect)
				Map.tapFail++;
			sprite.setAnim(this, 1, false, false);
			soundPlayID = SoundManager.SOUND_FAIL;
		} else// if(type == COUNT_TYPE)//special :boom
		{
			state = STATE_WAIT_DIE;
			if (soundPlayID < 0)
				soundPlayID = SoundManager.SOUND_COMBOL_2;
			sprite.setAnim(this, 2, false, false);
		}
		if (soundPlayID < 0)
			soundPlayID = SoundManager.SOUND_COMBOL_1;

	}

	public void update()
	{
		switch (state)
		{
		case STATE_LIVE:
			if (StateGameplay.isIngame) {
				if (FishTap.isTouchPressInRect(m_x, m_y, width, height)) {
					if (type == COUNT_TYPE)//special :boom
					{
						Map.deleteItemList();
					//	Map.getBoomEffectList();
					}
					if (type == TYPE_SWAP) {
						Map.deleteItemList();
						//Map.swapItemList();
					} else if (type == TYPE_TIMER) {
						Map.deleteItemList();
						//Map.decreaseSpeedList();
					}
					chanegToFallState(false);
				}
			}
			m_y -= speed;
			if (StateGameplay.isIngame) {

				if (m_y < LIMIT_TOP_Y && type < COUNT_TYPE / 2) {
					Map.tapFail++;
					chanegToWaitDie(false);
					soundPlayID = SoundManager.SOUND_FAIL;
				}
				else if(m_y < (LIMIT_TOP_Y -150))
				{					
					state = STATE_DIE;
				
				}
			} else {
				if (m_y < LIMIT_TOP_Y - 150) {
					state = STATE_DIE;
				}
			}

			break;
		case STATE_FALL:
			m_y += SPEED_FALL;
			if (m_y > FishTap.SCREEN_HEIGHT) {
				//
				chanegToWaitDie(false);
			}
			break;
		case STATE_WAIT_DIE:
			m_y += speed;
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
		// c.drawRect(m_x, m_y, m_x + width, m_y + height,
		// TapFruit.mainPaint);
		switch (state)
		{
		case STATE_LIVE:

			if (animID < COUNT_TYPE)
				sprite.drawAFrame(c, DEF.FRAME_ROUND_1 + animID / 2, m_x, m_y);//draw cicle bound
			else
				sprite.drawAnim(c, this, m_x, m_y);
			sprite.drawAFrame(c, animID, m_x, m_y);//draw fruit
			/*
			 * if (animID / 2 < 3) sprite.drawAFrame(c, 37 + animID / 2, m_x,
			 * m_y);//draw number
			 */
			break;
		case STATE_FALL:
			sprite.drawAFrame(c, animID, m_x, m_y);//draw fruit

			sprite.drawAnim(c, this, m_AnimX, m_AnimY);
			break;
		case STATE_WAIT_DIE:
			if (type < COUNT_TYPE)
				sprite.drawAnim(c, this, m_x, m_y);
			else {
				sprite.drawAnim(c, this, m_x, m_y);
			}
			/*
			 * if (animID / 2 < 3)
			 * 
			 * FishRescue.fontbig_White.drawString(c, " " + arrayCoint[animID],
			 * m_x + width / 2, m_y, BitmapFont.ALIGN_CENTER); else if (type <
			 * COUNT_TYPE) { if (isEffect)
			 * FishRescue.fontbig_White.drawString(c, "Boom!", m_x + width / 2,
			 * m_y, BitmapFont.ALIGN_CENTER); else
			 * FishRescue.fontbig_Yellow.drawString(c, "FAILT ", m_x + width /
			 * 2, m_y, BitmapFont.ALIGN_CENTER); } else if (type == TYPE_BOOM)
			 * FishRescue.fontbig_White.drawString(c, "Boom!", m_x + width / 2,
			 * m_y, BitmapFont.ALIGN_CENTER); else if (type == TYPE_TIMER) {
			 * FishRescue.fontbig_White.drawString(c, "Speed low", m_x + width /
			 * 2, m_y, BitmapFont.ALIGN_CENTER); } else if (type == TYPE_SWAP) {
			 * FishRescue.fontbig_White.drawString(c, "SWAP", m_x + width / 2,
			 * m_y, BitmapFont.ALIGN_CENTER); }
			 */
			break;
		case STATE_DIE:

			break;
		}
	}

}
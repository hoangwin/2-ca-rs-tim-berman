package com.xiaxio.fishslide.actor;

import com.xiaxio.fishslide.BitmapFont;
import com.xiaxio.fishslide.FishSlide;
import com.xiaxio.fishslide.SoundManager;
import com.xiaxio.fishslide.Sprite;
import com.xiaxio.fishslide.state.MainMenuEffect;
import com.xiaxio.fishslide.state.StateGameplay;

import resolution.DEF;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;

public class FishSimple extends Actor
{
	public static Sprite sprite;
	public static int TYPE_FISH_1 = 0;
	public static int TYPE_FISH_2 = 1;
	public static int TYPE_FISH_3 = 2;
	public static int TYPE_FISH_4 = 3;
	public static int TYPE_FISH_5 = 4;
	public static int TYPE_FISH_6 = 5;
	public static int TYPE_FISH_7 = 6;
	public static int TYPE_FISH_8 = 7;
	public static int TYPE_FISH_9 = 8;
	public static int TYPE_FISH_10 = 9;
	public static int TYPE_FISH_11 = 10;
	public static int TYPE_FISH_12 = 11;
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
	public static int FRAME_ROUND_1 = 16;
	public static int FRAME_ROUND_2 = 17;
	public static int FRAME_ROUND_3 = 18;
	public static int FRAME_ROUND_4 = 19;
	public static int FRAME_ROUND_5 = 20;
	public static int FRAME_ROUND_6 = 21;
	public static int DEFAULT_Y = FishSlide.SCREEN_HEIGHT + 20;
	public int type;
	int animID;
	int speed;
	
	int width;
	int height;
	public int state;
	public boolean isEffect;
	int m_AnimX;
	int m_AnimY;

	public FishSimple()
	{

	}

	public FishSimple(int _type, int _x, int _y, int _speed, int _animID, int _state)
	{
		type = _type;
		animID = _animID;
		speed = _speed;
		
		m_x = _x;
		m_y = _y;
		// width = sprite.getAnimWidth(_animID);
		// height = sprite.getAnimHeight(_animID);
		width = sprite.getFrameWidth(FRAME_ROUND_1);
		height = sprite.getFrameHeight(FRAME_ROUND_1);
		state = _state;
		if (_type >= COUNT_TYPE)
			sprite.setAnim(this, 0, true, false);
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
		

			sprite.setAnim(this, 0, false, false);
	
	}

	public void chanegToFallState(boolean _isEffect)
	{
		isEffect = _isEffect;
		state = STATE_FALL;
		m_AnimX = m_x;
		m_AnimY = m_y;
		sprite.setAnim(this, 0, false, false);	

	}

	public void update()
	{
		switch (state)
		{
		case STATE_LIVE:
			if (StateGameplay.isIngame) {
				if (FishSlide.isTouchPressInRect(m_x, m_y, width, height)) {
					if (type == COUNT_TYPE)//special :boom
					{
						MainMenuEffect.deleteItemList();
					//	Map.getBoomEffectList();
					}
					if (type == TYPE_SWAP) {
						MainMenuEffect.deleteItemList();
						//Map.swapItemList();
					} else if (type == TYPE_TIMER) {
						MainMenuEffect.deleteItemList();
						//Map.decreaseSpeedList();
					}
					chanegToFallState(false);
				}
			}
			m_y -= speed;
			if (StateGameplay.isIngame) {

				if (m_y < LIMIT_TOP_Y && type < COUNT_TYPE / 2) {					
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
			if (m_y > FishSlide.SCREEN_HEIGHT) {
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
				sprite.drawAFrame(c, FRAME_ROUND_1 + animID / 2, m_x, m_y);//draw cicle bound
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
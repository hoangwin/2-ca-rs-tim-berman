package com.megagame.fourinaline.actor;

import com.megagame.fourinaline.BitmapFont;
import com.megagame.fourinaline.FourInALine;
import com.megagame.fourinaline.Map;
import com.megagame.fourinaline.SoundManager;
import com.megagame.fourinaline.Sprite;
import com.megagame.fourinaline.state.StateGameplay;

import resolution.DEF;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;

public class DiamondActor extends Actor
{

	//state
	public final static int STATE_IDE = 0;	
	public final static int STATE_DROP = 1;
	public final static int STATE_WAIT_DETROY = 2;
	public final static int STATE_DETROY = 3;

	public int value;
	public int targetRow;
	public int targetCol;
	public int currentRow;
	public int currentCol;
	public int targetX;
	public int targetY;
	public int state;
	public int specialType = -1;
	public static int speed;
	public DiamondActor()
	{
		value = 0;
		m_x = 0;
		m_y = 0;
		currentRow = 0;
		currentCol = 0;
		targetX = 0;
		targetY = 0;
		state = STATE_IDE;
	}

	public DiamondActor(int _value, int _row, int _col, int _m_x, int _m_y, int _targetX, int _targetY, int _state)
	{
		value = _value;
		currentRow = _row;
		currentCol = _col;
		targetX = _targetX;
		targetY = _targetY;
		m_x = _m_x;
		m_y = _m_y;
		state = _state;
		specialType = -1;
	}

	public void update()
	{
		switch (state)
		{
		case STATE_IDE:
			break;
		case STATE_DROP:
			
				if (m_y < targetY)
					m_y += speed;
			
			if (m_y >= targetY)//&& sprite.hasAnimationFinished(_currentAnimation, _currentFrame, _waitDelay));
			{
				m_y = targetY;
				Map.isUserStep = !Map.isUserStep;
				if(Map.checkWin(currentRow, currentCol))
				{
					StateGameplay.changeState(FourInALine.STATE_WINLOSE);
					SoundManager.playSound(SoundManager.SOUND_WIN, 1);
				}
				else
					SoundManager.playSound(SoundManager.SOUND_COMBOL_1, 1);
				state = STATE_IDE;
			}
			break;
		}
	}

	public void paint(Canvas c)
	{

		switch (state)
		{
		case STATE_IDE:
			if (value >= 0){
				StateGameplay.spriteFruit.drawAFrame(c, value, m_x, m_y);
				if(specialType >=0)
				{
					Log.d("specialType " ,"specialType id " +specialType+",x = "+ m_x +",y="+ m_y);
					int temp = 0;// GameLib.frameCountCurrentState%2;
					if(specialType == 0)
						StateGameplay.spriteFruit.drawAFrame(c, 6+ temp, m_x, m_y);
					else if(specialType == 1)
						
						StateGameplay.spriteFruit.drawAFrame(c, 8 + temp, m_x, m_y);
					else
						StateGameplay.spriteFruit.drawAFrame(c, 10 + temp, m_x, m_y);
				}
			}
			sprite.drawAnim(c, this);
			break;
		case STATE_DROP:
			if (value >= 0)
			{	
				StateGameplay.spriteFruit.drawAFrame(c, value, m_x, m_y);
				if(specialType >=0)
				{
					int temp =0;// GameLib.frameCountCurrentState%2;
					if(specialType == 0)
						StateGameplay.spriteFruit.drawAFrame(c, 6+ temp, m_x, m_y);
					else if(specialType == 1)
						
						StateGameplay.spriteFruit.drawAFrame(c, 8+ temp, m_x, m_y);
					else
						StateGameplay.spriteFruit.drawAFrame(c, 10+ temp, m_x, m_y);
				}
			}
			sprite.drawAnim(c, this);
			break;
		}

	}

}
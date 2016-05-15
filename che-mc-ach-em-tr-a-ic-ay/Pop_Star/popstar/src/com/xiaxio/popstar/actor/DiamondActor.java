package com.xiaxio.popstar.actor;

import com.xiaxio.popstar.BitmapFont;
import com.xiaxio.popstar.DEF;
import com.xiaxio.popstar.Map;
import com.xiaxio.popstar.PopStar;
import com.xiaxio.popstar.SoundManager;
import com.xiaxio.popstar.Sprite;
import com.xiaxio.popstar.state.StateGameplay;

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
	public int currentX;
	public int currentY;
	public int targetX;
	public int targetY;
	public int state;
	public int specialType = -1;
	public static int speedY;
	public static int speedX;
	public DiamondActor()
	{
		value = 0;
		currentX = 0;
		currentY = 0;
		currentRow = 0;
		currentCol = 0;
		targetX = 0;
		targetY = 0;
		state = STATE_IDE;
	}

	public DiamondActor(int _value, int _row, int _col, int _currentX, int _currentY, int _targetX, int _targetY, int _state)
	{
		value = _value;
		currentRow = _row;
		currentCol = _col;
		targetX = _targetX;
		targetY = _targetY;
		currentX = _currentX;
		currentY = _currentY;
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
			
				if (currentY < targetY)
					currentY += speedY;
				if(currentY >= targetY)
					currentY = targetY;
				
				
				if (currentX > targetX)
					currentX -= speedX;
				if (currentX <= targetX)
					currentX = targetX;
			
			if (currentY >= targetY && (currentX <= targetX))//&& sprite.hasAnimationFinished(_currentAnimation, _currentFrame, _waitDelay));
			{
				currentY = targetY;
				currentX = targetX;
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
				StateGameplay.spriteFruit.drawAFrame(c, value, currentX, currentY);
				if(specialType >=0)
				{
					Log.d("specialType " ,"specialType id " +specialType+",x = "+ currentX +",y="+ currentY);
					int temp = 0;// GameLib.frameCountCurrentState%2;
					if(specialType == 0)
						StateGameplay.spriteFruit.drawAFrame(c, 6+ temp, currentX, currentY);
					else if(specialType == 1)
						
						StateGameplay.spriteFruit.drawAFrame(c, 8 + temp, currentX, currentY);
					else
						StateGameplay.spriteFruit.drawAFrame(c, 10 + temp, currentX, currentY);
				}
			}
			sprite.drawAnim(c, this);
			break;
		case STATE_DROP:
			if (value >= 0)
			{	
				StateGameplay.spriteFruit.drawAFrame(c, value, currentX, currentY);
				if(specialType >=0)
				{
					int temp =0;// GameLib.frameCountCurrentState%2;
					if(specialType == 0)
						StateGameplay.spriteFruit.drawAFrame(c, 6+ temp, currentX, currentY);
					else if(specialType == 1)
						
						StateGameplay.spriteFruit.drawAFrame(c, 8+ temp, currentX, currentY);
					else
						StateGameplay.spriteFruit.drawAFrame(c, 10+ temp, currentX, currentY);
				}
			}
			sprite.drawAnim(c, this);
			break;
		}

	}

}
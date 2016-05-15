package com.xiaxio.fishslide.actor;

import java.util.Random;

import com.xiaxio.fishslide.BitmapFont;
import com.xiaxio.fishslide.FishSlide;
import com.xiaxio.fishslide.GameLib;
import com.xiaxio.fishslide.SoundManager;
import com.xiaxio.fishslide.Sprite;
import com.xiaxio.fishslide.gameplay.GamePlay;
import com.xiaxio.fishslide.state.MainMenuEffect;
import com.xiaxio.fishslide.state.StateGameplay;
import com.xiaxio.fishslide.state.StateWinLose;

import resolution.DEF;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Paint.Style;
import android.util.Log;

public class Fish extends Actor
{
	public static Sprite sprite;
	public static Sprite spriteEffect;
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
	public static int TYPE_TRAP_7 = 12;
	public static int COUNT_TYPE = 13;
	//SPECIAL TYPE
	public static int TYPE_BOOM = 12;
	public static int TYPE_TIMER = 13;
	public static int TYPE_SWAP = 14;	

	// state
	public final static int STATE_LIVE = 0;
	public final static int STATE_WAIT_SWAP = 1;	
	public final static int STATE_WAIT_DIE = 2;
	public final static int STATE_DIE = 3;
	public final static int LIMIT_TOP_Y = 0;
	public final static int SPEED_FALL = 20;
	public static int soundPlayID = -1;//No Play//
	public static float gravity = 1f;
	public  float speedX = 0;
	public  float speedY = 0;
	
	public  int speedEffectX = 0;
	public  int speedEffectY = 0;
	public  int timerEffect = 0;
	
	public  int pointEffectX[] = {0,0,0,0,0};
	public  int pointEffectY[] = {0,0,0,0,0};
	public  int pointEffectSpeedX[] = {0,0,0,0,0};
	public  float pointEffectSpeedY[] = {0,0,0,0,0};
	public  float pointEffectYf[] = {0,0,0,0,0};
	

	
	public int type;
	int animID;
	int coint;
	int width;
	int height;
	public double angle;
	public int state;
	public boolean isEffect;
	int m_AnimX;
	int m_AnimY;
	
	public float fm_y = 0;
	public static Random random = new Random();
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
	public static int DEFAULT_Y = FishSlide.SCREEN_HEIGHT + 20;

	public static int SPEED_EFFECT_X = (int)(10*StateGameplay.scaleX);
	public static int SPEED_POINT_EFFECT_X =  (int)(15*StateGameplay.scaleX);
	public static int SPEED_POINT_EFFECT_Y = (int)(-10*StateGameplay.scaleY) ;
	public static int SPEED_POINT_EFFECT_OFFSET_X = (int)(30*StateGameplay.scaleX);
	public static int SPEED_POINT_EFFECT_OFFSET_Y = (int)(7*StateGameplay.scaleY) ;
	
	public static int MIN_DRAP_XY = (int)(70*StateGameplay.scaleY);
	
	public Fish()
	{

	}

	public Fish(int _type, int _x, int _y, int _coint, int _animID, int _state)
	{
		type = _type;
		animID = _animID;		
		coint = _coint;
		fm_y = _y;
		m_x = _x;
		m_y = _y;
    	width = sprite.getAnimWidth(_animID);
		height = sprite.getAnimHeight(_animID);
		state = _state;
		if (_type >= COUNT_TYPE)
			sprite.setAnim(this, 3, true, false);
		speedEffectX = SPEED_EFFECT_X;
		speedEffectY = 0;//(int)(20*StateGameplay.scaleY);
		
		for(int i=0;i<pointEffectX.length;i++)
		{
			
			pointEffectSpeedX[i] = SPEED_POINT_EFFECT_X - random.nextInt(SPEED_POINT_EFFECT_OFFSET_X);
			pointEffectSpeedY[i] = SPEED_POINT_EFFECT_Y - random.nextInt(SPEED_POINT_EFFECT_OFFSET_Y);
			if(pointEffectSpeedY[i]  ==0)
				pointEffectSpeedY[i]  = 1;
			pointEffectY[i] = 0;
			pointEffectX[i] = 0;
		}
	}

	public void swapItem() // doi item sang dang khac
	{
		type -= 6;
		animID = type;
	}

	public void decreaseSpeed(int _SpeedDecrease)
	{
		speedY -= _SpeedDecrease;
		if (speedY < 1)
			speedY = 1;
	}

	

	public void chanegToFallState(boolean _isEffect)
	{
		isEffect = _isEffect;		
		m_AnimX = m_x;
		m_AnimY = m_y;	
		state = STATE_WAIT_DIE;		
		if(type == 12)
		{
			soundPlayID = SoundManager.SOUND_BOOM;
		}
		else
		{
			GamePlay.mNumFishDieinOneFrame ++;
			if (soundPlayID < 0)
				soundPlayID = SoundManager.SOUND_SWORD_FISH;
		}

	}

	public void update()     
	{
		switch (state)
		{
		case STATE_LIVE:
			updateAngle();
			if(FishSlide.isTouchDrapInRect(0,0, FishSlide.SCREEN_WIDTH, FishSlide.SCREEN_HEIGHT))
			{
				int sizelistDrap = GamePlay.arrayListPoint.size();
				if(sizelistDrap==1)
				{
					if (FishSlide.isTouchDrapInRect(m_x - width/2, m_y - height/2, width, height)) 
					{					
						slideFish();
						//break;
					}
				}
				else if(sizelistDrap > 1)
				{
						int offsetx =  (GamePlay.arrayListPoint.get(sizelistDrap - 2).x - GamePlay.arrayListPoint.get(sizelistDrap - 1).x);//						
						int offsety =  (GamePlay.arrayListPoint.get(sizelistDrap - 2).y - GamePlay.arrayListPoint.get(sizelistDrap - 1).y);//
						int step =0;
						
						if(Math.abs(offsetx) >Math.abs(offsety))
						{
							step = Math.abs(offsetx/MIN_DRAP_XY) + 1;
							offsetx = offsetx/step;
							offsety = offsety/step;
						}
						else
						{ 
							step = Math.abs(offsety/MIN_DRAP_XY) +1;								
							offsetx = offsetx/step;
							offsety = offsety/step;
						}
						if(step >1)
						{
							if(GameLib.frameCountCurrentState - GamePlay.frameLasplaySoundSword<0)
								GamePlay.frameLasplaySoundSword = GameLib.frameCountCurrentState; 
							if(GameLib.frameCountCurrentState - GamePlay.frameLasplaySoundSword > 12)
							{
								GamePlay.frameLasplaySoundSword = GameLib.frameCountCurrentState; 
								SoundManager.playSound(SoundManager.SOUND_SWORD, 1);
							}
						}
						for(int i=0;i<step;i++)
						{
							if (GamePlay.isPointInRect( GamePlay.arrayListPoint.get(sizelistDrap -1).x + i*offsetx,
									GamePlay.arrayListPoint.get(sizelistDrap -1).y + i*offsety,m_x - width/2, m_y - height/2, width, height))
							{
								
								slideFish();
								break;
							}
						}
				}
				
			}
			speedY =( speedY - gravity);
			fm_y -=speedY;
			m_y = (int)fm_y;
			
			m_x += speedX;
		
			if (m_y > StateGameplay.SCREEN_HEIGHT + 170) {
				if(type != 12)
					GamePlay.mCountLive++;
				for(int i=0;i<pointEffectX.length;i++)
				pointEffectY[i] = m_y;
				state = STATE_DIE;
				soundPlayID = SoundManager.SOUND_FAIL;
			}			
			
			break;
		case STATE_WAIT_DIE:
			speedEffectY+= gravity;			
			m_y += speedEffectY;			
			
			for(int i=0;i<pointEffectX.length;i++)
			{
				pointEffectX[i]+= pointEffectSpeedX[i];
				pointEffectSpeedY[i] += gravity;
				pointEffectYf[i] +=	pointEffectSpeedY[i];
				pointEffectY[i] = (int)pointEffectYf[i];
			}
			
			if (timerEffect++ > 20) {
				state = STATE_DIE;
				if(type ==12)
				{
					StateWinLose.isWin = false;
					FishSlide.changeState(FishSlide.STATE_WINLOSE);
				}
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
		switch (state)
		{
		case STATE_LIVE:
			if(speedX <0)
				sprite.drawAnim(c, this,(int)angle,1,1,1,1,this.m_x,this.m_y);
			else
				sprite.drawAnim(c, this,(int)(angle),1,1,-1,1,this.m_x,this.m_y);
			break;			
			
		case STATE_WAIT_DIE:		
			

			if(type != 12) //boom
			{
				spriteEffect.drawAFrame(c, type*4, -timerEffect*17, 1, 1, 1, 1, m_x - (timerEffect)*speedEffectX, m_y);
				spriteEffect.drawAFrame(c, type*4 + 1, timerEffect*17, 1, 1, 1, 1, m_x + (timerEffect)*speedEffectX, m_y);			
	
				for(int i=0;i<pointEffectX.length;i++)
					spriteEffect.drawAFrame(c, type*4 + 2, m_x +pointEffectX[i], pointEffectY[i]);
			}
			else
			{
				spriteEffect.drawAnim(c);
			}
			
			
			break;
		case STATE_DIE:

			break;
		}
	}
	public void slideFish()
	{
		GamePlay.mAllScore +=GamePlay.fishScore[type];
		if(GamePlay.mTopScore <GamePlay.mAllScore)
			GamePlay.mTopScore = GamePlay.mAllScore;
		for(int i=0;i<pointEffectX.length;i++)
		{
			pointEffectY[i] = m_y;
			pointEffectYf[i] = m_y;
		}
			
		GamePlay.lastFishDie_X = m_x;
		GamePlay.lastFishDie_Y = m_y;
		chanegToFallState(false);	
		if(type == 12)
			spriteEffect.setAnim(0, m_x, m_y, false, false);		
			
		
		if(speedY <=0) 
			speedY = 20; 
	}
	public void updateAngle()
	{
		if(speedX <=0)
		{
			if(speedY == 0)
				angle = -90;
			else
				angle = Math.toDegrees(Math.atan(speedX*1.0/speedY));
			
			if(speedY<0)
				angle -= 90;
			else
				angle += 90;
		}
		else
		{
			if(speedY == 0)
				;//angle = 90;
			else
				angle = Math.toDegrees(Math.atan(speedY*1.0/speedX));
			
			if(speedY<0)
				;//angle += 180;
			//else
				
		}
			
	}

}
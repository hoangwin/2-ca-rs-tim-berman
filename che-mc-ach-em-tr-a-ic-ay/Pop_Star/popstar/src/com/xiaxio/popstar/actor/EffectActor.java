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

public class EffectActor extends Actor
{

	//state
	public static int TargetX = (int)(120*StateGameplay.scaleX);
	public static int TargetY = 10;
	public float speedEffectY;
	public float speedEffectX;
	public float EffectY;
	public float EffectX;
	public boolean  isEffect;
	public int value;
	public EffectActor(float x,float y,int _value)	
	{	
		speedEffectX = x;
		speedEffectY = y;		
		EffectX =-(x - TargetX)/20.0f;
		EffectY = -(y - TargetY)/20.0f; 
		isEffect = true;
		value = _value;
		//DiamondActor.sprite.setAnim(this,value, true, false);
	}

	public void update()
	{
		if(isEffect)
		{
			speedEffectY += EffectY;
			speedEffectX += EffectX;
			if(speedEffectY < TargetY)
				isEffect = false;
		}
	}

	public void paint(Canvas c)
	{
		//DiamondActor.sprite.drawAnim(c,this,(int)speedEffectX,(int)speedEffectY);
		//DiamondActor.sprite.drawAnim(c,this,(int)speedEffectX,(int)speedEffectY);
		//DiamondActor.sprite.drawAFrame(c,value, (int)speedEffectX,(int)speedEffectY);
		DiamondActor.sprite.drawAFrame(c,14 + value*5, (int)speedEffectX,(int)speedEffectY);
	}

}
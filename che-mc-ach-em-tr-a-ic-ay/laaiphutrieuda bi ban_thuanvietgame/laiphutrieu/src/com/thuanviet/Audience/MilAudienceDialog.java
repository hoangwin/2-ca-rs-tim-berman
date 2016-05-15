package com.thuanviet.Audience;


import android.app.Dialog;
import android.content.Context;
import android.view.Window;

import com.thuanviet.Help.Mil50;

public class MilAudienceDialog extends Dialog {


	int answer ;
	int level ;
	Mil50 mil50;
		
	public MilAudienceDialog(Context context,int answer,int level, Mil50 mil50) {
		super(context);
		this.answer = answer;
		this.level = level;
		this.mil50 = mil50;
		MilAudience mil = new MilAudience(context, answer, level,mil50);
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		setContentView(mil);
	}
	

	

}

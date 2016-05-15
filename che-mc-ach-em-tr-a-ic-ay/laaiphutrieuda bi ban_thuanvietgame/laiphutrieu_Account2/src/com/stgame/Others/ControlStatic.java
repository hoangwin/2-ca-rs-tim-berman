package com.stgame.Others;

import android.content.Context;

public class ControlStatic {
	public static Boolean Sound = true; // Mặc định bật nhạc
	public static String convertIDtoCase(int id){
		if(id == 1)
			return "A";
		else if (id == 2)
			return "B";
		else if (id == 3)
			return "C";
		else 
			return "D";
	}
	
	public String setText(Context c,int id){
		return c.getResources().getString(id);
	}
	
}



package com.thuanviet.Help;

import java.util.ArrayList;
import java.util.Random;

import android.widget.Button;

public class Mil50 {

	int MilAnswer;
	Button[] MilButton;
	boolean[] available = {true,true,true,true};

	public Mil50(int answer, Button[] button) {
		MilAnswer = answer;
		MilButton = button;
	}

	public void random5050() {

		ArrayList<Integer> answer = new ArrayList<Integer>();
		answer.add(1);
		answer.add(2);
		answer.add(3);
		answer.add(4);
		answer.remove(MilAnswer-1);
		
		Random generator1 = new Random();
		int random2 = generator1.nextInt(3);
		for (int i = 0; i < answer.size(); i++) {
			if (i == random2) {
				answer.remove(i);
			}
		}
		MilButton[answer.get(0)].setText(null);
		available[answer.get(0)-1] = false;
		MilButton[answer.get(1)].setText(null);
		available[answer.get(1)-1] = false;
	}
	public boolean[] getPlan(){
		return available;
	}
}

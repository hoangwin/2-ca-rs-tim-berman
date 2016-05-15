package com.thuanviet.Others;

import android.app.Dialog;
import android.content.Context;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.TextView;

import com.thuanviet.Ailatrieuphu.R;
import com.thuanviet.Ailatrieuphu.Main;

public class PauseGame extends Dialog {

	TextView question, score;
	Button resume, quitgame;
	Main activity;

	public PauseGame(Context context, final Main activity) {
		super(context);
		// TODO Auto-generated constructor stub
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		setContentView(R.layout.pause);		
		this.activity = activity;
		question = (TextView) findViewById(R.id.text_question);
		score = (TextView) findViewById(R.id.text_score);
		resume = (Button) findViewById(R.id.button_resume);
		quitgame = (Button) findViewById(R.id.button_quitgame);
		score.setText("1000");
		question.setText("Câu số 1");
		resume.setOnClickListener(new View.OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				dismiss();
			}
		});
		quitgame.setOnClickListener(new View.OnClickListener() {

			public void onClick(View v) {
				// TODO Auto-generated method stub
				PauseGame.this.activity.endGame();
			}
		});
	}

}

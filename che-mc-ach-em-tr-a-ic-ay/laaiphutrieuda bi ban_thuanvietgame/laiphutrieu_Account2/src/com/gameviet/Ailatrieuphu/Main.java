package com.gameviet.Ailatrieuphu;

import java.io.IOException;
import java.util.List;
import java.util.Random;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.media.MediaPlayer.OnCompletionListener;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.PowerManager;
import android.os.PowerManager.WakeLock;
import android.view.KeyEvent;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.View.OnLongClickListener;
import android.view.Window;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

//import com.google.ads.AdRequest;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.AdRequest;
import com.niusounds.sqlite.SQLiteDAO;
import com.stgame.Audience.MilAudienceDialog;
import com.stgame.Database.DataBaseHelper;
import com.stgame.Database.Question;
import com.stgame.Help.Mil50;
import com.stgame.Help.MilCallHelpDialog;
import com.stgame.Others.ControlStatic;
import com.stgame.Others.MilTimer;
import com.stgame.Others.PauseGame;
import com.gameviet.Ailatrieuphu.R;

public class Main extends Activity implements OnClickListener,
		OnLongClickListener {

	final Context context = this;
	static int[] moneyID = { R.drawable.cau1, R.drawable.cau2, R.drawable.cau3,
			R.drawable.cau4, R.drawable.cau5, R.drawable.cau6, R.drawable.cau7,
			R.drawable.cau8, R.drawable.cau9, R.drawable.cau10,
			R.drawable.cau11, R.drawable.cau12, R.drawable.cau13,
			R.drawable.cau14, R.drawable.cau15, };
	static int[] quesMediaID = { R.raw.ques01, R.raw.ques02, R.raw.ques03,
			R.raw.ques04, R.raw.ques05, R.raw.ques06, R.raw.ques07,
			R.raw.ques08, R.raw.ques09, R.raw.ques10, R.raw.ques11,
			R.raw.ques12, R.raw.ques13, R.raw.ques14, R.raw.ques15 };
	int answer;
	int level;
	int score;
	boolean[] isHelp = new boolean[5];
	Button[] caseButton = new Button[5];
	Button helpButton[] = new Button[5];
	ImageView avatar;

	SQLiteDAO dao;
	TextView Ques, tvTime;
	ImageView moneyImage;

	AlertDialog.Builder builder;
	Handler handler;

	MilTimer milTmer;
	Mil50 mil50;
	MediaPlayer mp;
	Random generator;
	ControlStatic control;
	WakeLock wakeLock;
	public static AudioManager audio ;//= (AudioManager) getSystemService(Context.AUDIO_SERVICE);;
	
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		//Request an ad
		audio = (AudioManager) getSystemService(Context.AUDIO_SERVICE);;
		
		setContentView(R.layout.activity_main);
   // Look up the AdView as a resource and load a request.
    AdView adView = (AdView) this.findViewById(R.id.adView1);
    AdRequest adRequest = new AdRequest.Builder().build();
    adView.loadAd(adRequest);
    adView.loadAd(adRequest);

		Init();
	}

	// khoi tao
	private void Init() {
		control = new ControlStatic();
		handler = new Handler();
		builder = new AlertDialog.Builder(this);
		builder.setNegativeButton(control.setText(context, R.string.NO), null);
		generator = new Random();
		tvTime = (TextView) findViewById(R.id.time_id);
		avatar = (ImageView) findViewById(R.id.Avatar_id);
		avatar.setOnLongClickListener(this);
		Ques = (TextView) findViewById(R.id.question_id);
		caseButton[1] = (Button) findViewById(R.id.answerA_id);
		caseButton[2] = (Button) findViewById(R.id.answerB_id);
		caseButton[3] = (Button) findViewById(R.id.answerC_id);
		caseButton[4] = (Button) findViewById(R.id.answerD_id);

		for (int i = 1; i <= 4; i++) {
			caseButton[i].setOnClickListener(new ButtonOnclickListioner(i));
		}
		moneyImage = (ImageView) findViewById(R.id.money_id);
		helpButton[0] = (Button) findViewById(R.id.back_id);
		helpButton[1] = (Button) findViewById(R.id.help_5050_id);
		helpButton[2] = (Button) findViewById(R.id.helpKhangia_id);
		helpButton[3] = (Button) findViewById(R.id.helpCall_id);
		helpButton[4] = (Button) findViewById(R.id.help_switch_id);
		for (int i = 0; i < helpButton.length; i++) {
			helpButton[i].setOnClickListener(this);
		}
		// instance database
		DataBaseHelper db1 = new DataBaseHelper(this);
		try {
			db1.createDataBase();
		} catch (IOException e) {

			e.printStackTrace();
		}
		dao = SQLiteDAO.getInstance(this, "Question", Question.class);
		level = 1;
		initQuestion();
		PowerManager powerManager = (PowerManager) getSystemService(Context.POWER_SERVICE);
		wakeLock = powerManager.newWakeLock(PowerManager.FULL_WAKE_LOCK,
				"GLGame");
	}

	class ButtonOnclickListioner implements OnClickListener {

		private int buttonId;

		public ButtonOnclickListioner(int id) {
			this.buttonId = id;
		}

		public void onClick(View v) {

			showDialog(buttonId);

		}
	}

	@Override
	protected Dialog onCreateDialog(int id) {

		builder.setMessage(control.setText(context, R.string.FINAL_PLAN) + " "
				+ ControlStatic.convertIDtoCase(id));
		builder.setPositiveButton(control.setText(context, R.string.YES),
				new DialogClickListener(id));
		builder.show();
		return super.onCreateDialog(id);
	}

	class DialogClickListener implements DialogInterface.OnClickListener {
		public int miChoose;

		public DialogClickListener(int id) {
			miChoose = id;
		}

		public void onClick(DialogInterface dialog, int which) {
			milTmer.cancel();
			disableButton();
			caseButton[miChoose].setBackgroundResource(R.drawable.case3);
			int ans[] = { R.raw.ans_a, R.raw.ans_b, R.raw.ans_c, R.raw.ans_d };
			if (!ControlStatic.Sound)
				press();// neu khong tieng
			sound(ans[miChoose - 1], 4);
			if (miChoose == answer) {
				handler(miChoose, true);
			} else {
				handler(miChoose, false);
			}
		}
	}

	void press() {
		new Thread() {
			public void run() {
				handler.sendEmptyMessageDelayed(3, 0);
				int i = 0;
				int flag = -1;
				while (true) {
					if (i == 2000) {
						handler.sendEmptyMessageDelayed(4, 0);
						break;
					}
					try {
						Thread.sleep(250);
						flag = -flag;
						i += 250;
						if (flag == 1) {
							handler.sendEmptyMessageDelayed(1, 0);
						} else {
							handler.sendEmptyMessageDelayed(2, 0);
						}
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
			};
		}.start();
	}

	void handler(final int miChoose, final boolean correctAnswer) {

		handler = new Handler() {
			@Override
			public void handleMessage(Message msg) {

				if (correctAnswer) {
					int trueCase[] = { R.raw.true_a, R.raw.true_b,
							R.raw.true_c, R.raw.true_d };
					if (msg.what == 3) {
						sound(trueCase[answer - 1], 2);
					}
					if (msg.what == 1) {
						// update to main
						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case_correct);
					}
					if (msg.what == 2) {
						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case2);
					}
					if (msg.what == 4) {
						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case_correct);
						if (!ControlStatic.Sound) {
							nextQuestion();
						}
					}
				} else {
					int lose[] = { R.raw.lose_a, R.raw.lose_b, R.raw.lose_c,
							R.raw.lose_d };
					if (msg.what == 3) {
						sound(lose[answer - 1], 1);
					}
					if (msg.what == 1) {
						// update to main
						caseButton[answer]
								.setBackgroundResource(R.drawable.case_correct);
						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case_wrong);
					}
					if (msg.what == 2) {

						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case2);
						caseButton[answer]
								.setBackgroundResource(R.drawable.case2);
					}
					if (msg.what == 4) {
						caseButton[answer]
								.setBackgroundResource(R.drawable.case_correct);
						caseButton[miChoose]
								.setBackgroundResource(R.drawable.case_wrong);
						if (!ControlStatic.Sound)
							endGame();
					}

				}
			}
		};
	}

	private void nextQuestion() {
		if (level + 1 > 15) {
			Toast.makeText(this, "You Win", Toast.LENGTH_LONG).show();
			sound(R.raw.best_player, 1);
			if (!ControlStatic.Sound) {

			}
			return;
		} else {
			level++;
			initQuestion();
		}
	}

	public void endGame() {
		Toast.makeText(this, "Game Over", Toast.LENGTH_LONG).show();
		sound(R.raw.lose, 9);
		if (!ControlStatic.Sound)
			finish();
	}

	public void onClick(View v) {
		builder.setMessage(control.setText(context, R.string.WANT_HELP));
		if (v.getId() == R.id.back_id) {

			builder.setMessage(control.setText(context, R.string.WANT_STOPPLAY));
			builder.setPositiveButton(control.setText(context, R.string.YES),
					new HelpDialogClickListener(R.id.back_id));
		} else {

			builder.setPositiveButton(control.setText(context, R.string.YES),
					new HelpDialogClickListener(v.getId()));
		}
		builder.show();
	}

	class HelpDialogClickListener implements DialogInterface.OnClickListener {
		private int id;

		public HelpDialogClickListener(int id) {
			this.id = id;
		}

		public void onClick(DialogInterface dialog, int which) {
			int[] idm = { R.id.help_5050_id, R.id.helpKhangia_id,
					R.id.helpCall_id, R.id.help_switch_id };
			for (int j = 0; j < idm.length; j++) {
				if (id == idm[j]) {
					isHelp[j + 1] = true;
					helpButton[j + 1].setClickable(false);
				}
			}
			switch (id) {
			case R.id.back_id:
				milTmer.cancel();
				endGame();
				break;
			case R.id.help_5050_id:
				helpButton[1].setBackgroundResource(R.drawable.fifty_end);
				sound(R.raw.sound5050, 6);
				if (!ControlStatic.Sound)
					mil50.random5050();
				break;
			case R.id.helpKhangia_id:
				helpButton[2].setBackgroundResource(R.drawable.khangia_end);
				sound(R.raw.khan_gia, 7);
				if (!ControlStatic.Sound)
					new MilAudienceDialog(context, answer, level, mil50).show();
				break;
			case R.id.helpCall_id:
				helpButton[3].setBackgroundResource(R.drawable.call_end);
				sound(R.raw.call, 8);
				if (!ControlStatic.Sound)
					new MilCallHelpDialog(context, answer, level, mil50).show();
				break;
			case R.id.help_switch_id:
				helpButton[4].setBackgroundResource(R.drawable.change_end);
				milTmer.cancel();
				initQuestion();
				break;
			}
		}
	}

	void nextSound() {
		if (level < 6) {
			startnewMP3(R.raw.moc1);
			mp.setLooping(true);
		} else if (level < 11) {
			startnewMP3(R.raw.moc2);
			mp.setLooping(true);
		} else {
			startnewMP3(R.raw.moc3);
			mp.setLooping(true);
		}
	}

	void startnewMP3(int id) {
		if (mp != null) {
			mp.release();
			mp = MediaPlayer.create(this, id);
			mp.start();
		} else {
			mp = MediaPlayer.create(this, id);
			mp.start();
		}
	}

	void startnewMp3Nextsound(int MediaID) {
		sound(MediaID, 5);
	}

	void initQuestion() {
		String[] abc = { Integer.toString(level) };
		List<Question> list1 = dao.get(Question.class, "level = ?", abc, null,
				null, "random()", 1);
		Ques.setText(control.setText(context, R.string.QUESTION_NUMBER) + " "
				+ level + ":" + list1.get(0).getQuestion());
		caseButton[1].setText("A. " + list1.get(0).getCasea());
		caseButton[2].setText("B. " + list1.get(0).getCaseb());
		caseButton[3].setText("C. " + list1.get(0).getCasec());
		caseButton[4].setText("D. " + list1.get(0).getCased());
		answer = list1.get(0).getTrueCase();

		mil50 = new Mil50(answer, caseButton);
		moneyImage.setBackgroundResource(moneyID[level - 1]);
		for (int i = 1; i <= 4; i++) {
			caseButton[i].setBackgroundResource(R.drawable.button_press);
		}
		milTmer = null;
		milTmer = new MilTimer(60000, 1000, tvTime, this);
		milTmer.start();
		if (level == 15) {
			sound(R.raw.pass14, 3);
		} else {
			sound(quesMediaID[level - 1], 3);
		}
		if (!ControlStatic.Sound)
			activeButton();
	}

	void sound(int id1, int id2) {
		if (!ControlStatic.Sound) {
			return;
		}
		disableButton();
		startnewMP3(id1);
		mp.setOnCompletionListener(new OnComplete(id2));
	}

	class OnComplete implements OnCompletionListener {

		private int id;

		public OnComplete(int id) {
			this.id = id;
		}

		public void onCompletion(MediaPlayer mp3) {
			switch (id) {
			case 1:
				endGame();
				break;
			case 2:
				nextQuestion();
				break;
			case 3:
				if (level == 5 || level == 10) {
					sound(R.raw.important, 5);
					break;
				} else if (level == 15) {
					sound(quesMediaID[level - 1], 5);
					break;
				} else {
					nextSound();
					activeButton();
				}
				break;
			case 4:
				int random = generator.nextInt(2); // random 0 hoac 1
				int ansnow[] = { R.raw.ans_now1, R.raw.ans_now2 };
				sound(ansnow[random], 10);
				break;
			case 5:
				nextSound();
				activeButton();
				break;
			case 6:
				mil50.random5050();
				nextSound();
				activeButton();
				break;
			case 7:
				new MilAudienceDialog(context, answer, level, mil50).show();
				nextSound();
				activeButton();
				break;
			case 8:
				new MilCallHelpDialog(context, answer, level, mil50).show();
				nextSound();
				activeButton();
				break;
			case 9:
				finish();
				break;
			case 10:
				press();
				break;
			}
		}
	}

	void disableButton() {
		for (int i = 1; i <= 4; i++) {
			caseButton[i].setClickable(false);
		}
		for (int i = 0; i < helpButton.length; i++) {
			helpButton[i].setClickable(false);
		}

	}

	void activeButton() {
		for (int i = 1; i <= 4; i++) {
			caseButton[i].setClickable(true);
		}
		for (int i = 0; i < helpButton.length; i++) {
			helpButton[i].setClickable(true);
		}
		for (int i = 0; i < helpButton.length; i++) {
			if (isHelp[i] == true)
				helpButton[i].setClickable(false);
		}
	}

	@Override
	protected void onPause() {
		super.onPause();
		if (mp != null) {
			mp.release();
		}
		milTmer.cancel();
		wakeLock.release();
	}

	@Override
	protected void onResume() {
		super.onResume();
		wakeLock.acquire();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
		if (mp != null) {
			mp.release();
		}
		milTmer.cancel();
		handler = null;

	}

	@Override
	protected void onStop() {
		super.onStop();
		if (mp != null) {
			mp.release();
		}
	}

	@Override
	public boolean onKeyDown(int keyCode, KeyEvent event) {
		if (keyCode == KeyEvent.KEYCODE_BACK
				&& event.getAction() == KeyEvent.ACTION_DOWN) {
			builder.setMessage(control.setText(context, R.string.WANT_STOPPLAY));
			builder.setPositiveButton(control.setText(context, R.string.YES),
					new HelpDialogClickListener(R.id.back_id));
			builder.show();
		}
		switch (keyCode) {
	    case KeyEvent.KEYCODE_VOLUME_UP:
	        audio.adjustStreamVolume(AudioManager.STREAM_MUSIC,
	                AudioManager.ADJUST_RAISE, AudioManager.FLAG_SHOW_UI);
	        return true;
	    case KeyEvent.KEYCODE_VOLUME_DOWN:
	        audio.adjustStreamVolume(AudioManager.STREAM_MUSIC,
	                AudioManager.ADJUST_LOWER, AudioManager.FLAG_SHOW_UI);
	        return true;	    
	    }		
		return super.onKeyDown(keyCode, event);
	}

	public int getScore() {
		// TODO Auto-generated method stub
		return score;
	}

	public boolean onLongClick(View arg0) {
		// TODO Auto-generated method stub
		PauseGame dialog = new PauseGame(this, this);
		// dialog.requestWindowFeature(Window.FEATURE_NO_TITLE);
		dialog.show();
		return false;
	}

}

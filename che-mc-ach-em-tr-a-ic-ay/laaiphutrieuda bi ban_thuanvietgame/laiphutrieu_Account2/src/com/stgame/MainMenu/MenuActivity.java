package com.stgame.MainMenu;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.AlertDialog.Builder;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.media.MediaPlayer.OnCompletionListener;
import android.net.Uri;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;

import com.gameviet.Ailatrieuphu.Main;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.AdRequest;

import com.stgame.Help.LuatChoi;
import com.stgame.Others.ControlStatic;
import com.gameviet.Ailatrieuphu.R;

public class MenuActivity extends Activity implements OnClickListener {
	/** Called when the activity is first created. */
	public MediaPlayer mp;
	ProgressDialog waitingDialog;

	private Button play, setting, help, update, exit,rating,moregame;
	final Context context = this;
	Builder builder;
	Button btnPlay, btnHelp, btnExit, btnSetting, btnUpdate;
	ControlStatic control;
	
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.menu); 
    AdView adView = (AdView) this.findViewById(R.id.adView1);
    AdRequest adRequest = new AdRequest.Builder().build();
    adView.loadAd(adRequest);
    adView.loadAd(adRequest);

		init();
	}

	void init() {
		control = new ControlStatic();
		if (ControlStatic.Sound) {
			startnewMP3(R.raw.moc1);
			mp.setLooping(true);
		}
		builder = new AlertDialog.Builder(this);
		play = (Button) findViewById(R.id.imageButton_play);
		play.setOnClickListener(this);
		
		rating = (Button) findViewById(R.id.imageButton_rating);
		rating.setOnClickListener(this);
		//setting = (Button) findViewById(R.id.imageButton_setting);
		//setting.setOnClickListener(this);
		//help = (Button) findViewById(R.id.imageButton_help);
		//help.setOnClickListener(this);
		
		//moregame = (Button) findViewById(R.id.imageButton_moregame);
		//moregame.setOnClickListener(this);
		
		exit = (Button) findViewById(R.id.imageButton_exit);
		exit.setOnClickListener(this);
		
	}

	public void onClick(View v) {

		switch (v.getId()) {
		case R.id.imageButton_play:
			if (ControlStatic.Sound)
				startnewMP3(R.raw.ready);
			showDialog(1);
			break;
		//case R.id.imageButton_setting:
		//	showDialog(2);
		//	break;
		case R.id.imageButton_rating:
			try { 
				  Intent intent = new Intent(Intent.ACTION_VIEW);
				  intent.setData(Uri.parse("market://details?id=com.gameviet.Ailatrieuphu"));
				  startActivity(intent);
				} catch (Exception e) { //google play app is not installed
				  Intent intent = new Intent(Intent.ACTION_VIEW);
				  intent.setData(Uri.parse("https://play.google.com/store/apps/details?id=com.gameviet.Ailatrieuphu"));
				  startActivity(intent);
				}
			break;
			//Intent goToMarket; 
			//goToMarket = new Intent(Intent.ACTION_VIEW, Uri.parse("market://search?q=pub:\"Developer name\"")); 
			//startActivity(goToMarket); 
		//case R.id.imageButton_help:
		//	Intent intent = new Intent(context, LuatChoi.class);
		//	startActivity(intent);
		//	break;
			/*
		case R.id.imageButton_moregame:
			try { 
				  Intent intent = new Intent(Intent.ACTION_VIEW);
				  intent.setData(Uri.parse("market://details?id=bigkool.gamehd&referrer=cpid=36"));
				  startActivity(intent);
				} catch (Exception e) { //google play app is not installed
				  //Intent intent = new Intent(Intent.ACTION_VIEW);
				  //intent.setData(Uri.parse("https://play.google.com/store/apps/details?id=com.stgame.onevs100"));
				  //startActivity(intent);
				}
			
			break;*/	
		case R.id.imageButton_exit:
			finish();
			break;
		}

	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
		if (mp != null) {
			mp.release();
		}
	}

	@Override
	protected void onPause() {
		super.onPause();
		if (mp != null) {
			mp.release();
		}
	}

	@Override
	protected void onResume() {
		super.onResume();
		if (ControlStatic.Sound) {
			startnewMP3(R.raw.moc1);
			mp.setLooping(true);
		}
	}

	@Override
	protected Dialog onCreateDialog(int id) {

		switch (id) {
		case 1:

			builder.setMessage(control.setText(MenuActivity.this, R.string.isready));
			builder.setPositiveButton(control.setText(context, R.string.READY),
					new DialogInterface.OnClickListener() {

						public void onClick(DialogInterface dialog, int which) {

							final Intent i = new Intent(context, Main.class);
							if (ControlStatic.Sound) {
								waitingDialog = ProgressDialog.show(context,
										"", control.setText(context,
												R.string.MESSAGELOADING));
								startnewMP3(R.raw.gofind);
								mp.setOnCompletionListener(new OnCompletionListener() {

									public void onCompletion(MediaPlayer mp) {
										waitingDialog.dismiss();

										startActivity(i);
									}
								});
							} else {
								startActivity(i);
							}

						}
					});
			builder.setNegativeButton(
					control.setText(context, R.string.NOREADY),
					new DialogInterface.OnClickListener() {

						public void onClick(DialogInterface dialog, int which) {
							if (ControlStatic.Sound) {
								startnewMP3(R.raw.moc1);
								mp.setLooping(true);
							}
						}
					});

			builder.show();
			break;

		case 2:
			final Dialog setting_dialog = new Dialog(this);
			setting_dialog.setTitle(control.setText(context, R.string.SETTING));
			setting_dialog.setContentView(R.layout.setting_dialog);
			setting_dialog.setTitle(null);

			final Button sound = (Button) setting_dialog
					.findViewById(R.id.sound);
			if (ControlStatic.Sound) {
				sound.setText(control.setText(context, R.string.SOUNDON));
			} else {
				sound.setText(control.setText(context, R.string.SOUNDOFF));
			}
			sound.setOnClickListener(new OnClickListener() {

				public void onClick(View v) {
					if (ControlStatic.Sound) {
						ControlStatic.Sound = false;
						sound.setText(control.setText(context,
								R.string.SOUNDOFF));
						mp.release();
					} else {
						ControlStatic.Sound = true;
						sound.setText(control
								.setText(context, R.string.SOUNDON));
						startnewMP3(R.raw.moc1);
						mp.setLooping(true);
					}
				}
			});
			Button back = (Button) setting_dialog.findViewById(R.id.back);
			back.setOnClickListener(new OnClickListener() {

				public void onClick(View v) {
					setting_dialog.dismiss();
				}
			});
			setting_dialog.show();
			break;
		}

		return super.onCreateDialog(id);

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

	@Override
	public boolean onKeyDown(int keyCode, KeyEvent event) {
		if (keyCode == KeyEvent.KEYCODE_BACK
				&& event.getAction() == KeyEvent.ACTION_DOWN) {
			builder.setMessage(control.setText(context, R.string.WANT_EXIT));
			builder.setPositiveButton(control.setText(context, R.string.YES),
					new DialogInterface.OnClickListener() {

						public void onClick(DialogInterface dialog, int which) {
							finish();
						}
					});
			builder.setNegativeButton(control.setText(context, R.string.NO),
					null);
			builder.show();
		}
		return super.onKeyDown(keyCode, event);
	}

}
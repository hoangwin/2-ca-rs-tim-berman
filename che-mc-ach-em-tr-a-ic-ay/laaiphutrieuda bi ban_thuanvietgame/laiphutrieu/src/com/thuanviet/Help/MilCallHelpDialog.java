package com.thuanviet.Help;

import java.util.ArrayList;
import java.util.Random;

import android.app.Dialog;
import android.content.Context;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.TextView;

import com.thuanviet.Ailatrieuphu.R;
import com.thuanviet.Others.ControlStatic;

public class MilCallHelpDialog extends Dialog {

	private Context context;
	private int answer;
	private int level;
	private Button[] Help = new Button[6];
	ControlStatic control;
	Mil50 mil50;

	public MilCallHelpDialog(Context context, int answer, int level, Mil50 mil50) {

		super(context);
		this.context = context;
		this.answer = answer;
		this.level = level;
		this.mil50 = mil50;
		control = new ControlStatic();

		setContentView(R.layout.call_dialog);
		setTitle(control.setText(context, R.string.CALLHELPTITLE));
		Help[0] = (Button) this.findViewById(R.id.Ngobaochau);
		Help[1] = (Button) this.findViewById(R.id.Anhxtanh);
		Help[2] = (Button) this.findViewById(R.id.LeVanLan);
		Help[3] = (Button) this.findViewById(R.id.KhongMinh);
		Help[4] = (Button) this.findViewById(R.id.BillGate);
		Help[5] = (Button) this.findViewById(R.id.Mark);
		for (int i = 0; i < Help.length; i++) {
			Help[i].setOnClickListener(new Help(i, this));
		}
	}

	public String answer(int answer, int level) {
		boolean temp = false;
		int thisAnswer = 0;
		boolean[] avai = mil50.getPlan();
		for (int j = 0; j < avai.length; j++) {
			if (avai[j] == false) {
				temp = true;
				break;
			}
		}
		Random generator = new Random();

		int max = 104 - level * 4;
		int min = 42 - level * 2;
		int random = min + (int) (Math.random() * ((max - min) + 1));
		if (random >= 52 - 2*level) {
			thisAnswer = answer;
		} else {
			ArrayList<Integer> list = new ArrayList<Integer>();
			list.add(1);
			list.add(2);
			list.add(3);
			list.add(4);
			if (!temp) {
				for (int j = 0; j < list.size(); j++) {
					if (answer == list.get(j)) {
						list.remove(j);
					}
				}
				int random2 = generator.nextInt(3);
				thisAnswer = list.get(random2);
			} else {
				for (int i = 0; i < 4; i++) {
					if (avai[list.get(i) - 1] == true && list.get(i) != answer)
						thisAnswer = list.get(i);
				}
			}
		}
		String dapan;
		dapan = ControlStatic.convertIDtoCase(thisAnswer);
		return dapan;
	}

	class Help implements View.OnClickListener {
		private int id;
		private Dialog dialog;

		public Help(int id, Dialog dialog) {
			this.id = id;
			this.dialog = dialog;
		}

		public void onClick(View v) {

			String dapan = null;
			dapan = answer(answer, level);
			dialog.dismiss();

			final Dialog help_dialog = new Dialog(context);
			help_dialog.requestWindowFeature(Window.FEATURE_NO_TITLE);
			help_dialog.setContentView(R.layout.inner_call_dialog);
			help_dialog.setTitle(null);
			TextView callHelp = (TextView) help_dialog.findViewById(R.id.help);
			switch (id) {
			case 0:
				callHelp.setText(control.setText(context,
						R.string.HELP_NGOBAOCHAU) + " " + dapan);
				break;
			case 1:
				callHelp.setText(control.setText(context,
						R.string.HELP_ANHXTANH) + " " + dapan);
				break;
			case 2:
				callHelp.setText(control.setText(context,
						R.string.HELP_LEVANLAN) + " " + dapan);
				break;
			case 3:
				callHelp.setText(control.setText(context,
						R.string.HELP_GIACATLUONG) + " " + dapan);
				break;
			case 4:
				callHelp.setText(control.setText(context,
						R.string.HELP_BILLGATE) + " " + dapan);
				break;
			case 5:
				callHelp.setText(control.setText(context, R.string.HELP_MARK)
						+ " " + dapan);
				break;
			}
			Button back = (Button) help_dialog.findViewById(R.id.back);
			back.setOnClickListener(new View.OnClickListener() {

				public void onClick(View v) {
					help_dialog.dismiss();
				}
			});
			help_dialog.show();

		}

	}

}

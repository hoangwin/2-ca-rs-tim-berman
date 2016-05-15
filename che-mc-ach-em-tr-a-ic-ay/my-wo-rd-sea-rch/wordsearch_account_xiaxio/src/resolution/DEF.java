package resolution;

import com.xiaxio.wordsearch.WordSearchActivity;

public class DEF
{
	//URL
	//type = 1->update or insert
	//type = 2 -> get leader Board
	public static String LEADER_BOARD_UPDATE = "http://caogia.byethost10.com/tapfruit.php?type=update";
	public static String LEADER_BOARD_SELECT = "http://caogia.byethost10.com/tapfruit.php?type=select";
	//frame
	//---------UI DPAD-----------
	public static int FRAME_BUTTON_NORMAL = 0;
	public static int FRAME_BUTTON_HIGHTLIGHT = 1;
	public static int FRAME_INFO_NORMAL = 2;
	public static int FRAME_INFO_HIGHTLIGHT = 3;
	public static int FRAME_LEADERBOARD_NORMAL = 4;
	public static int FRAME_LEADERBOARD_HIGHTLIGHT = 5;	
	public static int FRAME_OK_NORMAL = 6;
	public static int FRAME_OK_HIGHTLIGHT = 7;
	public static int FRAME_CANCEL_NORMAL = 8;
	public static int FRAME_CANCEL_HIGHTLIGHT = 9;
	public static int FRAME_PAUSE_NORMAL = 10;
	public static int FRAME_PAUSE_HIGHTLIGHT = 11;	
	public static int FRAME_RETRY_NORMAL = 12;
	public static int FRAME_RETRY_HIGHTLIGHT = 13;
	public static int FRAME_MAINMENU_NORMAL = 14;
	public static int FRAME_MAINMENU_HIGHTLIGHT = 15;
	public static int FRAME_QUIT_NORMAL = 16;
	public static int FRAME_QUIT_HIGHTLIGHT = 17;
	public static int FRAME_SOUND_ON_NORMAL = 18;
	public static int FRAME_SOUND_ON_HIGHTLIGHT = 19;
	public static int FRAME_SOUND_OFF_NORMAL = 20;
	public static int FRAME_SOUND_OFF_HIGHTLIGHT = 21;	
	public static int FRAME_BUTTON_LEFT_NORMAL = 22;
	public static int FRAME_BUTTON_LEFT_HIGHTLIGHT = 23;	
	
	public static int FRAME_BUTTON_RIGHT_NORMAL = 24;
	
	public static int FRAME_BUTTON_RIGHT_HIGHTLIGHT = 25;
	public static int FRAME_BUTTON_HINT_NORMAL = 26;
	public static int FRAME_BUTTON_HINT_HIGHTLIGHT = 27;
	public static int FRAME_TEXT_BAR = 28;		
	
	
	public static int FRAME_BUTTON_CUSTOM = 39;
	public static int FRAME_BUTTON_CUSTOM_HIGHTLIGHT = 40;
	
	//frame animal
	
	public static int FRAME_ROUND_1 = 16;
	public static int FRAME_ROUND_2 = 17;
	public static int FRAME_ROUND_3 = 18;
	public static int FRAME_ROUND_4 = 19;
	public static int FRAME_ROUND_5 = 20;
	public static int FRAME_ROUND_6 = 21;
	
	
	
	//end frame
//	public static int offset = -100;
	public static int DIALOG_BUTTON_CONFIRM_W = 93;
	public static int DIALOG_BUTTON_CONFIRM_H = 93;
	
	public static int DIALOG_ARROW_CONFIRM_W = 93;
	public static int DIALOG_ARROW_CONFIRM_H = 93;	

	
	public static int BUTTON_CANCEL_CONFIRM_W = 93;
	public static int BUTTON_CANCEL_CONFIRM_H = 93;
	
	
	
	//pause button
	public static int BUTTON_IGM_X = 20; 
	public static int BUTTON_IGM_Y = 50;	
	public static int BUTTON_IGM_W = 100; 
	public static int BUTTON_IGM_H = 100;
	
	public static int BUTTON_HINT_X = 20; 
	public static int BUTTON_HINT_Y = 150;
	public static int BUTTON_HINT_W = 100; 
	public static int BUTTON_HINT_H = 100;

	
	public static int LABEL_LEVEL_X = 5; 
	public static int LABEL_LEVEL_Y = -1;
	
	public static int LABEL_SCORE_X = 5; 
	public static int LABEL_SCORE_Y = 0;

	
	//align how to play
	public static int HOWTOPLAY_BACKGROUND_X =  0;
	public static int HOWTOPLAY_BACKGROUND_Y = 0;
	public static int HOWTOPLAY_BACKGROUND_W = WordSearchActivity.SCREEN_WIDTH ;
	public static int HOWTOPLAY_BACKGROUND_H = WordSearchActivity.SCREEN_HEIGHT;
	public static int HOWTOPLAY_BUTTON_W = 93;
	public static int HOWTOPLAY_BUTTON_H = 93;	
	public static int HOWTOPLAY_TITLE_X = WordSearchActivity.SCREEN_WIDTH/2; 
	public static int HOWTOPLAY_TITLE_Y = HOWTOPLAY_BACKGROUND_Y ;
	public static int HOWTOPLAY_CONTENT_X = HOWTOPLAY_BACKGROUND_X + 200; 
	public static int HOWTOPLAY_CONTENT_Y = HOWTOPLAY_TITLE_Y + 30;
	public static int HOWTOPLAY_CONTENT_SPACE_H = 45;
	public static int HOWTOPLAY_CONTENT_SPACE_W = 45;
		
	//align select level
	public static int SELECTLEVEL_BACKGROUND_X =  10;
	public static int SELECTLEVEL_BACKGROUND_Y = 10;
	public static int SELECTLEVEL_BACKGROUND_W = WordSearchActivity.SCREEN_WIDTH - 20;
	public static int SELECTLEVEL_BACKGROUND_H = WordSearchActivity.SCREEN_HEIGHT - 20;
	public static int SELECTLEVEL_TITLE_X = WordSearchActivity.SCREEN_WIDTH/2; 
	public static int SELECTLEVEL_TITLE_Y = SELECTLEVEL_BACKGROUND_Y;
	public static int SELECTLEVEL_CONTENT_SPACE_H = 15;
	public static int SELECTLEVEL_CONTENT_SPACE_W = 15;	
	
	
	public static int WINLOSE_BUTTON_X1 = 400;
	public static int WINLOSE_BUTTON_Y1 = 400;
	public static int WINLOSE_BUTTON_X2 = 700;
	public static int WINLOSE_BUTTON_Y2 = 400;
	public static int WINLOSE_BUTTON_X3 = 600;
	public static int WINLOSE_BUTTON_Y3 = 400;
		
	

}

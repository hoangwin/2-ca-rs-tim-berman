package com.thuanviet.onevs100;
import com.thuanviet.onevs100.R;

import java.util.HashMap;

import android.content.Context;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.media.MediaPlayer.OnCompletionListener;
import android.media.SoundPool;
import android.net.MailTo;
import android.test.IsolatedContext;

public class SoundManager {
 
	static private SoundManager _instance;
	private static SoundPool mSoundPool;
	public static MediaPlayer mMediaPlayer[];

	private static HashMap<Integer, Integer> mSoundPoolMap;
	private static int lastSoundSfxPlay = -1;
	private static AudioManager  mAudioManager;
	private static Context mContext;
	 public static int SOUND_TITLE = 0;
	 public static int SOUND_SELECT = 1;
	 public static int SOUND_BACK = 2;
	 
	 public static int SOUND_BEGIN = 3;
	 public static int SOUND_QUESTION_1 = 4;
	 public static int SOUND_QUESTION_2 = 5;
	 public static int SOUND_QUESTION_3 = 6;
	 public static int SOUND_QUESTION_4 = 7;
	 public static int SOUND_QUESTION_5 = 8;
	 public static int SOUND_QUESTION_6 = 9;
	 public static int SOUND_QUESTION_7 = 10;
	 public static int SOUND_QUESTION_8 = 11;
	 public static int SOUND_QUESTION_9 = 12;
	 public static int SOUND_QUESTION_10 = 13;
	 public static int SOUND_QUESTION_NEXT = 14;
	 //
	 public static int SOUND_ANSWER_A = 15;
	 public static int SOUND_ANSWER_B = 16;
	 public static int SOUND_ANSWER_C = 17;
	 //
	 public static int SOUND_ANSWER_RIGHT_A = 18;
	 public static int SOUND_ANSWER_RIGHT_B = 19;
	 public static int SOUND_ANSWER_RIGHT_C = 20;
	 //
	 public static int SOUND_ANSWER_WRONG_A = 21;
	 public static int SOUND_ANSWER_WRONG_B = 22;
	 public static int SOUND_ANSWER_WRONG_C = 23;
	 //ingame
	 public static int SOUND_LOOP_WHEN_ASK = 24;
	 
	 public static int SOUND_FAIL_ANSWER = 25;
	 //complete
	 public static int SOUND_COMPLETED_FAILD = 26;
	 public static int SOUND_COMPLETED_WIN = 27;
//loai bo ng choi
	 //complete
	 public static int SOUND_PERSOPN_FAILT_1 = 28;
	 public static int SOUND_PERSOPN_FAILT_2 = 29;
	 private SoundManager() 
	{
	}
 
	/**
	 * Requests the instance of the Sound Manager and creates it
	 * if it does not exist.
	 *
	 * @return Returns the single instance of the SoundManager
	 */
	static synchronized public SoundManager getInstance()
	{
	    if (_instance == null)
	      _instance = new SoundManager();
	    return _instance;
	 }
 
	/**
	 * Initialises the storage for the sounds
	 *
	 * @param theContext The Application context
	 */
	public static  void initSounds(Context theContext)
	{
		 mContext = theContext;
	     mSoundPool = new SoundPool(4, AudioManager.STREAM_MUSIC, 0);
	    // mMediaPlayer = new MediaPlayer();	     
	     mSoundPoolMap = new HashMap<Integer, Integer>();
	     mAudioManager = (AudioManager)mContext.getSystemService(Context.AUDIO_SERVICE);
	     try {
	    	 mMediaPlayer = new MediaPlayer[2];
	    	 mMediaPlayer[0] = MediaPlayer.create(DauTruong100.context,R.raw.title);
	    	 mMediaPlayer[1] = MediaPlayer.create(DauTruong100.context,R.raw.soundbgquestion);
	    	 
	    	 //mMediaPlayer[1] = MediaPlayer.create(DauTruong100.context, R.raw.game_background);
	          
	        } catch (Exception exception) {
	        }
	     
	} 
	public static void playsoundLoop(int index,boolean loop)
	{
		if(!DauTruong100.isEnableSound)
			return;
		mMediaPlayer[index].start();
		mMediaPlayer[index].setLooping(loop);
		mMediaPlayer[index].setOnCompletionListener(new OnCompletionListener() {

              public void onCompletion(MediaPlayer mp) {
                  mp.release();
                  mp = null;

              }
          });   
	    	 
	}
	public static void pausesoundLoop(int index)
	{
		if(mMediaPlayer[index] != null)
			if(mMediaPlayer[index].isPlaying())			
				mMediaPlayer[index].pause();
		
             
	    	 
	}
	/**
	 * Add a new Sound to the SoundPool
	 *
	 * @param Index - The Sound Index for Retrieval
	 * @param SoundID - The Android ID for the Sound asset.
	 */
	public static void addSound(int Index,int SoundID)
	{
		mSoundPoolMap.put(Index, mSoundPool.load(mContext, SoundID, 1));

	} 
	/**
	 * Loads the various sound assets
	 * Currently hardcoded but could easily be changed to be flexible.
	 */
	public static void loadSounds()
	{	
		mSoundPoolMap.put(SOUND_SELECT, mSoundPool.load(mContext, R.raw.select, 1));	
		mSoundPoolMap.put(SOUND_BACK, mSoundPool.load(mContext, R.raw.select, 1));
		mSoundPoolMap.put(SOUND_BEGIN, mSoundPool.load(mContext, R.raw.chaomung, 1));		
		//cau hoi
		mSoundPoolMap.put(SOUND_QUESTION_1, mSoundPool.load(mContext, R.raw.so1, 1));
		mSoundPoolMap.put(SOUND_QUESTION_2, mSoundPool.load(mContext, R.raw.so2, 1));
		mSoundPoolMap.put(SOUND_QUESTION_3, mSoundPool.load(mContext, R.raw.so3, 1));
		mSoundPoolMap.put(SOUND_QUESTION_4, mSoundPool.load(mContext, R.raw.so4, 1));
		mSoundPoolMap.put(SOUND_QUESTION_5, mSoundPool.load(mContext, R.raw.so5, 1));
		mSoundPoolMap.put(SOUND_QUESTION_6, mSoundPool.load(mContext, R.raw.so6, 1));
		mSoundPoolMap.put(SOUND_QUESTION_7, mSoundPool.load(mContext, R.raw.so7, 1));
		mSoundPoolMap.put(SOUND_QUESTION_8, mSoundPool.load(mContext, R.raw.so8, 1));
		mSoundPoolMap.put(SOUND_QUESTION_9, mSoundPool.load(mContext, R.raw.so9, 1));
		mSoundPoolMap.put(SOUND_QUESTION_10, mSoundPool.load(mContext, R.raw.so10, 1));
		mSoundPoolMap.put(SOUND_QUESTION_NEXT, mSoundPool.load(mContext, R.raw.cautiep, 1));
		
		//
		mSoundPoolMap.put(SOUND_ANSWER_A, mSoundPool.load(mContext, R.raw.dapan_a, 1));
		mSoundPoolMap.put(SOUND_ANSWER_B, mSoundPool.load(mContext, R.raw.dapan_b, 1));
		mSoundPoolMap.put(SOUND_ANSWER_C, mSoundPool.load(mContext, R.raw.dapan_c, 1));
		//
		mSoundPoolMap.put(SOUND_ANSWER_RIGHT_A, mSoundPool.load(mContext, R.raw.dung_a, 1));
		mSoundPoolMap.put(SOUND_ANSWER_RIGHT_B, mSoundPool.load(mContext, R.raw.dung_b, 1));
		mSoundPoolMap.put(SOUND_ANSWER_RIGHT_C, mSoundPool.load(mContext, R.raw.dung_c, 1));
		//
		mSoundPoolMap.put(SOUND_ANSWER_WRONG_A, mSoundPool.load(mContext, R.raw.sai_a, 1));
		mSoundPoolMap.put(SOUND_ANSWER_WRONG_B, mSoundPool.load(mContext, R.raw.sai_b, 1));
		mSoundPoolMap.put(SOUND_ANSWER_WRONG_C, mSoundPool.load(mContext, R.raw.sai_c, 1));
		//
		mSoundPoolMap.put(SOUND_COMPLETED_FAILD, mSoundPool.load(mContext, R.raw.ketthuc, 1));
		mSoundPoolMap.put(SOUND_COMPLETED_WIN, mSoundPool.load(mContext, R.raw.nguoichienthang, 1));
		//
		mSoundPoolMap.put(SOUND_PERSOPN_FAILT_1, mSoundPool.load(mContext, R.raw.loainguoichoi1, 1));
		mSoundPoolMap.put(SOUND_PERSOPN_FAILT_2, mSoundPool.load(mContext, R.raw.loainguoichoi2, 1));
		
		mSoundPoolMap.put(SOUND_FAIL_ANSWER, mSoundPool.load(mContext, R.raw.traloisai, 1));
		
		
		
		
		//mSoundPoolMap.put(SOUND_PAIR, mSoundPool.load(mContext,R.raw.pair, 1));
		//mSoundPoolMap.put(SOUND_BEGIN, mSoundPool.load(mContext,R.raw.begin, 1));		
		//mSoundPoolMap.put(SOUND_WIN, mSoundPool.load(mContext, R.raw.game_win, 1));				
		
	}
 
	/**
	 * Plays a Sound
	 *
	 * @param index - The Index of the Sound to be played
	 * @param speed - The Speed to play not, not currently used but included for compatibility
	 */
	public static void playSound(int index,float speed)
	{
		if(!DauTruong100.isEnableSound)
			return;
			lastSoundSfxPlay = index;
		     float streamVolume = mAudioManager.getStreamVolume(AudioManager.STREAM_MUSIC);
		     streamVolume = streamVolume / mAudioManager.getStreamMaxVolume(AudioManager.STREAM_MUSIC);
		  int i =    mSoundPool.play((Integer) mSoundPoolMap.get(index), streamVolume, streamVolume, 1, 0, speed);
		 
	}
	
	
	/**
	 * Stop a Sound
	 * @param index - index of the sound to be stopped
	 */
	public static void stopSound(int index)
	{
		mSoundPool.stop((Integer) mSoundPoolMap.get(index));
	}
	
	public static void stopLastSound()
	{
		if(lastSoundSfxPlay>=0)
			mSoundPool.stop((Integer) mSoundPoolMap.get(lastSoundSfxPlay));
	}
	
	/**
	 * Deallocates the resources and Instance of SoundManager
	 */
	public static void cleanup()
	{
		mSoundPool.release();
		mSoundPool = null;
	    mSoundPoolMap.clear();
	    mAudioManager.unloadSoundEffects();
	    _instance = null;
 
	}
 
}
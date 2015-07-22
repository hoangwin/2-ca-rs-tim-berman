using UnityEngine;
using UnityEngine.UI;
public class GUIManager : MonoBehaviour {
	
	public static GUIManager instance;
	
	public Text textCount;
	public Text textBestCount;
	public Text textCountOver;
	public Text textBestCountOver;
	public GameObject mainMenu, ingameMenu, gameOver;
	public static int state;
	public const int STATE_INIT = 0;
	public const int STATE_MAINMENU = 1;
	public const int STATE_PLAY = 2;
	public const int STATE_WATTING_OVER = 3;
	public const int STATE_OVER = 4;
	public Sprite imageOn;
	public Sprite imageOff;
	public Image imageMusic;
	public static float timeInSubState;
	
	public static bool firstShowAdsAtBegin = false;
	static public float timeShowAds = 0;
	void Start () {
		state = STATE_MAINMENU;
		instance = this;
		GameEventManager.GameReStart += GameStart;
		GameEventManager.GameStartEvent += GameStart;
		GameEventManager.GameOver += GameOver;
		mainMenu.SetActive (true);
		ingameMenu.SetActive (false);
		gameOver.SetActive (false);
		ScoreControl.init();
		ScoreControl.loadGame();
		instance.textBestCount.text = ScoreControl.score[0].NUM.ToString();
		//ShowADS();

	}
	public static void ShowADS()
	{
		Debug.Log(timeShowAds);
		if (timeShowAds > 90 || !firstShowAdsAtBegin)
		{
			Debug.Log("Ads");
			//Debug.Log("Ads1");
			if (!firstShowAdsAtBegin)
				firstShowAdsAtBegin = true;
			timeShowAds = 0;
			#if UNITY_ANDROID
            using (AndroidJavaClass jc = new AndroidJavaClass("com.impossible.twocarsocars.UnityPlayerNativeActivity"))
			{
				jc.CallStatic<int>("ShowAds");
			}
			
			#elif UNITY_WP8
			
			WP8Statics.ShowAds("");
			#elif UNITY_IOS
			IOsStatic.ShowAds(" ", " ");
			#endif
		}
	}
	void Update () {
		timeShowAds += Time.deltaTime; 
		if (Input.GetKeyDown(KeyCode.Escape))
		{
			if(state == STATE_MAINMENU)
			{
			Application.Quit();
			}
			else{
				MainMenuButtonPress();
			}

		}

		
		
	}
	
	private void GameStart () {
		state = STATE_PLAY;
		//		Debug.Log("bbbbbbbbbbbbbbbbb");
		mainMenu.SetActive (false);
		ingameMenu.SetActive (true);
		gameOver.SetActive (false);
		//enabled = false;
	}
	
	private void GameOver () {
		state = STATE_OVER;
		mainMenu.SetActive (false);
		gameOver.SetActive (true);
		ingameMenu.SetActive (false);
		ShowADS();
		
		//iTween.Stop ();
		//enabled = true;
	}
	


	public static void SetDistance(int score){
		instance.textCount.text = score.ToString();
	}

	public void playButtonPress()
	{
		SoundEngine.play(SoundEngine.instance.click);
		GameEventManager.TriggerGameStart();
	}
	public void replayButtonPress()
	{SoundEngine.play(SoundEngine.instance.click);
		GameEventManager.TriggerGameReStart();
	}
	public void MainMenuButtonPress()
	{
		state = STATE_MAINMENU;
		GamePlay.isMove = false;
		SoundEngine.play(SoundEngine.instance.click);
		//state = STATE_MAINMENU;
		Debug.Log ("aaaaaa");
		GameEventManager.TriggerGameInit();
		mainMenu.SetActive(true);
		ingameMenu.SetActive (false);
		gameOver.SetActive (false);
		instance.textBestCount.text = ScoreControl.score[0].NUM.ToString();
	}
	public void ButtonSoundPress()
	{
		SoundEngine.isSound = !SoundEngine.isSound;
		if (SoundEngine.isSound)
		{
			SoundEngine.instance.audioSource.enabled = true;
			SoundEngine.instance.music.enabled = true;
			imageMusic.sprite = imageOn;
		}
		else
		{
			SoundEngine.instance.audioSource.enabled =false;
			SoundEngine.instance.music.enabled = false;
			imageMusic.sprite = imageOff;
		}
		SoundEngine.play(SoundEngine.instance.click);
	}

    public void ButtonChangeDirection()
    {
        CameraFllow.instance.setCameraDirection(!CameraFllow.instance.is3D);
    }
	public void ButtonRatePress()
	{SoundEngine.play(SoundEngine.instance.click);
		//  SoundEngine.getInstance().PlayOneShot(SoundEngine.getInstance()._soundclick);
		#if UNITY_ANDROID
        Application.OpenURL("market://details?id=com.impossible.twocarsocars");
		#elif UNITY_WP8
		WP8Statics.RateApp("");
		#elif UNITY_IOS
    Application.OpenURL("https://itunes.apple.com/us/app/impossible-game-2-cars/id978563572?ls=1&mt=8");	
		
		//   IOsStatic.ShowAds(" ", " ");
		#endif
		
	}

}
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GamePlay : MonoBehaviour {
	
	//public GameObject BirdObject;
	

    public GameObject PanelMainMenu;
    public GameObject PanelInGame;
    public GameObject PanelOverGame;
    public GameObject PanelRaking;
    public GameObject PanelHowtoPlay;
    public Text textCounttimbet;
    public Text textBest;
    public Text textCurrent;

	public static float speedx = 0.06f ;
	public static GamePlay instance;
	public static int currentState = 0;
    public const int STATE_MENU = 0;
	public const int STATE_WATTING = 1;
	public const int STATE_PLAY = 2;
	public const int STATE_DROP = 3;
	public const int STATE_OVER = 4;
    
	public static float TimePlayedSubState = 0f;
	public static float TimelastCreateBird = 0f;

   
    public float timeBegin;

    public static bool firstShowAdsAtBegin = false;
    static public float timeShowAds = 0;
   // public Player player;	// Use this for initialization
    public int mCountTimber = 0;
	public GameObject bg;
	public Car car1;
	public Car car2;
	void Start () {			
        

		instance = this;
		//
        PanelMainMenu.SetActive(true);
        PanelInGame.SetActive(false);
        PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(false);

        currentState = STATE_MENU;
		restart ();

       
       
        ScoreControl.init();
		FixedBackground ();
		if (timeShowAds > 90 || !firstShowAdsAtBegin)
		{
			
			ShowADS();
			
		}
		
		timeBegin = 3;
	}
	
	public void FixedBackground(){
		float lUnityPlaneSize = 10.0f; // 10 for a Unity3d plane
		Camera lCamera = Camera.main;
			
			
		float lSizeY = lCamera.orthographicSize * 2.0f;
		float lSizeX = lSizeY * lCamera.aspect;
		Debug.Log (lSizeX / lUnityPlaneSize);
		bg.transform.localScale = new Vector3 (lSizeX / lUnityPlaneSize, 1, lSizeY / lUnityPlaneSize);
	}	
    public static void ShowADS()
    {
        Debug.Log(timeShowAds);
        if (timeShowAds > 120 || !firstShowAdsAtBegin)
        {
            Debug.Log("Ads");
            //Debug.Log("Ads1");
            if (!firstShowAdsAtBegin)
                firstShowAdsAtBegin = true;
            timeShowAds = 0;
#if UNITY_ANDROID
            using (AndroidJavaClass jc = new AndroidJavaClass("com.mygame.pianodash2.UnityPlayerNativeActivity"))
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

	// Update is called once per frame
    Vector3 fingerPos;
    bool isTouch;
	void Update () 
	{
		TimePlayedSubState += Time.deltaTime;
		if (Input.GetKeyDown (KeyCode.Escape)) {
          
            PanelMainMenu.SetActive(true);
            PanelInGame.SetActive(false);
            PanelHowtoPlay.SetActive(false);
            PanelOverGame.SetActive(false);
            PanelRaking.SetActive(false);
            if (currentState == STATE_MENU)
                Application.Quit();
            else
                currentState = STATE_MENU;
            restart();
		}

        if (currentState == STATE_PLAY || currentState == STATE_WATTING)
        {          
			if (Input.GetMouseButtonDown (0) )
            {

                isTouch = true;
                   fingerPos = Input.mousePosition;
            }
            if((Input.touchCount == 1) && Input.GetTouch(0).phase == TouchPhase.Began) {
                isTouch = true;
                fingerPos = Input.GetTouch(0).position;
            }
            
            if(isTouch)
            {
               
                if (currentState == STATE_WATTING)
                {
                   
                    currentState = STATE_PLAY;
                }
                timeBegin += 0.2f;
                    if(timeBegin>3)
                        timeBegin =3;
                if (fingerPos.x > (Screen.width / 2))
                {
					car2.ChangeLance();
						//  player.setAnimAttack(false);
                   
                  
                    
                    //    Debug.Log("1 :" + fingerPos);
                }
                else
                {
					car1.ChangeLance();
                 //   player.setAnimAttack(true);
                  
                   
                    //Debug.Log("2 :" + fingerPos);
                }

                isTouch = false;
              
			}		
		}


	}

	void FixedUpdate()
	{
        timeShowAds += Time.deltaTime; 

       
			if (GamePlay.currentState == GamePlay.STATE_PLAY) {
                timeBegin -= Time.deltaTime;
              //  if (timeBegin <= 0)
                {
               //     showGameOver();
                }
			}	
	}

	public void restart() 
	{
        mCountTimber = 0;
        textCounttimbet.text = mCountTimber.ToString();
        timeBegin = 3;
		car1.init ();
		car2.init ();
        if (currentState != STATE_MENU)
        {
           
            GamePlay.instance.PanelMainMenu.SetActive(false);
            GamePlay.instance.PanelHowtoPlay.SetActive(false);
            GamePlay.instance.PanelInGame.SetActive(true);
            GamePlay.instance.PanelOverGame.SetActive(false);
            GamePlay.instance.PanelRaking.SetActive(false);
          //  GamePlay.currentState = GamePlay.STATE_WATTING;
        }else
        {

        }
		while (MamagerTrap.list.Count >0) {
			GameObject.Destroy((GameObject)(MamagerTrap.list[0]));
			MamagerTrap.list.RemoveAt (0);
		}
      
      //  player.setAnimIDE(true);
		TimelastCreateBird = 0;
		TimePlayedSubState = 0;
       
		
	  
	}

	public void showGameOver()
	{ 
		currentState = STATE_OVER;
        SoundEngine.play(SoundEngine.instance.end);
        
      //GamePlay.instance.player.Anim.Play("MainMC_Destroy");
     //   GamePlay.instance.player.AnimEffect.Play("Effect_Destroy");
        
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(true);
        GamePlay.instance.PanelRaking.SetActive(false);
        GamePlay.currentState = GamePlay.STATE_OVER;
        ShowADS();
        ScoreControl.checkNewScore(mCountTimber);
        textBest.text = ScoreControl.score[0].NUM.ToString();
        textCurrent.text = mCountTimber.ToString();
        
        ScoreControl.saveGame();
        GamePlay.instance.PanelRaking.GetComponent<Raking>().setText();
        
        GamePlay.instance.PanelOverGame.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
       
        iTween.MoveFrom(GamePlay.instance.PanelOverGame, new Vector3(Screen.width / 2, 3*Screen.height/2, 0), 1);
        
	}
}

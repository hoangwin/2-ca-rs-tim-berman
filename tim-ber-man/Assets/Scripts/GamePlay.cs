using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GamePlay : MonoBehaviour {
	
	//public GameObject BirdObject;
	

    public GameObject PanelMainMenu;
    public GameObject PanelInGame;
    public GameObject PanelOverGame;
    public GameObject PanelRaking;
    public Text textCounttimbet;
    public Text textBest;
    public Text textCurrent;
	public GameObject ReadyAnim;
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

    public Slider sliderbar;
    public float timeBegin;


    public Player player;
	// Use this for initialization
    public int mCountTimber = 0;
	void Start () {			
        
		instance = this;
        ReadyAnim.SetActive(true);
        PanelMainMenu.SetActive(true);
        PanelInGame.SetActive(false);
        PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(false);

        currentState = STATE_MENU;
		restart ();
	

        timeBegin = 3;
        sliderbar.value = timeBegin;
        ScoreControl.init();
       
		
	}
	
	// Update is called once per frame
    Vector3 fingerPos;
    bool isTouch;
	void Update () 
	{
		TimePlayedSubState += Time.deltaTime;
		if (Input.GetKeyDown (KeyCode.Escape)) {
            ReadyAnim.SetActive(true);
            PanelMainMenu.SetActive(true);
            PanelInGame.SetActive(false);
            PanelOverGame.SetActive(false);
            PanelRaking.SetActive(false);
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
                    ReadyAnim.SetActive(false);
                    currentState = STATE_PLAY;
                }
                timeBegin += 0.2f;
                    if(timeBegin>3)
                        timeBegin =3;
                if (fingerPos.x > (Screen.width / 2))
                {
                    
                    player.setAnimAttack(false);
                   
                    Tree.instance.aattack(false);
                    
                    //    Debug.Log("1 :" + fingerPos);
                }
                else
                {
                    player.setAnimAttack(true);
                  
                    Tree.instance.aattack(true);
                    //Debug.Log("2 :" + fingerPos);
                }
                mCountTimber++;
                textCounttimbet.text = mCountTimber.ToString();
                isTouch = false;
              
			}		
		}


	}

	void FixedUpdate()
	{
      
        sliderbar.value = timeBegin;
			if (GamePlay.currentState == GamePlay.STATE_PLAY) {
                timeBegin -= Time.deltaTime;
                if (timeBegin <= 0)
                {
                    showGameOver();
                }
			}	
	}

	public void restart() 
	{
        mCountTimber = 0;
        textCounttimbet.text = mCountTimber.ToString();
        timeBegin = 3;
        if (currentState != STATE_MENU)
        {
            GamePlay.instance.ReadyAnim.SetActive(true);
            GamePlay.instance.PanelMainMenu.SetActive(false);
            GamePlay.instance.PanelInGame.SetActive(true);
            GamePlay.instance.PanelOverGame.SetActive(false);
            GamePlay.instance.PanelRaking.SetActive(false);
            GamePlay.currentState = GamePlay.STATE_WATTING;
        }else
        {

        }
        Tree.instance.init();
        player.setAnimIDE(true);
		TimelastCreateBird = 0;
		TimePlayedSubState = 0;
		
	  
	}

	public void showGameOver()
	{
        SoundEngine.play(SoundEngine.instance.end);
        
        GamePlay.instance.player.Anim.Play("MainMC_Destroy");
        GamePlay.instance.player.AnimEffect.Play("Effect_Destroy");
        GamePlay.instance.ReadyAnim.SetActive(true);
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(true);
        GamePlay.instance.PanelRaking.SetActive(false);
        GamePlay.currentState = GamePlay.STATE_OVER;

        ScoreControl.checkNewScore(mCountTimber);
        textBest.text = ScoreControl.score[0].NUM.ToString();
        textCurrent.text = mCountTimber.ToString();
        
        ScoreControl.saveGame();
        GamePlay.instance.PanelRaking.GetComponent<Raking>().setText();
        
        GamePlay.instance.PanelOverGame.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
       
        iTween.MoveFrom(GamePlay.instance.PanelOverGame, new Vector3(Screen.width / 2, 3*Screen.height/2, 0), 1);
        
	}
}

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ButtonControl : MonoBehaviour {

	// Use this for initialization
    public Sprite imageOn;
    public Sprite imageOff;
    public Image imageMusic;

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void PlayButtonPress()
	{
		SoundEngine.play(SoundEngine.instance.click);
          
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(true);
        GamePlay.instance.PanelRaking.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.currentState = GamePlay.STATE_PLAY;        
	}
	public void PlayInGameButtonPress()
	{
		SoundEngine.play(SoundEngine.instance.coins);
        GamePlay.instance.restart();
        PlayButtonPress();
	}
	public void ButtonMoreGamePress()
	{
		SoundEngine.play(SoundEngine.instance.click);
        Application.OpenURL("http://aegamemobile.com");
	//	Application.OpenURL ("market://details?id=com.mygame.squishybird");
		//Application.OpenURL ("http://details?id=com.game.pou.crappybee");
	}
	public void RankingButtonPress()
	{
		SoundEngine.play(SoundEngine.instance.click);
        GamePlay.currentState = GamePlay.STATE_MENU;
       
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(true);
        GamePlay.instance.PanelRaking.GetComponent<Raking> ().setText();
	}

    public void BackButtonPress()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GamePlay.currentState = GamePlay.STATE_MENU;

        GamePlay.instance.PanelMainMenu.SetActive(true);
        GamePlay.instance.PanelHowtoPlay.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(false);
    
    }

    public void HowtoPlayPress()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GamePlay.currentState = GamePlay.STATE_MENU;

        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelHowtoPlay.SetActive(true);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(false);

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


}

﻿using UnityEngine;
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
        GamePlay.instance.ReadyAnim.SetActive(true);        
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(true);
        GamePlay.instance.PanelRaking.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.currentState = GamePlay.STATE_WATTING;
	}
	public void PlayInGameButtonPress()
	{
        GamePlay.instance.restart();
        PlayButtonPress();
	}
	public void ButtonMoreGamePress()
	{
		Application.OpenURL ("market://details?id=com.mygame.squishybird");
		//Application.OpenURL ("http://details?id=com.game.pou.crappybee");
	}
	public void RankingButtonPress()
	{
        GamePlay.currentState = GamePlay.STATE_MENU;
        GamePlay.instance.ReadyAnim.SetActive(true);
        GamePlay.instance.PanelMainMenu.SetActive(false);
        GamePlay.instance.PanelInGame.SetActive(false);
        GamePlay.instance.PanelOverGame.SetActive(false);
        GamePlay.instance.PanelRaking.SetActive(true);
        GamePlay.instance.PanelRaking.GetComponent<Raking> ().setText();
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
        
	}


}

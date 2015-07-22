#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.UI.Text
struct Text_t296;
// GamePlay
struct GamePlay_t297;
// UnityEngine.UI.Slider
struct Slider_t298;
// Player
struct Player_t299;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GamePlay
struct  GamePlay_t297  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject GamePlay::PanelMainMenu
	GameObject_t23 * ___PanelMainMenu_7;
	// UnityEngine.GameObject GamePlay::PanelInGame
	GameObject_t23 * ___PanelInGame_8;
	// UnityEngine.GameObject GamePlay::PanelOverGame
	GameObject_t23 * ___PanelOverGame_9;
	// UnityEngine.GameObject GamePlay::PanelRaking
	GameObject_t23 * ___PanelRaking_10;
	// UnityEngine.UI.Text GamePlay::textCounttimbet
	Text_t296 * ___textCounttimbet_11;
	// UnityEngine.UI.Text GamePlay::textBest
	Text_t296 * ___textBest_12;
	// UnityEngine.UI.Text GamePlay::textCurrent
	Text_t296 * ___textCurrent_13;
	// UnityEngine.GameObject GamePlay::ReadyAnim
	GameObject_t23 * ___ReadyAnim_14;
	// UnityEngine.UI.Slider GamePlay::sliderbar
	Slider_t298 * ___sliderbar_20;
	// System.Single GamePlay::timeBegin
	float ___timeBegin_21;
	// Player GamePlay::player
	Player_t299 * ___player_24;
	// System.Int32 GamePlay::mCountTimber
	int32_t ___mCountTimber_25;
	// UnityEngine.Vector3 GamePlay::fingerPos
	Vector3_t10  ___fingerPos_26;
	// System.Boolean GamePlay::isTouch
	bool ___isTouch_27;
};
struct GamePlay_t297_StaticFields{
	// System.Single GamePlay::speedx
	float ___speedx_15;
	// GamePlay GamePlay::instance
	GamePlay_t297 * ___instance_16;
	// System.Int32 GamePlay::currentState
	int32_t ___currentState_17;
	// System.Single GamePlay::TimePlayedSubState
	float ___TimePlayedSubState_18;
	// System.Single GamePlay::TimelastCreateBird
	float ___TimelastCreateBird_19;
	// System.Boolean GamePlay::firstShowAdsAtBegin
	bool ___firstShowAdsAtBegin_22;
	// System.Single GamePlay::timeShowAds
	float ___timeShowAds_23;
};

#pragma once
#include <stdint.h>
// BetterList`1<UIToggle>
struct BetterList_1_t152;
// UIToggle
struct UIToggle_t138;
// UIWidget
struct UIWidget_t83;
// UnityEngine.Animation
struct Animation_t121;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UnityEngine.Transform
struct Transform_t32;
// UISprite
struct UISprite_t72;
// UnityEngine.GameObject
struct GameObject_t23;
// System.String
struct String_t;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIToggle
struct  UIToggle_t138  : public UIWidgetContainer_t84
{
	// System.Int32 UIToggle::group
	int32_t ___group_4;
	// UIWidget UIToggle::activeSprite
	UIWidget_t83 * ___activeSprite_5;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t121 * ___activeAnimation_6;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive_7;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween_8;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone_9;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t80 * ___onChange_10;
	// UnityEngine.Transform UIToggle::radioButtonRoot
	Transform_t32 * ___radioButtonRoot_11;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked_12;
	// UISprite UIToggle::checkSprite
	UISprite_t72 * ___checkSprite_13;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t121 * ___checkAnimation_14;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t23 * ___eventReceiver_15;
	// System.String UIToggle::functionName
	String_t* ___functionName_16;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive_17;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted_18;
};
struct UIToggle_t138_StaticFields{
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t152 * ___list_2;
	// UIToggle UIToggle::current
	UIToggle_t138 * ___current_3;
};

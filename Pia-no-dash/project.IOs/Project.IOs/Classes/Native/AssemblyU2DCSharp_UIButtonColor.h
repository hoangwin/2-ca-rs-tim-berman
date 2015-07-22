#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t23;
// UIWidget
struct UIWidget_t83;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIButtonColor
struct  UIButtonColor_t81  : public UIWidgetContainer_t84
{
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t23 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t9  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t9  ___pressed_4;
	// System.Single UIButtonColor::duration
	float ___duration_5;
	// UnityEngine.Color UIButtonColor::mColor
	Color_t9  ___mColor_6;
	// System.Boolean UIButtonColor::mStarted
	bool ___mStarted_7;
	// UIWidget UIButtonColor::mWidget
	UIWidget_t83 * ___mWidget_8;
};

#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t83;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Light
struct Light_t50;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// TweenColor
struct  TweenColor_t222  : public UITweener_t221
{
	// UnityEngine.Color TweenColor::from
	Color_t9  ___from_19;
	// UnityEngine.Color TweenColor::to
	Color_t9  ___to_20;
	// System.Boolean TweenColor::mCached
	bool ___mCached_21;
	// UIWidget TweenColor::mWidget
	UIWidget_t83 * ___mWidget_22;
	// UnityEngine.Material TweenColor::mMat
	Material_t57 * ___mMat_23;
	// UnityEngine.Light TweenColor::mLight
	Light_t50 * ___mLight_24;
};

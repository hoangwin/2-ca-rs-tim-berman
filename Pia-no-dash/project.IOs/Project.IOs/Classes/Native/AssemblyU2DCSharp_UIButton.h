#pragma once
#include <stdint.h>
// UIButton
struct UIButton_t79;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UIButtonColor
#include "AssemblyU2DCSharp_UIButtonColor.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIButton
struct  UIButton_t79  : public UIButtonColor_t81
{
	// UnityEngine.Color UIButton::disabledColor
	Color_t9  ___disabledColor_10;
	// System.Boolean UIButton::dragHighlight
	bool ___dragHighlight_11;
	// System.Collections.Generic.List`1<EventDelegate> UIButton::onClick
	List_1_t80 * ___onClick_12;
};
struct UIButton_t79_StaticFields{
	// UIButton UIButton::current
	UIButton_t79 * ___current_9;
};

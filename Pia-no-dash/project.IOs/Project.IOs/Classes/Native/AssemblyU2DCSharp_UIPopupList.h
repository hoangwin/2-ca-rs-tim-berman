#pragma once
#include <stdint.h>
// UIPopupList
struct UIPopupList_t77;
// UIAtlas
struct UIAtlas_t129;
// UIFont
struct UIFont_t130;
// UnityEngine.Font
struct Font_t131;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t132;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UIPanel
struct UIPanel_t94;
// UnityEngine.GameObject
struct GameObject_t23;
// UISprite
struct UISprite_t72;
// UILabel
struct UILabel_t133;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t134;
// UIPopupList/LegacyEvent
struct LegacyEvent_t128;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UIPopupList/Position
#include "AssemblyU2DCSharp_UIPopupList_Position.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIPopupList
struct  UIPopupList_t77  : public UIWidgetContainer_t84
{
	// UIAtlas UIPopupList::atlas
	UIAtlas_t129 * ___atlas_4;
	// UIFont UIPopupList::bitmapFont
	UIFont_t130 * ___bitmapFont_5;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t131 * ___trueTypeFont_6;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_7;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_8;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_9;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_10;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_11;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t132 * ___items_12;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t27  ___padding_13;
	// UnityEngine.Color UIPopupList::textColor
	Color_t9  ___textColor_14;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t9  ___backgroundColor_15;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t9  ___highlightColor_16;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_17;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_18;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t80 * ___onChange_19;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_20;
	// UIPanel UIPopupList::mPanel
	UIPanel_t94 * ___mPanel_21;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t23 * ___mChild_22;
	// UISprite UIPopupList::mBackground
	UISprite_t72 * ___mBackground_23;
	// UISprite UIPopupList::mHighlight
	UISprite_t72 * ___mHighlight_24;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t133 * ___mHighlightedLabel_25;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t134 * ___mLabelList_26;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_27;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t23 * ___eventReceiver_28;
	// System.String UIPopupList::functionName
	String_t* ___functionName_29;
	// System.Single UIPopupList::textScale
	float ___textScale_30;
	// UIFont UIPopupList::font
	UIFont_t130 * ___font_31;
	// UILabel UIPopupList::textLabel
	UILabel_t133 * ___textLabel_32;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t128 * ___mLegacyEvent_33;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_34;
};
struct UIPopupList_t77_StaticFields{
	// UIPopupList UIPopupList::current
	UIPopupList_t77 * ___current_3;
};

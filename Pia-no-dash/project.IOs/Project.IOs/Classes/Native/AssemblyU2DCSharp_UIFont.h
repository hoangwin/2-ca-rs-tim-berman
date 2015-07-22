#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t57;
// BMFont
struct BMFont_t164;
// UIAtlas
struct UIAtlas_t129;
// UIFont
struct UIFont_t130;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t260;
// UnityEngine.Font
struct Font_t131;
// UISpriteData
struct UISpriteData_t167;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t180;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UIFont
struct  UIFont_t130  : public MonoBehaviour_t2
{
	// UnityEngine.Material UIFont::mMat
	Material_t57 * ___mMat_2;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t31  ___mUVRect_3;
	// BMFont UIFont::mFont
	BMFont_t164 * ___mFont_4;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t129 * ___mAtlas_5;
	// UIFont UIFont::mReplacement
	UIFont_t130 * ___mReplacement_6;
	// System.Single UIFont::mPixelSize
	float ___mPixelSize_7;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t260 * ___mSymbols_8;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t131 * ___mDynamicFont_9;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize_10;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle_11;
	// UISpriteData UIFont::mSprite
	UISpriteData_t167 * ___mSprite_12;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA_13;
	// System.Boolean UIFont::mSpriteSet
	bool ___mSpriteSet_14;
};
struct UIFont_t130_StaticFields{
	// BetterList`1<UnityEngine.Color> UIFont::mColors
	BetterList_1_t180 * ___mColors_15;
	// UnityEngine.Color32 UIFont::s_c0
	Color32_t183  ___s_c0_16;
	// UnityEngine.Color32 UIFont::s_c1
	Color32_t183  ___s_c1_17;
};

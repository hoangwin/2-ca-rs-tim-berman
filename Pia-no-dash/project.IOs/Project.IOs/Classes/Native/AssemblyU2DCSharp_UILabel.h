#pragma once
#include <stdint.h>
// UnityEngine.Font
struct Font_t131;
// UIFont
struct UIFont_t130;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t57;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UILabel/Crispness
#include "AssemblyU2DCSharp_UILabel_Crispness.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UILabel/Effect
#include "AssemblyU2DCSharp_UILabel_Effect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// NGUIText/SymbolStyle
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UILabel/Overflow
#include "AssemblyU2DCSharp_UILabel_Overflow.h"
// UILabel
struct  UILabel_t133  : public UIWidget_t83
{
	// UILabel/Crispness UILabel::keepCrispWhenShrunk
	int32_t ___keepCrispWhenShrunk_40;
	// UnityEngine.Font UILabel::mTrueTypeFont
	Font_t131 * ___mTrueTypeFont_41;
	// UIFont UILabel::mFont
	UIFont_t130 * ___mFont_42;
	// System.String UILabel::mText
	String_t* ___mText_43;
	// System.Int32 UILabel::mFontSize
	int32_t ___mFontSize_44;
	// UnityEngine.FontStyle UILabel::mFontStyle
	int32_t ___mFontStyle_45;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_46;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_47;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_48;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t9  ___mEffectColor_49;
	// NGUIText/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_50;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t27  ___mEffectDistance_51;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow_52;
	// UnityEngine.Material UILabel::mMaterial
	Material_t57 * ___mMaterial_53;
	// System.Boolean UILabel::mApplyGradient
	bool ___mApplyGradient_54;
	// UnityEngine.Color UILabel::mGradientTop
	Color_t9  ___mGradientTop_55;
	// UnityEngine.Color UILabel::mGradientBottom
	Color_t9  ___mGradientBottom_56;
	// System.Int32 UILabel::mSpacingX
	int32_t ___mSpacingX_57;
	// System.Int32 UILabel::mSpacingY
	int32_t ___mSpacingY_58;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_59;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_60;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_61;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_62;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_63;
	// UnityEngine.Font UILabel::mActiveTTF
	Font_t131 * ___mActiveTTF_64;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_65;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_66;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_67;
	// UnityEngine.Vector2 UILabel::mCalculatedSize
	Vector2_t27  ___mCalculatedSize_68;
	// System.Single UILabel::mScale
	float ___mScale_69;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth_70;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight_71;
	// System.Int32 UILabel::mPrintedSize
	int32_t ___mPrintedSize_72;
};

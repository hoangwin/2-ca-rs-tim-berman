#pragma once
#include <stdint.h>
// UIAtlas
struct UIAtlas_t129;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t167;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t26;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UISprite
struct  UISprite_t72  : public UIWidget_t83
{
	// UIAtlas UISprite::mAtlas
	UIAtlas_t129 * ___mAtlas_40;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_41;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_42;
	// UISprite/Type UISprite::mType
	int32_t ___mType_43;
	// UISprite/FillDirection UISprite::mFillDirection
	int32_t ___mFillDirection_44;
	// System.Single UISprite::mFillAmount
	float ___mFillAmount_45;
	// System.Boolean UISprite::mInvert
	bool ___mInvert_46;
	// UISpriteData UISprite::mSprite
	UISpriteData_t167 * ___mSprite_47;
	// UnityEngine.Rect UISprite::mInnerUV
	Rect_t31  ___mInnerUV_48;
	// UnityEngine.Rect UISprite::mOuterUV
	Rect_t31  ___mOuterUV_49;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_50;
};
struct UISprite_t72_StaticFields{
	// UnityEngine.Vector2[] UISprite::mTempPos
	Vector2U5BU5D_t26* ___mTempPos_51;
	// UnityEngine.Vector2[] UISprite::mTempUVs
	Vector2U5BU5D_t26* ___mTempUVs_52;
};

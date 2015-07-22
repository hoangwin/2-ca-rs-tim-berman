#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t57;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t241;
// UIAtlas
struct UIAtlas_t129;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t242;
// System.Comparison`1<UISpriteData>
struct Comparison_1_t243;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAtlas/Coordinates
#include "AssemblyU2DCSharp_UIAtlas_Coordinates.h"
// UIAtlas
struct  UIAtlas_t129  : public MonoBehaviour_t2
{
	// UnityEngine.Material UIAtlas::material
	Material_t57 * ___material_2;
	// System.Collections.Generic.List`1<UISpriteData> UIAtlas::mSprites
	List_1_t241 * ___mSprites_3;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_4;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t129 * ___mReplacement_5;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_6;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t242 * ___sprites_7;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_8;
};
struct UIAtlas_t129_StaticFields{
	// System.Comparison`1<UISpriteData> UIAtlas::<>f__am$cache7
	Comparison_1_t243 * ___U3CU3Ef__amU24cache7_9;
};

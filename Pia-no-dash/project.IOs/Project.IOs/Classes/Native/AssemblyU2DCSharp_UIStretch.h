#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.GameObject
struct GameObject_t23;
// UIWidget
struct UIWidget_t83;
// UnityEngine.Transform
struct Transform_t32;
// UISprite
struct UISprite_t72;
// UIPanel
struct UIPanel_t94;
// UIRoot
struct UIRoot_t101;
// UnityEngine.Animation
struct Animation_t121;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIStretch/Style
#include "AssemblyU2DCSharp_UIStretch_Style.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIStretch
struct  UIStretch_t282  : public MonoBehaviour_t2
{
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t113 * ___uiCamera_2;
	// UnityEngine.GameObject UIStretch::container
	GameObject_t23 * ___container_3;
	// UIStretch/Style UIStretch::style
	int32_t ___style_4;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t27  ___relativeSize_6;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t27  ___initialSize_7;
	// UnityEngine.Vector2 UIStretch::borderPadding
	Vector2_t27  ___borderPadding_8;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t83 * ___widgetContainer_9;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t32 * ___mTrans_10;
	// UIWidget UIStretch::mWidget
	UIWidget_t83 * ___mWidget_11;
	// UISprite UIStretch::mSprite
	UISprite_t72 * ___mSprite_12;
	// UIPanel UIStretch::mPanel
	UIPanel_t94 * ___mPanel_13;
	// UIRoot UIStretch::mRoot
	UIRoot_t101 * ___mRoot_14;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t121 * ___mAnim_15;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t31  ___mRect_16;
	// System.Boolean UIStretch::mStarted
	bool ___mStarted_17;
};

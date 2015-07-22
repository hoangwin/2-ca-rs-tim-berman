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
// UnityEngine.Animation
struct Animation_t121;
// UIRoot
struct UIRoot_t101;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAnchor/Side
#include "AssemblyU2DCSharp_UIAnchor_Side.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIAnchor
struct  UIAnchor_t238  : public MonoBehaviour_t2
{
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t113 * ___uiCamera_2;
	// UnityEngine.GameObject UIAnchor::container
	GameObject_t23 * ___container_3;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side_4;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t27  ___relativeOffset_6;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t27  ___pixelOffset_7;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t83 * ___widgetContainer_8;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t32 * ___mTrans_9;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t121 * ___mAnim_10;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t31  ___mRect_11;
	// UIRoot UIAnchor::mRoot
	UIRoot_t101 * ___mRoot_12;
	// System.Boolean UIAnchor::mStarted
	bool ___mStarted_13;
};

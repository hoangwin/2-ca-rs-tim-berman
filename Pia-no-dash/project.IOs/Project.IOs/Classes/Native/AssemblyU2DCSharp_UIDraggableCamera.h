#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Camera
struct Camera_t113;
// UIRoot
struct UIRoot_t101;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDraggableCamera
struct  UIDraggableCamera_t96  : public MonoBehaviour_t2
{
	// UnityEngine.Transform UIDraggableCamera::rootForBounds
	Transform_t32 * ___rootForBounds_2;
	// UnityEngine.Vector2 UIDraggableCamera::scale
	Vector2_t27  ___scale_3;
	// System.Single UIDraggableCamera::scrollWheelFactor
	float ___scrollWheelFactor_4;
	// UIDragObject/DragEffect UIDraggableCamera::dragEffect
	int32_t ___dragEffect_5;
	// System.Boolean UIDraggableCamera::smoothDragStart
	bool ___smoothDragStart_6;
	// System.Single UIDraggableCamera::momentumAmount
	float ___momentumAmount_7;
	// UnityEngine.Camera UIDraggableCamera::mCam
	Camera_t113 * ___mCam_8;
	// UnityEngine.Transform UIDraggableCamera::mTrans
	Transform_t32 * ___mTrans_9;
	// System.Boolean UIDraggableCamera::mPressed
	bool ___mPressed_10;
	// UnityEngine.Vector2 UIDraggableCamera::mMomentum
	Vector2_t27  ___mMomentum_11;
	// UnityEngine.Bounds UIDraggableCamera::mBounds
	Bounds_t111  ___mBounds_12;
	// System.Single UIDraggableCamera::mScroll
	float ___mScroll_13;
	// UIRoot UIDraggableCamera::mRoot
	UIRoot_t101 * ___mRoot_14;
	// System.Boolean UIDraggableCamera::mDragStarted
	bool ___mDragStarted_15;
};

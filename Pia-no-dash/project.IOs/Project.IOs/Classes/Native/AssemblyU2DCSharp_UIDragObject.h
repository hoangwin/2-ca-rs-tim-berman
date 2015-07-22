#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UIRect
struct UIRect_t108;
// UIPanel
struct UIPanel_t94;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDragObject
struct  UIDragObject_t109  : public MonoBehaviour_t2
{
	// UnityEngine.Transform UIDragObject::target
	Transform_t32 * ___target_2;
	// UnityEngine.Vector3 UIDragObject::scrollMomentum
	Vector3_t10  ___scrollMomentum_3;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_4;
	// UIRect UIDragObject::contentRect
	UIRect_t108 * ___contentRect_5;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_6;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_7;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t10  ___scale_8;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t110  ___mPlane_10;
	// UnityEngine.Vector3 UIDragObject::mTargetPos
	Vector3_t10  ___mTargetPos_11;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t10  ___mLastPos_12;
	// UIPanel UIDragObject::mPanel
	UIPanel_t94 * ___mPanel_13;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_14;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t10  ___mMomentum_15;
	// UnityEngine.Vector3 UIDragObject::mScroll
	Vector3_t10  ___mScroll_16;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t111  ___mBounds_17;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_18;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_19;
};

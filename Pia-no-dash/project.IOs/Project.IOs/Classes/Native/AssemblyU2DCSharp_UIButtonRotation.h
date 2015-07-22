#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UIButtonRotation
struct  UIButtonRotation_t89  : public MonoBehaviour_t2
{
	// UnityEngine.Transform UIButtonRotation::tweenTarget
	Transform_t32 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonRotation::hover
	Vector3_t10  ___hover_3;
	// UnityEngine.Vector3 UIButtonRotation::pressed
	Vector3_t10  ___pressed_4;
	// System.Single UIButtonRotation::duration
	float ___duration_5;
	// UnityEngine.Quaternion UIButtonRotation::mRot
	Quaternion_t60  ___mRot_6;
	// System.Boolean UIButtonRotation::mStarted
	bool ___mStarted_7;
};

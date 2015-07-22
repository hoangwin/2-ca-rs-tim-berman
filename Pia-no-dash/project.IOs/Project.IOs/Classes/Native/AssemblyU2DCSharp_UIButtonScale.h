#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonScale
struct  UIButtonScale_t90  : public MonoBehaviour_t2
{
	// UnityEngine.Transform UIButtonScale::tweenTarget
	Transform_t32 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonScale::hover
	Vector3_t10  ___hover_3;
	// UnityEngine.Vector3 UIButtonScale::pressed
	Vector3_t10  ___pressed_4;
	// System.Single UIButtonScale::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonScale::mScale
	Vector3_t10  ___mScale_6;
	// System.Boolean UIButtonScale::mStarted
	bool ___mStarted_7;
};

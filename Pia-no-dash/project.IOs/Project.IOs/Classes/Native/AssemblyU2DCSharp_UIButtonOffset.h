#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonOffset
struct  UIButtonOffset_t88  : public MonoBehaviour_t2
{
	// UnityEngine.Transform UIButtonOffset::tweenTarget
	Transform_t32 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonOffset::hover
	Vector3_t10  ___hover_3;
	// UnityEngine.Vector3 UIButtonOffset::pressed
	Vector3_t10  ___pressed_4;
	// System.Single UIButtonOffset::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonOffset::mPos
	Vector3_t10  ___mPos_6;
	// System.Boolean UIButtonOffset::mStarted
	bool ___mStarted_7;
};

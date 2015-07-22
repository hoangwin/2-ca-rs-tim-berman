#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t23;
// System.String
struct String_t;
// SpringPosition/OnFinished
struct OnFinished_t219;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPosition
struct  SpringPosition_t218  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t10  ___target_2;
	// System.Single SpringPosition::strength
	float ___strength_3;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace_4;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale_5;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t23 * ___eventReceiver_6;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished_7;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t219 * ___onFinished_8;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t32 * ___mTrans_9;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold_10;
};

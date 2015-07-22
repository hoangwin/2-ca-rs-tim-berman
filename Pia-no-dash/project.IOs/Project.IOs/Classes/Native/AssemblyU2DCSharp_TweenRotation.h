#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenRotation
struct  TweenRotation_t227  : public UITweener_t221
{
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t10  ___from_19;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t10  ___to_20;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t32 * ___mTrans_21;
};

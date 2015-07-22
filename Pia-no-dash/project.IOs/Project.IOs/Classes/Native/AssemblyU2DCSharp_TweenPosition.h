#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenPosition
struct  TweenPosition_t226  : public UITweener_t221
{
	// UnityEngine.Vector3 TweenPosition::from
	Vector3_t10  ___from_19;
	// UnityEngine.Vector3 TweenPosition::to
	Vector3_t10  ___to_20;
	// UnityEngine.Transform TweenPosition::mTrans
	Transform_t32 * ___mTrans_21;
};

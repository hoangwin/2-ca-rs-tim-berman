#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TweenTransform
struct  TweenTransform_t229  : public UITweener_t221
{
	// UnityEngine.Transform TweenTransform::from
	Transform_t32 * ___from_19;
	// UnityEngine.Transform TweenTransform::to
	Transform_t32 * ___to_20;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished_21;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t32 * ___mTrans_22;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t10  ___mPos_23;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t60  ___mRot_24;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t10  ___mScale_25;
};

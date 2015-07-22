#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UITable
struct UITable_t103;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenScale
struct  TweenScale_t228  : public UITweener_t221
{
	// UnityEngine.Vector3 TweenScale::from
	Vector3_t10  ___from_19;
	// UnityEngine.Vector3 TweenScale::to
	Vector3_t10  ___to_20;
	// System.Boolean TweenScale::updateTable
	bool ___updateTable_21;
	// UnityEngine.Transform TweenScale::mTrans
	Transform_t32 * ___mTrans_22;
	// UITable TweenScale::mTable
	UITable_t103 * ___mTable_23;
};

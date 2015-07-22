#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t83;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIDragResize
struct  UIDragResize_t112  : public MonoBehaviour_t2
{
	// UIWidget UIDragResize::target
	UIWidget_t83 * ___target_2;
	// UIWidget/Pivot UIDragResize::pivot
	int32_t ___pivot_3;
	// System.Int32 UIDragResize::minWidth
	int32_t ___minWidth_4;
	// System.Int32 UIDragResize::minHeight
	int32_t ___minHeight_5;
	// UnityEngine.Plane UIDragResize::mPlane
	Plane_t110  ___mPlane_6;
	// UnityEngine.Vector3 UIDragResize::mRayPos
	Vector3_t10  ___mRayPos_7;
	// UnityEngine.Vector3 UIDragResize::mLocalPos
	Vector3_t10  ___mLocalPos_8;
	// System.Int32 UIDragResize::mWidth
	int32_t ___mWidth_9;
	// System.Int32 UIDragResize::mHeight
	int32_t ___mHeight_10;
	// System.Boolean UIDragResize::mDragging
	bool ___mDragging_11;
};

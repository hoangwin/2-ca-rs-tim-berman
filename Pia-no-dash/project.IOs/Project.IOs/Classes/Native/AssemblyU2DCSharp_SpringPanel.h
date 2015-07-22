#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t91;
// UIPanel
struct UIPanel_t94;
// UnityEngine.Transform
struct Transform_t32;
// UIScrollView
struct UIScrollView_t92;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPanel
struct  SpringPanel_t187  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t10  ___target_2;
	// System.Single SpringPanel::strength
	float ___strength_3;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t91 * ___onFinished_4;
	// UIPanel SpringPanel::mPanel
	UIPanel_t94 * ___mPanel_5;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t32 * ___mTrans_6;
	// System.Single SpringPanel::mThreshold
	float ___mThreshold_7;
	// UIScrollView SpringPanel::mDrag
	UIScrollView_t92 * ___mDrag_8;
};

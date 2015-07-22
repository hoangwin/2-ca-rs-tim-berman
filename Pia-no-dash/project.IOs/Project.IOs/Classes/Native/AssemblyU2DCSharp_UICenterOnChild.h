#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t91;
// UIScrollView
struct UIScrollView_t92;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICenterOnChild
struct  UICenterOnChild_t93  : public MonoBehaviour_t2
{
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// System.Single UICenterOnChild::nextPageThreshold
	float ___nextPageThreshold_3;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t91 * ___onFinished_4;
	// UIScrollView UICenterOnChild::mDrag
	UIScrollView_t92 * ___mDrag_5;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t23 * ___mCenteredObject_6;
};

#pragma once
#include <stdint.h>
// ActiveAnimation
struct ActiveAnimation_t157;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UnityEngine.GameObject
struct GameObject_t23;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t121;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// ActiveAnimation
struct  ActiveAnimation_t157  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<EventDelegate> ActiveAnimation::onFinished
	List_1_t80 * ___onFinished_3;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t23 * ___eventReceiver_4;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished_5;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t121 * ___mAnim_6;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection_7;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection_8;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify_9;
};
struct ActiveAnimation_t157_StaticFields{
	// ActiveAnimation ActiveAnimation::current
	ActiveAnimation_t157 * ___current_2;
};

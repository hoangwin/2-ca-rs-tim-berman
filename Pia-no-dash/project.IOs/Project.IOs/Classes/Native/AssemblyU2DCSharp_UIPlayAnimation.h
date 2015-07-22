#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t121;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AnimationOrTween.Trigger
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"
// UIPlayAnimation
struct  UIPlayAnimation_t122  : public MonoBehaviour_t2
{
	// UnityEngine.Animation UIPlayAnimation::target
	Animation_t121 * ___target_2;
	// System.String UIPlayAnimation::clipName
	String_t* ___clipName_3;
	// AnimationOrTween.Trigger UIPlayAnimation::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIPlayAnimation::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIPlayAnimation::resetOnPlay
	bool ___resetOnPlay_6;
	// System.Boolean UIPlayAnimation::clearSelection
	bool ___clearSelection_7;
	// AnimationOrTween.EnableCondition UIPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_8;
	// AnimationOrTween.DisableCondition UIPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_9;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayAnimation::onFinished
	List_1_t80 * ___onFinished_10;
	// UnityEngine.GameObject UIPlayAnimation::eventReceiver
	GameObject_t23 * ___eventReceiver_11;
	// System.String UIPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_12;
	// System.Boolean UIPlayAnimation::mStarted
	bool ___mStarted_13;
	// System.Boolean UIPlayAnimation::mActivated
	bool ___mActivated_14;
};

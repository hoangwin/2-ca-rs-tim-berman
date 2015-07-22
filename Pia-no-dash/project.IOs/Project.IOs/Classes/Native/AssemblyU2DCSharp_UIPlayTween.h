#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t23;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// System.String
struct String_t;
// UITweener[]
struct UITweenerU5BU5D_t125;
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
// UIPlayTween
struct  UIPlayTween_t126  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject UIPlayTween::tweenTarget
	GameObject_t23 * ___tweenTarget_2;
	// System.Int32 UIPlayTween::tweenGroup
	int32_t ___tweenGroup_3;
	// AnimationOrTween.Trigger UIPlayTween::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIPlayTween::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIPlayTween::resetOnPlay
	bool ___resetOnPlay_6;
	// System.Boolean UIPlayTween::resetIfDisabled
	bool ___resetIfDisabled_7;
	// AnimationOrTween.EnableCondition UIPlayTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_8;
	// AnimationOrTween.DisableCondition UIPlayTween::disableWhenFinished
	int32_t ___disableWhenFinished_9;
	// System.Boolean UIPlayTween::includeChildren
	bool ___includeChildren_10;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayTween::onFinished
	List_1_t80 * ___onFinished_11;
	// UnityEngine.GameObject UIPlayTween::eventReceiver
	GameObject_t23 * ___eventReceiver_12;
	// System.String UIPlayTween::callWhenFinished
	String_t* ___callWhenFinished_13;
	// UITweener[] UIPlayTween::mTweens
	UITweenerU5BU5D_t125* ___mTweens_14;
	// System.Boolean UIPlayTween::mStarted
	bool ___mStarted_15;
	// System.Int32 UIPlayTween::mActive
	int32_t ___mActive_16;
	// System.Boolean UIPlayTween::mActivated
	bool ___mActivated_17;
};

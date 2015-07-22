#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t23;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIButtonMessage/Trigger
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger.h"
// UIButtonMessage
struct  UIButtonMessage_t87  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject UIButtonMessage::target
	GameObject_t23 * ___target_2;
	// System.String UIButtonMessage::functionName
	String_t* ___functionName_3;
	// UIButtonMessage/Trigger UIButtonMessage::trigger
	int32_t ___trigger_4;
	// System.Boolean UIButtonMessage::includeChildren
	bool ___includeChildren_5;
	// System.Boolean UIButtonMessage::mStarted
	bool ___mStarted_6;
};

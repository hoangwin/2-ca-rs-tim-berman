#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UIKeyBinding/Modifier
#include "AssemblyU2DCSharp_UIKeyBinding_Modifier.h"
// UIKeyBinding/Action
#include "AssemblyU2DCSharp_UIKeyBinding_Action.h"
// UIKeyBinding
struct  UIKeyBinding_t120  : public MonoBehaviour_t2
{
	// UnityEngine.KeyCode UIKeyBinding::keyCode
	int32_t ___keyCode_2;
	// UIKeyBinding/Modifier UIKeyBinding::modifier
	int32_t ___modifier_3;
	// UIKeyBinding/Action UIKeyBinding::action
	int32_t ___action_4;
	// System.Boolean UIKeyBinding::mIgnoreUp
	bool ___mIgnoreUp_5;
	// System.Boolean UIKeyBinding::mIsInput
	bool ___mIsInput_6;
};

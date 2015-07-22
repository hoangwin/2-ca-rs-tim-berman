#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t74;
// UILabel
struct UILabel_t133;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t23;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UIInput/OnValidate
struct OnValidate_t264;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t265;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIInput/InputType
#include "AssemblyU2DCSharp_UIInput_InputType.h"
// UIInput/KeyboardType
#include "AssemblyU2DCSharp_UIInput_KeyboardType.h"
// UIInput/Validation
#include "AssemblyU2DCSharp_UIInput_Validation.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIInput
struct  UIInput_t74  : public MonoBehaviour_t2
{
	// UILabel UIInput::label
	UILabel_t133 * ___label_4;
	// UIInput/InputType UIInput::inputType
	int32_t ___inputType_5;
	// UIInput/KeyboardType UIInput::keyboardType
	int32_t ___keyboardType_6;
	// UIInput/Validation UIInput::validation
	int32_t ___validation_7;
	// System.Int32 UIInput::characterLimit
	int32_t ___characterLimit_8;
	// System.String UIInput::savedAs
	String_t* ___savedAs_9;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t23 * ___selectOnTab_10;
	// UnityEngine.Color UIInput::activeTextColor
	Color_t9  ___activeTextColor_11;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onSubmit
	List_1_t80 * ___onSubmit_12;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onChange
	List_1_t80 * ___onChange_13;
	// UIInput/OnValidate UIInput::onValidate
	OnValidate_t264 * ___onValidate_14;
	// System.String UIInput::mValue
	String_t* ___mValue_15;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText_16;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t9  ___mDefaultColor_17;
	// System.Single UIInput::mPosition
	float ___mPosition_18;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit_19;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot_20;
};
struct UIInput_t74_StaticFields{
	// UIInput UIInput::current
	UIInput_t74 * ___current_2;
	// UIInput UIInput::selection
	UIInput_t74 * ___selection_3;
	// System.Int32 UIInput::mDrawStart
	int32_t ___mDrawStart_21;
	// System.Int32 UIInput::mDrawEnd
	int32_t ___mDrawEnd_22;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t265 * ___mKeyboard_23;
};

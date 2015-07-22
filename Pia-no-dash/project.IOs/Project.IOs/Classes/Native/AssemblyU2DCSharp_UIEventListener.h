#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// UIEventListener/VoidDelegate
struct VoidDelegate_t199;
// UIEventListener/BoolDelegate
struct BoolDelegate_t200;
// UIEventListener/FloatDelegate
struct FloatDelegate_t201;
// UIEventListener/VectorDelegate
struct VectorDelegate_t202;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t204;
// UIEventListener/StringDelegate
struct StringDelegate_t203;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t205;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIEventListener
struct  UIEventListener_t206  : public MonoBehaviour_t2
{
	// System.Object UIEventListener::parameter
	Object_t * ___parameter_2;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t199 * ___onSubmit_3;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t199 * ___onClick_4;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t199 * ___onDoubleClick_5;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t200 * ___onHover_6;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t200 * ___onPress_7;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t200 * ___onSelect_8;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t201 * ___onScroll_9;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t202 * ___onDrag_10;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t204 * ___onDrop_11;
	// UIEventListener/StringDelegate UIEventListener::onInput
	StringDelegate_t203 * ___onInput_12;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t205 * ___onKey_13;
};

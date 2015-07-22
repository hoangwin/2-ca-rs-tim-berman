#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t438;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t436;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t417;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t379;
// System.Collections.IEnumerator
struct IEnumerator_t35;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m2775 (Button_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t436 * Button_get_onClick_m2776 (Button_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m2777 (Button_t438 * __this, ButtonClickedEvent_t436 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m2778 (Button_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m2779 (Button_t438 * __this, PointerEventData_t417 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m2780 (Button_t438 * __this, BaseEventData_t379 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m2781 (Button_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

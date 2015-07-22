#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISlider
struct UISlider_t142;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UISlider::.ctor()
extern "C" void UISlider__ctor_m756 (UISlider_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C" float UISlider_get_sliderValue_m757 (UISlider_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C" void UISlider_set_sliderValue_m758 (UISlider_t142 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_inverted()
extern "C" bool UISlider_get_inverted_m759 (UISlider_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_inverted(System.Boolean)
extern "C" void UISlider_set_inverted_m760 (UISlider_t142 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Upgrade()
extern "C" void UISlider_Upgrade_m761 (UISlider_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnStart()
extern "C" void UISlider_OnStart_m762 (UISlider_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressBackground_m763 (UISlider_t142 * __this, GameObject_t23 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragBackground_m764 (UISlider_t142 * __this, GameObject_t23 * ___go, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressForeground_m765 (UISlider_t142 * __this, GameObject_t23 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragForeground_m766 (UISlider_t142 * __this, GameObject_t23 * ___go, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C" void UISlider_OnKey_m767 (UISlider_t142 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;

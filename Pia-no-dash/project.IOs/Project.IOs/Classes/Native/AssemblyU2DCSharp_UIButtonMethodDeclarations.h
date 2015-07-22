#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIButton
struct UIButton_t79;

// System.Void UIButton::.ctor()
extern "C" void UIButton__ctor_m456 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIButton::get_isEnabled()
extern "C" bool UIButton_get_isEnabled_m457 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::set_isEnabled(System.Boolean)
extern "C" void UIButton_set_isEnabled_m458 (UIButton_t79 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnEnable()
extern "C" void UIButton_OnEnable_m459 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnHover(System.Boolean)
extern "C" void UIButton_OnHover_m460 (UIButton_t79 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnPress(System.Boolean)
extern "C" void UIButton_OnPress_m461 (UIButton_t79 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnDragOver()
extern "C" void UIButton_OnDragOver_m462 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnDragOut()
extern "C" void UIButton_OnDragOut_m463 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnSelect(System.Boolean)
extern "C" void UIButton_OnSelect_m464 (UIButton_t79 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnClick()
extern "C" void UIButton_OnClick_m465 (UIButton_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::UpdateColor(System.Boolean,System.Boolean)
extern "C" void UIButton_UpdateColor_m466 (UIButton_t79 * __this, bool ___shouldBeEnabled, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;

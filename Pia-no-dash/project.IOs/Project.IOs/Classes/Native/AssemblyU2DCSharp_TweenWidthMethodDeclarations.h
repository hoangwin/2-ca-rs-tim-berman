#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenWidth
struct TweenWidth_t231;
// UIWidget
struct UIWidget_t83;

// System.Void TweenWidth::.ctor()
extern "C" void TweenWidth__ctor_m1355 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenWidth::get_cachedWidget()
extern "C" UIWidget_t83 * TweenWidth_get_cachedWidget_m1356 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenWidth::get_width()
extern "C" int32_t TweenWidth_get_width_m1357 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::set_width(System.Int32)
extern "C" void TweenWidth_set_width_m1358 (TweenWidth_t231 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenWidth::get_value()
extern "C" int32_t TweenWidth_get_value_m1359 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::set_value(System.Int32)
extern "C" void TweenWidth_set_value_m1360 (TweenWidth_t231 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenWidth_OnUpdate_m1361 (TweenWidth_t231 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenWidth TweenWidth::Begin(UIWidget,System.Single,System.Int32)
extern "C" TweenWidth_t231 * TweenWidth_Begin_m1362 (Object_t * __this /* static, unused */, UIWidget_t83 * ___widget, float ___duration, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetStartToCurrentValue()
extern "C" void TweenWidth_SetStartToCurrentValue_m1363 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetEndToCurrentValue()
extern "C" void TweenWidth_SetEndToCurrentValue_m1364 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetCurrentValueToStart()
extern "C" void TweenWidth_SetCurrentValueToStart_m1365 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetCurrentValueToEnd()
extern "C" void TweenWidth_SetCurrentValueToEnd_m1366 (TweenWidth_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

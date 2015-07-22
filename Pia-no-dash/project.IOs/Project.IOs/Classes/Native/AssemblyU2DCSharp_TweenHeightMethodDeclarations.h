#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenHeight
struct TweenHeight_t224;
// UIWidget
struct UIWidget_t83;

// System.Void TweenHeight::.ctor()
extern "C" void TweenHeight__ctor_m1283 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenHeight::get_cachedWidget()
extern "C" UIWidget_t83 * TweenHeight_get_cachedWidget_m1284 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenHeight::get_height()
extern "C" int32_t TweenHeight_get_height_m1285 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::set_height(System.Int32)
extern "C" void TweenHeight_set_height_m1286 (TweenHeight_t224 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenHeight::get_value()
extern "C" int32_t TweenHeight_get_value_m1287 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::set_value(System.Int32)
extern "C" void TweenHeight_set_value_m1288 (TweenHeight_t224 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenHeight_OnUpdate_m1289 (TweenHeight_t224 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenHeight TweenHeight::Begin(UIWidget,System.Single,System.Int32)
extern "C" TweenHeight_t224 * TweenHeight_Begin_m1290 (Object_t * __this /* static, unused */, UIWidget_t83 * ___widget, float ___duration, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetStartToCurrentValue()
extern "C" void TweenHeight_SetStartToCurrentValue_m1291 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetEndToCurrentValue()
extern "C" void TweenHeight_SetEndToCurrentValue_m1292 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetCurrentValueToStart()
extern "C" void TweenHeight_SetCurrentValueToStart_m1293 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetCurrentValueToEnd()
extern "C" void TweenHeight_SetCurrentValueToEnd_m1294 (TweenHeight_t224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

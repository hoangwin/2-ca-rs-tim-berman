#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenColor
struct TweenColor_t222;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TweenColor::.ctor()
extern "C" void TweenColor__ctor_m1259 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Cache()
extern "C" void TweenColor_Cache_m1260 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
extern "C" Color_t9  TweenColor_get_color_m1261 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
extern "C" void TweenColor_set_color_m1262 (TweenColor_t222 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_value()
extern "C" Color_t9  TweenColor_get_value_m1263 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_value(UnityEngine.Color)
extern "C" void TweenColor_set_value_m1264 (TweenColor_t222 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenColor_OnUpdate_m1265 (TweenColor_t222 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
extern "C" TweenColor_t222 * TweenColor_Begin_m1266 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetStartToCurrentValue()
extern "C" void TweenColor_SetStartToCurrentValue_m1267 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetEndToCurrentValue()
extern "C" void TweenColor_SetEndToCurrentValue_m1268 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToStart()
extern "C" void TweenColor_SetCurrentValueToStart_m1269 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToEnd()
extern "C" void TweenColor_SetCurrentValueToEnd_m1270 (TweenColor_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

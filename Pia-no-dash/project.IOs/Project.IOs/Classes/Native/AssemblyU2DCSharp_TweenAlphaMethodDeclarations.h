#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenAlpha
struct TweenAlpha_t220;
// UIRect
struct UIRect_t108;
// UnityEngine.GameObject
struct GameObject_t23;

// System.Void TweenAlpha::.ctor()
extern "C" void TweenAlpha__ctor_m1249 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRect TweenAlpha::get_cachedRect()
extern "C" UIRect_t108 * TweenAlpha_get_cachedRect_m1250 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_alpha()
extern "C" float TweenAlpha_get_alpha_m1251 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_alpha(System.Single)
extern "C" void TweenAlpha_set_alpha_m1252 (TweenAlpha_t220 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_value()
extern "C" float TweenAlpha_get_value_m1253 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_value(System.Single)
extern "C" void TweenAlpha_set_value_m1254 (TweenAlpha_t220 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenAlpha_OnUpdate_m1255 (TweenAlpha_t220 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAlpha TweenAlpha::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenAlpha_t220 * TweenAlpha_Begin_m1256 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::SetStartToCurrentValue()
extern "C" void TweenAlpha_SetStartToCurrentValue_m1257 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::SetEndToCurrentValue()
extern "C" void TweenAlpha_SetEndToCurrentValue_m1258 (TweenAlpha_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

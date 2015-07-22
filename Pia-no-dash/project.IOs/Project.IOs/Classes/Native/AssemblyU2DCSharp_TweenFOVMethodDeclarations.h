#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenFOV
struct TweenFOV_t223;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.GameObject
struct GameObject_t23;

// System.Void TweenFOV::.ctor()
extern "C" void TweenFOV__ctor_m1271 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
extern "C" Camera_t113 * TweenFOV_get_cachedCamera_m1272 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
extern "C" float TweenFOV_get_fov_m1273 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
extern "C" void TweenFOV_set_fov_m1274 (TweenFOV_t223 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_value()
extern "C" float TweenFOV_get_value_m1275 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_value(System.Single)
extern "C" void TweenFOV_set_value_m1276 (TweenFOV_t223 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenFOV_OnUpdate_m1277 (TweenFOV_t223 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenFOV_t223 * TweenFOV_Begin_m1278 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetStartToCurrentValue()
extern "C" void TweenFOV_SetStartToCurrentValue_m1279 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetEndToCurrentValue()
extern "C" void TweenFOV_SetEndToCurrentValue_m1280 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToStart()
extern "C" void TweenFOV_SetCurrentValueToStart_m1281 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToEnd()
extern "C" void TweenFOV_SetCurrentValueToEnd_m1282 (TweenFOV_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

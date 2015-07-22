#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenScale
struct TweenScale_t228;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenScale::.ctor()
extern "C" void TweenScale__ctor_m1329 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
extern "C" Transform_t32 * TweenScale_get_cachedTransform_m1330 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_value()
extern "C" Vector3_t10  TweenScale_get_value_m1331 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_value(UnityEngine.Vector3)
extern "C" void TweenScale_set_value_m1332 (TweenScale_t228 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
extern "C" Vector3_t10  TweenScale_get_scale_m1333 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
extern "C" void TweenScale_set_scale_m1334 (TweenScale_t228 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenScale_OnUpdate_m1335 (TweenScale_t228 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenScale_t228 * TweenScale_Begin_m1336 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Vector3_t10  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetStartToCurrentValue()
extern "C" void TweenScale_SetStartToCurrentValue_m1337 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetEndToCurrentValue()
extern "C" void TweenScale_SetEndToCurrentValue_m1338 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToStart()
extern "C" void TweenScale_SetCurrentValueToStart_m1339 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToEnd()
extern "C" void TweenScale_SetCurrentValueToEnd_m1340 (TweenScale_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

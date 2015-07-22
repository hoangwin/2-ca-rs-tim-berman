#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenRotation
struct TweenRotation_t227;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void TweenRotation::.ctor()
extern "C" void TweenRotation__ctor_m1317 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C" Transform_t32 * TweenRotation_get_cachedTransform_m1318 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C" Quaternion_t60  TweenRotation_get_rotation_m1319 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C" void TweenRotation_set_rotation_m1320 (TweenRotation_t227 * __this, Quaternion_t60  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_value()
extern "C" Quaternion_t60  TweenRotation_get_value_m1321 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_value(UnityEngine.Quaternion)
extern "C" void TweenRotation_set_value_m1322 (TweenRotation_t227 * __this, Quaternion_t60  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenRotation_OnUpdate_m1323 (TweenRotation_t227 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C" TweenRotation_t227 * TweenRotation_Begin_m1324 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Quaternion_t60  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetStartToCurrentValue()
extern "C" void TweenRotation_SetStartToCurrentValue_m1325 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetEndToCurrentValue()
extern "C" void TweenRotation_SetEndToCurrentValue_m1326 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToStart()
extern "C" void TweenRotation_SetCurrentValueToStart_m1327 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToEnd()
extern "C" void TweenRotation_SetCurrentValueToEnd_m1328 (TweenRotation_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

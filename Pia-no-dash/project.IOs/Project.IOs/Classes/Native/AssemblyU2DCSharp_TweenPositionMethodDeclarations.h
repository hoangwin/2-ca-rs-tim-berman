#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenPosition
struct TweenPosition_t226;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenPosition::.ctor()
extern "C" void TweenPosition__ctor_m1305 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
extern "C" Transform_t32 * TweenPosition_get_cachedTransform_m1306 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
extern "C" Vector3_t10  TweenPosition_get_position_m1307 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
extern "C" void TweenPosition_set_position_m1308 (TweenPosition_t226 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_value()
extern "C" Vector3_t10  TweenPosition_get_value_m1309 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_value(UnityEngine.Vector3)
extern "C" void TweenPosition_set_value_m1310 (TweenPosition_t226 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenPosition_OnUpdate_m1311 (TweenPosition_t226 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenPosition_t226 * TweenPosition_Begin_m1312 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Vector3_t10  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetStartToCurrentValue()
extern "C" void TweenPosition_SetStartToCurrentValue_m1313 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetEndToCurrentValue()
extern "C" void TweenPosition_SetEndToCurrentValue_m1314 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToStart()
extern "C" void TweenPosition_SetCurrentValueToStart_m1315 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToEnd()
extern "C" void TweenPosition_SetCurrentValueToEnd_m1316 (TweenPosition_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

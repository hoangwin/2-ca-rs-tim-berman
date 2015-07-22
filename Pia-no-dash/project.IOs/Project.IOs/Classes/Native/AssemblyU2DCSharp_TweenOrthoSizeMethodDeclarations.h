#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenOrthoSize
struct TweenOrthoSize_t225;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.GameObject
struct GameObject_t23;

// System.Void TweenOrthoSize::.ctor()
extern "C" void TweenOrthoSize__ctor_m1295 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenOrthoSize::get_cachedCamera()
extern "C" Camera_t113 * TweenOrthoSize_get_cachedCamera_m1296 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_orthoSize()
extern "C" float TweenOrthoSize_get_orthoSize_m1297 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_orthoSize(System.Single)
extern "C" void TweenOrthoSize_set_orthoSize_m1298 (TweenOrthoSize_t225 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_value()
extern "C" float TweenOrthoSize_get_value_m1299 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_value(System.Single)
extern "C" void TweenOrthoSize_set_value_m1300 (TweenOrthoSize_t225 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenOrthoSize_OnUpdate_m1301 (TweenOrthoSize_t225 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenOrthoSize TweenOrthoSize::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenOrthoSize_t225 * TweenOrthoSize_Begin_m1302 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::SetStartToCurrentValue()
extern "C" void TweenOrthoSize_SetStartToCurrentValue_m1303 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::SetEndToCurrentValue()
extern "C" void TweenOrthoSize_SetEndToCurrentValue_m1304 (TweenOrthoSize_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

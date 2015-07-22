#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenVolume
struct TweenVolume_t230;
// UnityEngine.AudioSource
struct AudioSource_t25;
// UnityEngine.GameObject
struct GameObject_t23;

// System.Void TweenVolume::.ctor()
extern "C" void TweenVolume__ctor_m1345 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
extern "C" AudioSource_t25 * TweenVolume_get_audioSource_m1346 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
extern "C" float TweenVolume_get_volume_m1347 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
extern "C" void TweenVolume_set_volume_m1348 (TweenVolume_t230 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_value()
extern "C" float TweenVolume_get_value_m1349 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_value(System.Single)
extern "C" void TweenVolume_set_value_m1350 (TweenVolume_t230 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenVolume_OnUpdate_m1351 (TweenVolume_t230 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenVolume_t230 * TweenVolume_Begin_m1352 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, float ___targetVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetStartToCurrentValue()
extern "C" void TweenVolume_SetStartToCurrentValue_m1353 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetEndToCurrentValue()
extern "C" void TweenVolume_SetEndToCurrentValue_m1354 (TweenVolume_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

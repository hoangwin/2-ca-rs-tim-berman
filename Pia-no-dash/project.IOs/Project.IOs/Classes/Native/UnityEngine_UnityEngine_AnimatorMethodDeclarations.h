#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animator
struct Animator_t304;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t620;
// System.String
struct String_t;

// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m3948 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m3947 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" void Animator_Play_m2468 (Animator_t304 * __this, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m4847 (Animator_t304 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m4848 (Animator_t304 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t620 * Animator_get_runtimeAnimatorController_m3946 (Animator_t304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m4849 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m4850 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m4851 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;

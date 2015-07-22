#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t121;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// UnityEngine.AnimationState
struct AnimationState_t337;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Void UnityEngine.Animation::Sample()
extern "C" void Animation_Sample_m2076 (Animation_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" void Animation_INTERNAL_CALL_Sample_m4823 (Object_t * __this /* static, unused */, Animation_t121 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" bool Animation_get_isPlaying_m2077 (Animation_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C" bool Animation_IsPlaying_m2071 (Animation_t121 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m2078 (Animation_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4824 (Animation_t121 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4825 (Animation_t121 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" bool Animation_Play_m2079 (Animation_t121 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m4826 (Animation_t121 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m2069 (Animation_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t337 * Animation_GetStateAtIndex_m4827 (Animation_t121 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4828 (Animation_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

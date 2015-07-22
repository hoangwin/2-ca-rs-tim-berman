#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActiveAnimation
struct ActiveAnimation_t157;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t121;
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// System.Void ActiveAnimation::.ctor()
extern "C" void ActiveAnimation__ctor_m804 (ActiveAnimation_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
extern "C" bool ActiveAnimation_get_isPlaying_m805 (ActiveAnimation_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
extern "C" void ActiveAnimation_Reset_m806 (ActiveAnimation_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Start()
extern "C" void ActiveAnimation_Start_m807 (ActiveAnimation_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
extern "C" void ActiveAnimation_Update_m808 (ActiveAnimation_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern "C" void ActiveAnimation_Play_m809 (ActiveAnimation_t157 * __this, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C" ActiveAnimation_t157 * ActiveAnimation_Play_m810 (Object_t * __this /* static, unused */, Animation_t121 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t157 * ActiveAnimation_Play_m811 (Object_t * __this /* static, unused */, Animation_t121 * ___anim, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t157 * ActiveAnimation_Play_m812 (Object_t * __this /* static, unused */, Animation_t121 * ___anim, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;

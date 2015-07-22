#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t234;
struct AnimationCurve_t234_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t357;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2334 (AnimationCurve_t234 * __this, KeyframeU5BU5D_t357* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4816 (AnimationCurve_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4817 (AnimationCurve_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4818 (AnimationCurve_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m2335 (AnimationCurve_t234 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4819 (AnimationCurve_t234 * __this, KeyframeU5BU5D_t357* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t234_marshal(const AnimationCurve_t234& unmarshaled, AnimationCurve_t234_marshaled& marshaled);
void AnimationCurve_t234_marshal_back(const AnimationCurve_t234_marshaled& marshaled, AnimationCurve_t234& unmarshaled);
void AnimationCurve_t234_marshal_cleanup(AnimationCurve_t234_marshaled& marshaled);

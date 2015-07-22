#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenTransform
struct TweenTransform_t229;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Transform
struct Transform_t32;

// System.Void TweenTransform::.ctor()
extern "C" void TweenTransform__ctor_m1341 (TweenTransform_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenTransform_OnUpdate_m1342 (TweenTransform_t229 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C" TweenTransform_t229 * TweenTransform_Begin_m1343 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Transform_t32 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C" TweenTransform_t229 * TweenTransform_Begin_m1344 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, float ___duration, Transform_t32 * ___from, Transform_t32 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;

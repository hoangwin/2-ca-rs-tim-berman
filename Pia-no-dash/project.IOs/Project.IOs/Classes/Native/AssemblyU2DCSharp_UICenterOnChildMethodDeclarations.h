#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICenterOnChild
struct UICenterOnChild_t93;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UICenterOnChild::.ctor()
extern "C" void UICenterOnChild__ctor_m515 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICenterOnChild::get_centeredObject()
extern "C" GameObject_t23 * UICenterOnChild_get_centeredObject_m516 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnEnable()
extern "C" void UICenterOnChild_OnEnable_m517 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnDragFinished()
extern "C" void UICenterOnChild_OnDragFinished_m518 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnValidate()
extern "C" void UICenterOnChild_OnValidate_m519 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::Recenter()
extern "C" void UICenterOnChild_Recenter_m520 (UICenterOnChild_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void UICenterOnChild_CenterOn_m521 (UICenterOnChild_t93 * __this, Transform_t32 * ___target, Vector3_t10  ___panelCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform)
extern "C" void UICenterOnChild_CenterOn_m522 (UICenterOnChild_t93 * __this, Transform_t32 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDragCamera
struct UIDragCamera_t97;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragCamera::.ctor()
extern "C" void UIDragCamera__ctor_m526 (UIDragCamera_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::Awake()
extern "C" void UIDragCamera_Awake_m527 (UIDragCamera_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnPress(System.Boolean)
extern "C" void UIDragCamera_OnPress_m528 (UIDragCamera_t97 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragCamera_OnDrag_m529 (UIDragCamera_t97 * __this, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnScroll(System.Single)
extern "C" void UIDragCamera_OnScroll_m530 (UIDragCamera_t97 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;

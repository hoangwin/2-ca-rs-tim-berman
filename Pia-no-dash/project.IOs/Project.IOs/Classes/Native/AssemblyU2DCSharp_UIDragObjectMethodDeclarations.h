#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDragObject
struct UIDragObject_t109;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragObject::.ctor()
extern "C" void UIDragObject__ctor_m545 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDragObject::get_dragMovement()
extern "C" Vector3_t10  UIDragObject_get_dragMovement_m546 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::set_dragMovement(UnityEngine.Vector3)
extern "C" void UIDragObject_set_dragMovement_m547 (UIDragObject_t109 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnEnable()
extern "C" void UIDragObject_OnEnable_m548 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::FindPanel()
extern "C" void UIDragObject_FindPanel_m549 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::UpdateBounds()
extern "C" void UIDragObject_UpdateBounds_m550 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnPress(System.Boolean)
extern "C" void UIDragObject_OnPress_m551 (UIDragObject_t109 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragObject_OnDrag_m552 (UIDragObject_t109 * __this, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::Move(UnityEngine.Vector3)
extern "C" void UIDragObject_Move_m553 (UIDragObject_t109 * __this, Vector3_t10  ___worldDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::LateUpdate()
extern "C" void UIDragObject_LateUpdate_m554 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelMovement()
extern "C" void UIDragObject_CancelMovement_m555 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelSpring()
extern "C" void UIDragObject_CancelSpring_m556 (UIDragObject_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnScroll(System.Single)
extern "C" void UIDragObject_OnScroll_m557 (UIDragObject_t109 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;

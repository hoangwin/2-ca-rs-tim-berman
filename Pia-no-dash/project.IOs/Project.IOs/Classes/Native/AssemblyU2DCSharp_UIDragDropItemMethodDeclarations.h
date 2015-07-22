#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDragDropItem
struct UIDragDropItem_t105;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDragDropItem::.ctor()
extern "C" void UIDragDropItem__ctor_m532 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::Start()
extern "C" void UIDragDropItem_Start_m533 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnPress(System.Boolean)
extern "C" void UIDragDropItem_OnPress_m534 (UIDragDropItem_t105 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragStart()
extern "C" void UIDragDropItem_OnDragStart_m535 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragDropItem_OnDrag_m536 (UIDragDropItem_t105 * __this, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragEnd()
extern "C" void UIDragDropItem_OnDragEnd_m537 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragDropStart()
extern "C" void UIDragDropItem_OnDragDropStart_m538 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragDropMove(UnityEngine.Vector3)
extern "C" void UIDragDropItem_OnDragDropMove_m539 (UIDragDropItem_t105 * __this, Vector3_t10  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragDropRelease(UnityEngine.GameObject)
extern "C" void UIDragDropItem_OnDragDropRelease_m540 (UIDragDropItem_t105 * __this, GameObject_t23 * ___surface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragDropItem::OnDragDropEnd()
extern "C" void UIDragDropItem_OnDragDropEnd_m541 (UIDragDropItem_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

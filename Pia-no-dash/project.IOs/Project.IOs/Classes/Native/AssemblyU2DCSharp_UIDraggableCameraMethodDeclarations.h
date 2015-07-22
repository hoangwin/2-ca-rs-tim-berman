#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggableCamera
struct UIDraggableCamera_t96;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggableCamera::.ctor()
extern "C" void UIDraggableCamera__ctor_m569 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C" Vector2_t27  UIDraggableCamera_get_currentMomentum_m570 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_set_currentMomentum_m571 (UIDraggableCamera_t96 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Awake()
extern "C" void UIDraggableCamera_Awake_m572 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
extern "C" void UIDraggableCamera_Start_m573 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C" Vector3_t10  UIDraggableCamera_CalculateConstrainOffset_m574 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C" bool UIDraggableCamera_ConstrainToBounds_m575 (UIDraggableCamera_t96 * __this, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
extern "C" void UIDraggableCamera_Press_m576 (UIDraggableCamera_t96 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_Drag_m577 (UIDraggableCamera_t96 * __this, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
extern "C" void UIDraggableCamera_Scroll_m578 (UIDraggableCamera_t96 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
extern "C" void UIDraggableCamera_Update_m579 (UIDraggableCamera_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

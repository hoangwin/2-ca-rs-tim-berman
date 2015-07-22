#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIRect
struct UIRect_t108;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Camera
struct Camera_t113;
// UIRoot
struct UIRoot_t101;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UIRect/AnchorPoint
struct AnchorPoint_t211;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIRect::.ctor()
extern "C" void UIRect__ctor_m1148 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::.cctor()
extern "C" void UIRect__cctor_m1149 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIRect::get_cachedGameObject()
extern "C" GameObject_t23 * UIRect_get_cachedGameObject_m1150 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIRect::get_cachedTransform()
extern "C" Transform_t32 * UIRect_get_cachedTransform_m1151 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIRect::get_anchorCamera()
extern "C" Camera_t113 * UIRect_get_anchorCamera_m1152 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRect UIRect::get_parent()
extern "C" UIRect_t108 * UIRect_get_parent_m1153 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot UIRect::get_root()
extern "C" UIRoot_t101 * UIRect_get_root_m1154 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchored()
extern "C" bool UIRect_get_isAnchored_m1155 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Invalidate(System.Boolean)
extern "C" void UIRect_Invalidate_m1156 (UIRect_t108 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* UIRect_GetSides_m1157 (UIRect_t108 * __this, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIRect::GetLocalPos(UIRect/AnchorPoint,UnityEngine.Transform)
extern "C" Vector3_t10  UIRect_GetLocalPos_m1158 (UIRect_t108 * __this, AnchorPoint_t211 * ___ac, Transform_t32 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnEnable()
extern "C" void UIRect_OnEnable_m1159 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnDisable()
extern "C" void UIRect_OnDisable_m1160 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Start()
extern "C" void UIRect_Start_m1161 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Update()
extern "C" void UIRect_Update_m1162 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::UpdateAnchors()
extern "C" void UIRect_UpdateAnchors_m1163 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAnchors()
extern "C" void UIRect_ResetAnchors_m1164 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::FindCameraFor(UIRect/AnchorPoint)
extern "C" void UIRect_FindCameraFor_m1165 (UIRect_t108 * __this, AnchorPoint_t211 * ___ap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ParentHasChanged()
extern "C" void UIRect_ParentHasChanged_m1166 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnUpdate()
extern "C" void UIRect_OnUpdate_m1167 (UIRect_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

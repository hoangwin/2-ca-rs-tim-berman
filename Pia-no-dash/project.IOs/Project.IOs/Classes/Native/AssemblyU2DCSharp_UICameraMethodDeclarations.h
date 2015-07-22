#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera
struct UICamera_t252;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.GameObject
struct GameObject_t23;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UICamera/MouseOrTouch
struct MouseOrTouch_t246;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UICamera/ControlScheme
#include "AssemblyU2DCSharp_UICamera_ControlScheme.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UICamera::.ctor()
extern "C" void UICamera__ctor_m1443 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C" void UICamera__cctor_m1444 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C" bool UICamera_get_stickyPress_m1445 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C" Ray_t326  UICamera_get_currentRay_m1446 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C" bool UICamera_get_handlesEvents_m1447 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C" Camera_t113 * UICamera_get_cachedCamera_m1448 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C" GameObject_t23 * UICamera_get_selectedObject_m1449 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C" void UICamera_set_selectedObject_m1450 (Object_t * __this /* static, unused */, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::SetSelection(UnityEngine.GameObject,UICamera/ControlScheme)
extern "C" void UICamera_SetSelection_m1451 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, int32_t ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UICamera::ChangeSelection()
extern "C" Object_t * UICamera_ChangeSelection_m1452 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C" int32_t UICamera_get_touchCount_m1453 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C" int32_t UICamera_get_dragCount_m1454 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C" Camera_t113 * UICamera_get_mainCamera_m1455 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C" UICamera_t252 * UICamera_get_eventHandler_m1456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C" int32_t UICamera_CompareFunc_m1457 (Object_t * __this /* static, unused */, UICamera_t252 * ___a, UICamera_t252 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" bool UICamera_Raycast_m1458 (Object_t * __this /* static, unused */, Vector3_t10  ___inPos, RaycastHit_t249 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.RaycastHit&)
extern "C" bool UICamera_IsVisible_m1459 (Object_t * __this /* static, unused */, RaycastHit_t249 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C" bool UICamera_IsVisible_m1460 (Object_t * __this /* static, unused */, DepthEntry_t248 * ___de, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C" bool UICamera_IsHighlighted_m1461 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C" UICamera_t252 * UICamera_FindCameraForLayer_m1462 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m1463 (Object_t * __this /* static, unused */, int32_t ___up, int32_t ___down, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m1464 (Object_t * __this /* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C" int32_t UICamera_GetDirection_m1465 (Object_t * __this /* static, unused */, String_t* ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C" void UICamera_Notify_m1466 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, String_t* ___funcName, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetMouse(System.Int32)
extern "C" MouseOrTouch_t246 * UICamera_GetMouse_m1467 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C" MouseOrTouch_t246 * UICamera_GetTouch_m1468 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C" void UICamera_RemoveTouch_m1469 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C" void UICamera_Awake_m1470 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C" void UICamera_OnEnable_m1471 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C" void UICamera_OnDisable_m1472 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C" void UICamera_Start_m1473 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C" void UICamera_Update_m1474 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C" void UICamera_ProcessMouse_m1475 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C" void UICamera_ProcessTouches_m1476 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C" void UICamera_ProcessFakeTouches_m1477 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C" void UICamera_ProcessOthers_m1478 (UICamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C" void UICamera_ProcessTouch_m1479 (UICamera_t252 * __this, bool ___pressed, bool ___unpressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C" void UICamera_ShowTooltip_m1480 (UICamera_t252 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__1(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C" int32_t UICamera_U3CRaycastU3Em__1_m1481 (Object_t * __this /* static, unused */, DepthEntry_t248  ___r1, DepthEntry_t248  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

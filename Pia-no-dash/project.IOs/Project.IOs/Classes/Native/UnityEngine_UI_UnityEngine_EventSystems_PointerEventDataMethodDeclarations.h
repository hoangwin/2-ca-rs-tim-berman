#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t417;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t381;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void PointerEventData__ctor_m2595 (PointerEventData_t417 * __this, EventSystem_t381 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C" GameObject_t23 * PointerEventData_get_pointerEnter_m2596 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerEnter_m2597 (PointerEventData_t417 * __this, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C" GameObject_t23 * PointerEventData_get_lastPress_m2598 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_lastPress_m2599 (PointerEventData_t417 * __this, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C" GameObject_t23 * PointerEventData_get_rawPointerPress_m2600 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_rawPointerPress_m2601 (PointerEventData_t417 * __this, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C" GameObject_t23 * PointerEventData_get_pointerDrag_m2602 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerDrag_m2603 (PointerEventData_t417 * __this, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" RaycastResult_t413  PointerEventData_get_pointerCurrentRaycast_m2604 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerCurrentRaycast_m2605 (PointerEventData_t417 * __this, RaycastResult_t413  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C" RaycastResult_t413  PointerEventData_get_pointerPressRaycast_m2606 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerPressRaycast_m2607 (PointerEventData_t417 * __this, RaycastResult_t413  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C" bool PointerEventData_get_eligibleForClick_m2608 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C" void PointerEventData_set_eligibleForClick_m2609 (PointerEventData_t417 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" int32_t PointerEventData_get_pointerId_m2610 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C" void PointerEventData_set_pointerId_m2611 (PointerEventData_t417 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" Vector2_t27  PointerEventData_get_position_m2612 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C" void PointerEventData_set_position_m2613 (PointerEventData_t417 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" Vector2_t27  PointerEventData_get_delta_m2614 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_delta_m2615 (PointerEventData_t417 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C" Vector2_t27  PointerEventData_get_pressPosition_m2616 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C" void PointerEventData_set_pressPosition_m2617 (PointerEventData_t417 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C" Vector3_t10  PointerEventData_get_worldPosition_m2618 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldPosition_m2619 (PointerEventData_t417 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C" Vector3_t10  PointerEventData_get_worldNormal_m2620 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldNormal_m2621 (PointerEventData_t417 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C" float PointerEventData_get_clickTime_m2622 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C" void PointerEventData_set_clickTime_m2623 (PointerEventData_t417 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C" int32_t PointerEventData_get_clickCount_m2624 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C" void PointerEventData_set_clickCount_m2625 (PointerEventData_t417 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C" Vector2_t27  PointerEventData_get_scrollDelta_m2626 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_scrollDelta_m2627 (PointerEventData_t417 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C" bool PointerEventData_get_useDragThreshold_m2628 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C" void PointerEventData_set_useDragThreshold_m2629 (PointerEventData_t417 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C" bool PointerEventData_get_dragging_m2630 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C" void PointerEventData_set_dragging_m2631 (PointerEventData_t417 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" int32_t PointerEventData_get_button_m2632 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void PointerEventData_set_button_m2633 (PointerEventData_t417 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C" bool PointerEventData_IsPointerMoving_m2634 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C" bool PointerEventData_IsScrolling_m2635 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C" Camera_t113 * PointerEventData_get_enterEventCamera_m2636 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C" Camera_t113 * PointerEventData_get_pressEventCamera_m2637 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C" GameObject_t23 * PointerEventData_get_pointerPress_m2638 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerPress_m2639 (PointerEventData_t417 * __this, GameObject_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C" String_t* PointerEventData_ToString_m2640 (PointerEventData_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

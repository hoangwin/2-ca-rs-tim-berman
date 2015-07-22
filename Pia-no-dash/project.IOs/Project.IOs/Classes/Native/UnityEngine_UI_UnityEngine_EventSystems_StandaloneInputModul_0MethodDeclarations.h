#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t426;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t419;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" void StandaloneInputModule__ctor_m2686 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C" int32_t StandaloneInputModule_get_inputMode_m2687 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C" bool StandaloneInputModule_get_allowActivationOnMobileDevice_m2688 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C" void StandaloneInputModule_set_allowActivationOnMobileDevice_m2689 (StandaloneInputModule_t426 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C" float StandaloneInputModule_get_inputActionsPerSecond_m2690 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C" void StandaloneInputModule_set_inputActionsPerSecond_m2691 (StandaloneInputModule_t426 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C" float StandaloneInputModule_get_repeatDelay_m2692 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C" void StandaloneInputModule_set_repeatDelay_m2693 (StandaloneInputModule_t426 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C" String_t* StandaloneInputModule_get_horizontalAxis_m2694 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C" void StandaloneInputModule_set_horizontalAxis_m2695 (StandaloneInputModule_t426 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C" String_t* StandaloneInputModule_get_verticalAxis_m2696 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C" void StandaloneInputModule_set_verticalAxis_m2697 (StandaloneInputModule_t426 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C" String_t* StandaloneInputModule_get_submitButton_m2698 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C" void StandaloneInputModule_set_submitButton_m2699 (StandaloneInputModule_t426 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C" String_t* StandaloneInputModule_get_cancelButton_m2700 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C" void StandaloneInputModule_set_cancelButton_m2701 (StandaloneInputModule_t426 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" void StandaloneInputModule_UpdateModule_m2702 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" bool StandaloneInputModule_IsModuleSupported_m2703 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C" bool StandaloneInputModule_ShouldActivateModule_m2704 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" void StandaloneInputModule_ActivateModule_m2705 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C" void StandaloneInputModule_DeactivateModule_m2706 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C" void StandaloneInputModule_Process_m2707 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendSubmitEventToSelectedObject_m2708 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C" Vector2_t27  StandaloneInputModule_GetRawMoveVector_m2709 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendMoveEventToSelectedObject_m2710 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C" void StandaloneInputModule_ProcessMouseEvent_m2711 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendUpdateEventToSelectedObject_m2712 (StandaloneInputModule_t426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void StandaloneInputModule_ProcessMousePress_m2713 (StandaloneInputModule_t426 * __this, MouseButtonEventData_t419 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

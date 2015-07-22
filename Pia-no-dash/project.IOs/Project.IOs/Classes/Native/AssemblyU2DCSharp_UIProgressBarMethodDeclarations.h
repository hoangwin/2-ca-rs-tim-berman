#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIProgressBar
struct UIProgressBar_t137;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Camera
struct Camera_t113;
// UIWidget
struct UIWidget_t83;
// UIProgressBar/FillDirection
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIProgressBar::.ctor()
extern "C" void UIProgressBar__ctor_m684 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIProgressBar::get_cachedTransform()
extern "C" Transform_t32 * UIProgressBar_get_cachedTransform_m685 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIProgressBar::get_cachedCamera()
extern "C" Camera_t113 * UIProgressBar_get_cachedCamera_m686 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_foregroundWidget()
extern "C" UIWidget_t83 * UIProgressBar_get_foregroundWidget_m687 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_foregroundWidget(UIWidget)
extern "C" void UIProgressBar_set_foregroundWidget_m688 (UIProgressBar_t137 * __this, UIWidget_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_backgroundWidget()
extern "C" UIWidget_t83 * UIProgressBar_get_backgroundWidget_m689 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_backgroundWidget(UIWidget)
extern "C" void UIProgressBar_set_backgroundWidget_m690 (UIProgressBar_t137 * __this, UIWidget_t83 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIProgressBar/FillDirection UIProgressBar::get_fillDirection()
extern "C" int32_t UIProgressBar_get_fillDirection_m691 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_fillDirection(UIProgressBar/FillDirection)
extern "C" void UIProgressBar_set_fillDirection_m692 (UIProgressBar_t137 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_value()
extern "C" float UIProgressBar_get_value_m693 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_value(System.Single)
extern "C" void UIProgressBar_set_value_m694 (UIProgressBar_t137 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_alpha()
extern "C" float UIProgressBar_get_alpha_m695 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_alpha(System.Single)
extern "C" void UIProgressBar_set_alpha_m696 (UIProgressBar_t137 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isHorizontal()
extern "C" bool UIProgressBar_get_isHorizontal_m697 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isInverted()
extern "C" bool UIProgressBar_get_isInverted_m698 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Start()
extern "C" void UIProgressBar_Start_m699 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Upgrade()
extern "C" void UIProgressBar_Upgrade_m700 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnStart()
extern "C" void UIProgressBar_OnStart_m701 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Update()
extern "C" void UIProgressBar_Update_m702 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnValidate()
extern "C" void UIProgressBar_OnValidate_m703 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::ScreenToValue(UnityEngine.Vector2)
extern "C" float UIProgressBar_ScreenToValue_m704 (UIProgressBar_t137 * __this, Vector2_t27  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::LocalToValue(UnityEngine.Vector2)
extern "C" float UIProgressBar_LocalToValue_m705 (UIProgressBar_t137 * __this, Vector2_t27  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::ForceUpdate()
extern "C" void UIProgressBar_ForceUpdate_m706 (UIProgressBar_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::SetThumbPosition(UnityEngine.Vector3)
extern "C" void UIProgressBar_SetThumbPosition_m707 (UIProgressBar_t137 * __this, Vector3_t10  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;

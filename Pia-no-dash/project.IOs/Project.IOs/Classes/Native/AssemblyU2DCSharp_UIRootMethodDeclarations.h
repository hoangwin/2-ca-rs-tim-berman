#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIRoot
struct UIRoot_t101;
// UnityEngine.GameObject
struct GameObject_t23;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UIRoot::.ctor()
extern "C" void UIRoot__ctor_m1710 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
extern "C" void UIRoot__cctor_m1711 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
extern "C" int32_t UIRoot_get_activeHeight_m1712 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
extern "C" float UIRoot_get_pixelSizeAdjustment_m1713 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
extern "C" float UIRoot_GetPixelSizeAdjustment_m1714 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
extern "C" float UIRoot_GetPixelSizeAdjustment_m1715 (UIRoot_t101 * __this, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
extern "C" void UIRoot_Awake_m1716 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnEnable()
extern "C" void UIRoot_OnEnable_m1717 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDisable()
extern "C" void UIRoot_OnDisable_m1718 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
extern "C" void UIRoot_Start_m1719 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
extern "C" void UIRoot_Update_m1720 (UIRoot_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
extern "C" void UIRoot_Broadcast_m1721 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
extern "C" void UIRoot_Broadcast_m1722 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;

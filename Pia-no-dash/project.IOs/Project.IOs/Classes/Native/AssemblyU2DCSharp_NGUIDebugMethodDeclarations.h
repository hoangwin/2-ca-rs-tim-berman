#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIDebug
struct NGUIDebug_t176;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t38;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void NGUIDebug::.ctor()
extern "C" void NGUIDebug__ctor_m894 (NGUIDebug_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::.cctor()
extern "C" void NGUIDebug__cctor_m895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIDebug::get_debugRaycast()
extern "C" bool NGUIDebug_get_debugRaycast_m896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::set_debugRaycast(System.Boolean)
extern "C" void NGUIDebug_set_debugRaycast_m897 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::CreateInstance()
extern "C" void NGUIDebug_CreateInstance_m898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::LogString(System.String)
extern "C" void NGUIDebug_LogString_m899 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Log(System.Object[])
extern "C" void NGUIDebug_Log_m900 (Object_t * __this /* static, unused */, ObjectU5BU5D_t38* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::DrawBounds(UnityEngine.Bounds)
extern "C" void NGUIDebug_DrawBounds_m901 (Object_t * __this /* static, unused */, Bounds_t111  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::OnGUI()
extern "C" void NGUIDebug_OnGUI_m902 (NGUIDebug_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

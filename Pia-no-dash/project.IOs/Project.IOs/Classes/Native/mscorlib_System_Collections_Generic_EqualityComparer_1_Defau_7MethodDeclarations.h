#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2270;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m15705_gshared (DefaultComparer_t2270 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15705(__this, method) (( void (*) (DefaultComparer_t2270 *, const MethodInfo*))DefaultComparer__ctor_m15705_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15706_gshared (DefaultComparer_t2270 * __this, RaycastResult_t413  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15706(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2270 *, RaycastResult_t413 , const MethodInfo*))DefaultComparer_GetHashCode_m15706_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15707_gshared (DefaultComparer_t2270 * __this, RaycastResult_t413  ___x, RaycastResult_t413  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15707(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2270 *, RaycastResult_t413 , RaycastResult_t413 , const MethodInfo*))DefaultComparer_Equals_m15707_gshared)(__this, ___x, ___y, method)

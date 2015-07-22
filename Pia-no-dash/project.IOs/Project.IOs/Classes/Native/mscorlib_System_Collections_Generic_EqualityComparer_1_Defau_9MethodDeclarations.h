#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t2453;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m18465_gshared (DefaultComparer_t2453 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18465(__this, method) (( void (*) (DefaultComparer_t2453 *, const MethodInfo*))DefaultComparer__ctor_m18465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18466_gshared (DefaultComparer_t2453 * __this, UICharInfo_t615  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18466(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2453 *, UICharInfo_t615 , const MethodInfo*))DefaultComparer_GetHashCode_m18466_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18467_gshared (DefaultComparer_t2453 * __this, UICharInfo_t615  ___x, UICharInfo_t615  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18467(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2453 *, UICharInfo_t615 , UICharInfo_t615 , const MethodInfo*))DefaultComparer_Equals_m18467_gshared)(__this, ___x, ___y, method)

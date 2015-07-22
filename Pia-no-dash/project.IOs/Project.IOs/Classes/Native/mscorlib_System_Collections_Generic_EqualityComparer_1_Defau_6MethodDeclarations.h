#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UICamera/DepthEntry>
struct DefaultComparer_t2228;
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UICamera/DepthEntry>::.ctor()
extern "C" void DefaultComparer__ctor_m15093_gshared (DefaultComparer_t2228 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15093(__this, method) (( void (*) (DefaultComparer_t2228 *, const MethodInfo*))DefaultComparer__ctor_m15093_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UICamera/DepthEntry>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15094_gshared (DefaultComparer_t2228 * __this, DepthEntry_t248  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15094(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2228 *, DepthEntry_t248 , const MethodInfo*))DefaultComparer_GetHashCode_m15094_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UICamera/DepthEntry>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15095_gshared (DefaultComparer_t2228 * __this, DepthEntry_t248  ___x, DepthEntry_t248  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15095(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2228 *, DepthEntry_t248 , DepthEntry_t248 , const MethodInfo*))DefaultComparer_Equals_m15095_gshared)(__this, ___x, ___y, method)

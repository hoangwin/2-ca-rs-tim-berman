#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2175;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14392_gshared (DefaultComparer_t2175 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14392(__this, method) (( void (*) (DefaultComparer_t2175 *, const MethodInfo*))DefaultComparer__ctor_m14392_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14393_gshared (DefaultComparer_t2175 * __this, Vector3_t10  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14393(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2175 *, Vector3_t10 , const MethodInfo*))DefaultComparer_GetHashCode_m14393_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14394_gshared (DefaultComparer_t2175 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14394(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2175 *, Vector3_t10 , Vector3_t10 , const MethodInfo*))DefaultComparer_Equals_m14394_gshared)(__this, ___x, ___y, method)

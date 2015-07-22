#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2328;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m16652_gshared (DefaultComparer_t2328 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16652(__this, method) (( void (*) (DefaultComparer_t2328 *, const MethodInfo*))DefaultComparer__ctor_m16652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16653_gshared (DefaultComparer_t2328 * __this, UIVertex_t485  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16653(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2328 *, UIVertex_t485 , const MethodInfo*))DefaultComparer_GetHashCode_m16653_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16654_gshared (DefaultComparer_t2328 * __this, UIVertex_t485  ___x, UIVertex_t485  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16654(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2328 *, UIVertex_t485 , UIVertex_t485 , const MethodInfo*))DefaultComparer_Equals_m16654_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2739;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m21441_gshared (DefaultComparer_t2739 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21441(__this, method) (( void (*) (DefaultComparer_t2739 *, const MethodInfo*))DefaultComparer__ctor_m21441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21442_gshared (DefaultComparer_t2739 * __this, TimeSpan_t1235  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21442(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2739 *, TimeSpan_t1235 , const MethodInfo*))DefaultComparer_GetHashCode_m21442_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21443_gshared (DefaultComparer_t2739 * __this, TimeSpan_t1235  ___x, TimeSpan_t1235  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21443(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2739 *, TimeSpan_t1235 , TimeSpan_t1235 , const MethodInfo*))DefaultComparer_Equals_m21443_gshared)(__this, ___x, ___y, method)

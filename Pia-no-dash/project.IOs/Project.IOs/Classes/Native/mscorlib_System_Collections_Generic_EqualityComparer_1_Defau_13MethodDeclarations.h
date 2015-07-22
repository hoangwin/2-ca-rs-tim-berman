﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t2564;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m19962_gshared (DefaultComparer_t2564 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19962(__this, method) (( void (*) (DefaultComparer_t2564 *, const MethodInfo*))DefaultComparer__ctor_m19962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19963_gshared (DefaultComparer_t2564 * __this, KeyValuePair_2_t2157  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19963(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2564 *, KeyValuePair_2_t2157 , const MethodInfo*))DefaultComparer_GetHashCode_m19963_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19964_gshared (DefaultComparer_t2564 * __this, KeyValuePair_2_t2157  ___x, KeyValuePair_2_t2157  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19964(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2564 *, KeyValuePair_2_t2157 , KeyValuePair_2_t2157 , const MethodInfo*))DefaultComparer_Equals_m19964_gshared)(__this, ___x, ___y, method)

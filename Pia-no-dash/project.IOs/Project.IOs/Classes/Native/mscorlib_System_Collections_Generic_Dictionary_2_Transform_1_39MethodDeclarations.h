﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct Transform_1_t2561;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19947_gshared (Transform_1_t2561 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19947(__this, ___object, ___method, method) (( void (*) (Transform_1_t2561 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19947_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2527  Transform_1_Invoke_m19948_gshared (Transform_1_t2561 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19948(__this, ___key, ___value, method) (( KeyValuePair_2_t2527  (*) (Transform_1_t2561 *, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Transform_1_Invoke_m19948_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19949_gshared (Transform_1_t2561 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19949(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2561 *, Object_t *, KeyValuePair_2_t2157 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19949_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2527  Transform_1_EndInvoke_m19950_gshared (Transform_1_t2561 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19950(__this, ___result, method) (( KeyValuePair_2_t2527  (*) (Transform_1_t2561 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19950_gshared)(__this, ___result, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t2552;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19943_gshared (Transform_1_t2552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19943(__this, ___object, ___method, method) (( void (*) (Transform_1_t2552 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19943_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t65  Transform_1_Invoke_m19944_gshared (Transform_1_t2552 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19944(__this, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Transform_1_t2552 *, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Transform_1_Invoke_m19944_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19945_gshared (Transform_1_t2552 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19945(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2552 *, Object_t *, KeyValuePair_2_t2157 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19945_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t65  Transform_1_EndInvoke_m19946_gshared (Transform_1_t2552 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19946(__this, ___result, method) (( DictionaryEntry_t65  (*) (Transform_1_t2552 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19946_gshared)(__this, ___result, method)

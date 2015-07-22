#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t2468;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18798_gshared (Transform_1_t2468 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18798(__this, ___object, ___method, method) (( void (*) (Transform_1_t2468 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18798_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t65  Transform_1_Invoke_m18799_gshared (Transform_1_t2468 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18799(__this, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Transform_1_t2468 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m18799_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18800_gshared (Transform_1_t2468 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18800(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2468 *, Object_t *, int64_t, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18800_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t65  Transform_1_EndInvoke_m18801_gshared (Transform_1_t2468 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18801(__this, ___result, method) (( DictionaryEntry_t65  (*) (Transform_1_t2468 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18801_gshared)(__this, ___result, method)

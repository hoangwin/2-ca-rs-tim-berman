#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Object>
struct Transform_1_t2647;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20816_gshared (Transform_1_t2647 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m20816(__this, ___object, ___method, method) (( void (*) (Transform_1_t2647 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20816_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m20817_gshared (Transform_1_t2647 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m20817(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2647 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m20817_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20818_gshared (Transform_1_t2647 * __this, Object_t * ___key, bool ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m20818(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2647 *, Object_t *, bool, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20818_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m20819_gshared (Transform_1_t2647 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m20819(__this, ___result, method) (( Object_t * (*) (Transform_1_t2647 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20819_gshared)(__this, ___result, method)

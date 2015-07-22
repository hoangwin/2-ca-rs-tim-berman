#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t2650;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20839_gshared (Transform_1_t2650 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m20839(__this, ___object, ___method, method) (( void (*) (Transform_1_t2650 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20839_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C" bool Transform_1_Invoke_m20840_gshared (Transform_1_t2650 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m20840(__this, ___key, ___value, method) (( bool (*) (Transform_1_t2650 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m20840_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20841_gshared (Transform_1_t2650 * __this, Object_t * ___key, bool ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m20841(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2650 *, Object_t *, bool, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20841_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Transform_1_EndInvoke_m20842_gshared (Transform_1_t2650 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m20842(__this, ___result, method) (( bool (*) (Transform_1_t2650 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20842_gshared)(__this, ___result, method)

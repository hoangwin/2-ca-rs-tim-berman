#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UnityEngine.Vector3>
struct CompareFunc_t2176;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14395_gshared (CompareFunc_t2176 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m14395(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2176 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m14395_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14396_gshared (CompareFunc_t2176 * __this, Vector3_t10  ___left, Vector3_t10  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m14396(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2176 *, Vector3_t10 , Vector3_t10 , const MethodInfo*))CompareFunc_Invoke_m14396_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m14397_gshared (CompareFunc_t2176 * __this, Vector3_t10  ___left, Vector3_t10  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m14397(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2176 *, Vector3_t10 , Vector3_t10 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m14397_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14398_gshared (CompareFunc_t2176 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m14398(__this, ___result, method) (( int32_t (*) (CompareFunc_t2176 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m14398_gshared)(__this, ___result, method)

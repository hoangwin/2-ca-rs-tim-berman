#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UnityEngine.Vector2>
struct CompareFunc_t2180;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14425_gshared (CompareFunc_t2180 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m14425(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2180 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m14425_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14426_gshared (CompareFunc_t2180 * __this, Vector2_t27  ___left, Vector2_t27  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m14426(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2180 *, Vector2_t27 , Vector2_t27 , const MethodInfo*))CompareFunc_Invoke_m14426_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m14427_gshared (CompareFunc_t2180 * __this, Vector2_t27  ___left, Vector2_t27  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m14427(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2180 *, Vector2_t27 , Vector2_t27 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m14427_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14428_gshared (CompareFunc_t2180 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m14428(__this, ___result, method) (( int32_t (*) (CompareFunc_t2180 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m14428_gshared)(__this, ___result, method)

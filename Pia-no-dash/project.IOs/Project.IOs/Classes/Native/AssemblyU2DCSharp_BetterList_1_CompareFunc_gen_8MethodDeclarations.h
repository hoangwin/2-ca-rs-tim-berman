#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UnityEngine.Color32>
struct CompareFunc_t2185;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14460_gshared (CompareFunc_t2185 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m14460(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2185 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m14460_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14461_gshared (CompareFunc_t2185 * __this, Color32_t183  ___left, Color32_t183  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m14461(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2185 *, Color32_t183 , Color32_t183 , const MethodInfo*))CompareFunc_Invoke_m14461_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m14462_gshared (CompareFunc_t2185 * __this, Color32_t183  ___left, Color32_t183  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m14462(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2185 *, Color32_t183 , Color32_t183 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m14462_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14463_gshared (CompareFunc_t2185 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m14463(__this, ___result, method) (( int32_t (*) (CompareFunc_t2185 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m14463_gshared)(__this, ___result, method)

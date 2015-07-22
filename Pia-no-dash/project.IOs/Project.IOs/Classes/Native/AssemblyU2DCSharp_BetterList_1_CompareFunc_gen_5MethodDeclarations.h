#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UnityEngine.Color>
struct CompareFunc_t2172;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14366_gshared (CompareFunc_t2172 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m14366(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2172 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m14366_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14367_gshared (CompareFunc_t2172 * __this, Color_t9  ___left, Color_t9  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m14367(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2172 *, Color_t9 , Color_t9 , const MethodInfo*))CompareFunc_Invoke_m14367_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m14368_gshared (CompareFunc_t2172 * __this, Color_t9  ___left, Color_t9  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m14368(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2172 *, Color_t9 , Color_t9 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m14368_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14369_gshared (CompareFunc_t2172 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m14369(__this, ___result, method) (( int32_t (*) (CompareFunc_t2172 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m14369_gshared)(__this, ___result, method)

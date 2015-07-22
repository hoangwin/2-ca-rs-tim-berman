#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UnityEngine.Vector4>
struct CompareFunc_t2205;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14723_gshared (CompareFunc_t2205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m14723(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2205 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m14723_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14724_gshared (CompareFunc_t2205 * __this, Vector4_t198  ___left, Vector4_t198  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m14724(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2205 *, Vector4_t198 , Vector4_t198 , const MethodInfo*))CompareFunc_Invoke_m14724_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m14725_gshared (CompareFunc_t2205 * __this, Vector4_t198  ___left, Vector4_t198  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m14725(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2205 *, Vector4_t198 , Vector4_t198 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m14725_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14726_gshared (CompareFunc_t2205 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m14726(__this, ___result, method) (( int32_t (*) (CompareFunc_t2205 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m14726_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<System.String>
struct CompareFunc_t2219;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BetterList`1/CompareFunc<System.String>::.ctor(System.Object,System.IntPtr)
// BetterList`1/CompareFunc<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_3MethodDeclarations.h"
#define CompareFunc__ctor_m14957(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2219 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m13455_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.String>::Invoke(T,T)
#define CompareFunc_Invoke_m14958(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2219 *, String_t*, String_t*, const MethodInfo*))CompareFunc_Invoke_m13456_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.String>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define CompareFunc_BeginInvoke_m14959(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2219 *, String_t*, String_t*, AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m13457_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.String>::EndInvoke(System.IAsyncResult)
#define CompareFunc_EndInvoke_m14960(__this, ___result, method) (( int32_t (*) (CompareFunc_t2219 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m13458_gshared)(__this, ___result, method)

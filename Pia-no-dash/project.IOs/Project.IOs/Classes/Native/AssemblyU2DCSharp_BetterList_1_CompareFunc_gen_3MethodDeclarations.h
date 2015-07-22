#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<System.Object>
struct CompareFunc_t2105;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BetterList`1/CompareFunc<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m13455_gshared (CompareFunc_t2105 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m13455(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2105 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m13455_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m13456_gshared (CompareFunc_t2105 * __this, Object_t * ___left, Object_t * ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m13456(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2105 *, Object_t *, Object_t *, const MethodInfo*))CompareFunc_Invoke_m13456_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m13457_gshared (CompareFunc_t2105 * __this, Object_t * ___left, Object_t * ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m13457(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2105 *, Object_t *, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m13457_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m13458_gshared (CompareFunc_t2105 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m13458(__this, ___result, method) (( int32_t (*) (CompareFunc_t2105 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m13458_gshared)(__this, ___result, method)

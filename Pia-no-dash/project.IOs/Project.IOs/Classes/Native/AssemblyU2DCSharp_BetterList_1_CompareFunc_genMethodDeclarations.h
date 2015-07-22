#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t258;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m2373_gshared (CompareFunc_t258 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2373(__this, ___object, ___method, method) (( void (*) (CompareFunc_t258 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2373_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m15096_gshared (CompareFunc_t258 * __this, DepthEntry_t248  ___left, DepthEntry_t248  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m15096(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t258 *, DepthEntry_t248 , DepthEntry_t248 , const MethodInfo*))CompareFunc_Invoke_m15096_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m15097_gshared (CompareFunc_t258 * __this, DepthEntry_t248  ___left, DepthEntry_t248  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m15097(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t258 *, DepthEntry_t248 , DepthEntry_t248 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m15097_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m15098_gshared (CompareFunc_t258 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m15098(__this, ___result, method) (( int32_t (*) (CompareFunc_t258 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m15098_gshared)(__this, ___result, method)

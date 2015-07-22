#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2454;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18468_gshared (Predicate_1_t2454 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18468(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2454 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18468_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18469_gshared (Predicate_1_t2454 * __this, UICharInfo_t615  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18469(__this, ___obj, method) (( bool (*) (Predicate_1_t2454 *, UICharInfo_t615 , const MethodInfo*))Predicate_1_Invoke_m18469_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18470_gshared (Predicate_1_t2454 * __this, UICharInfo_t615  ___obj, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18470(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2454 *, UICharInfo_t615 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18470_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18471_gshared (Predicate_1_t2454 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18471(__this, ___result, method) (( bool (*) (Predicate_1_t2454 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18471_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t619;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m3922_gshared (UnityAction_1_t619 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m3922(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t619 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3922_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m17143_gshared (UnityAction_1_t619 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m17143(__this, ___arg0, method) (( void (*) (UnityAction_1_t619 *, float, const MethodInfo*))UnityAction_1_Invoke_m17143_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m17144_gshared (UnityAction_1_t619 * __this, float ___arg0, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m17144(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t619 *, float, AsyncCallback_t14 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m17144_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m17145_gshared (UnityAction_1_t619 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m17145(__this, ___result, method) (( void (*) (UnityAction_1_t619 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m17145_gshared)(__this, ___result, method)

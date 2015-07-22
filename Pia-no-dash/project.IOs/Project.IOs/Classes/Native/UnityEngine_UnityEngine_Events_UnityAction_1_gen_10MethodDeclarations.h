#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2384;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m17444_gshared (UnityAction_1_t2384 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m17444(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2384 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m17444_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m17445_gshared (UnityAction_1_t2384 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m17445(__this, ___arg0, method) (( void (*) (UnityAction_1_t2384 *, bool, const MethodInfo*))UnityAction_1_Invoke_m17445_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m17446_gshared (UnityAction_1_t2384 * __this, bool ___arg0, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m17446(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2384 *, bool, AsyncCallback_t14 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m17446_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m17447_gshared (UnityAction_1_t2384 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m17447(__this, ___result, method) (( void (*) (UnityAction_1_t2384 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m17447_gshared)(__this, ___result, method)

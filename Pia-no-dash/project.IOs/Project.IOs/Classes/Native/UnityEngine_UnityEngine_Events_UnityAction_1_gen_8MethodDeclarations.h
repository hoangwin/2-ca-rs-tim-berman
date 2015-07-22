#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2362;
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

// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m17136(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2362 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m15464_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
#define UnityAction_1_Invoke_m17137(__this, ___arg0, method) (( void (*) (UnityAction_1_t2362 *, String_t*, const MethodInfo*))UnityAction_1_Invoke_m15465_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m17138(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2362 *, String_t*, AsyncCallback_t14 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15466_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m17139(__this, ___result, method) (( void (*) (UnityAction_1_t2362 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15467_gshared)(__this, ___result, method)

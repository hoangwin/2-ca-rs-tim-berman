#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t553;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m4016(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t553 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m15464_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Invoke(T0)
#define UnityAction_1_Invoke_m17689(__this, ___arg0, method) (( void (*) (UnityAction_1_t553 *, List_1_t584 *, const MethodInfo*))UnityAction_1_Invoke_m15465_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m17690(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t553 *, List_1_t584 *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15466_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m17691(__this, ___result, method) (( void (*) (UnityAction_1_t553 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15467_gshared)(__this, ___result, method)

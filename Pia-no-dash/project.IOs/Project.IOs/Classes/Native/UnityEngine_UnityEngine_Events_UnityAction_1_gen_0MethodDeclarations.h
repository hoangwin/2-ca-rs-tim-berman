#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t578;
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

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m3801_gshared (UnityAction_1_t578 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m3801(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t578 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3801_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16165_gshared (UnityAction_1_t578 * __this, Color_t9  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m16165(__this, ___arg0, method) (( void (*) (UnityAction_1_t578 *, Color_t9 , const MethodInfo*))UnityAction_1_Invoke_m16165_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16166_gshared (UnityAction_1_t578 * __this, Color_t9  ___arg0, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16166(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t578 *, Color_t9 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m16166_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16167_gshared (UnityAction_1_t578 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m16167(__this, ___result, method) (( void (*) (UnityAction_1_t578 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m16167_gshared)(__this, ___result, method)

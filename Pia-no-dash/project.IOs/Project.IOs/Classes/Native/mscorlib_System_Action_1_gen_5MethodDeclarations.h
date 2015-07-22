#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t2319;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m16499_gshared (Action_1_t2319 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m16499(__this, ___object, ___method, method) (( void (*) (Action_1_t2319 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m16499_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m16500_gshared (Action_1_t2319 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m16500(__this, ___obj, method) (( void (*) (Action_1_t2319 *, Object_t *, const MethodInfo*))Action_1_Invoke_m16500_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m16502_gshared (Action_1_t2319 * __this, Object_t * ___obj, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m16502(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2319 *, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m16502_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m16504_gshared (Action_1_t2319 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m16504(__this, ___result, method) (( void (*) (Action_1_t2319 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m16504_gshared)(__this, ___result, method)

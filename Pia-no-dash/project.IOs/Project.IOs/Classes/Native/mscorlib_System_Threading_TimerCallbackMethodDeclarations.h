#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.TimerCallback
struct TimerCallback_t1867;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void TimerCallback__ctor_m12420 (TimerCallback_t1867 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern "C" void TimerCallback_Invoke_m12421 (TimerCallback_t1867 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TimerCallback_t1867(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TimerCallback_BeginInvoke_m12422 (TimerCallback_t1867 * __this, Object_t * ___state, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void TimerCallback_EndInvoke_m12423 (TimerCallback_t1867 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

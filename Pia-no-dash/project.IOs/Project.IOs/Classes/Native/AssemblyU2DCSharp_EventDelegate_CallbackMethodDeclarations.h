#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EventDelegate/Callback
struct Callback_t171;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
extern "C" void Callback__ctor_m850 (Callback_t171 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
extern "C" void Callback_Invoke_m851 (Callback_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Callback_t171(Il2CppObject* delegate);
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Callback_BeginInvoke_m852 (Callback_t171 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
extern "C" void Callback_EndInvoke_m853 (Callback_t171 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

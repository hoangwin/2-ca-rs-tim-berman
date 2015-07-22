#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPanel/OnFinished
struct OnFinished_t91;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SpringPanel/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m1037 (OnFinished_t91 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel/OnFinished::Invoke()
extern "C" void OnFinished_Invoke_m1038 (OnFinished_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t91(Il2CppObject* delegate);
// System.IAsyncResult SpringPanel/OnFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m1039 (OnFinished_t91 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m1040 (OnFinished_t91 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

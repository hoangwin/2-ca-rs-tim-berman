#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPosition/OnFinished
struct OnFinished_t219;
// System.Object
struct Object_t;
// SpringPosition
struct SpringPosition_t218;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SpringPosition/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m1241 (OnFinished_t219 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::Invoke(SpringPosition)
extern "C" void OnFinished_Invoke_m1242 (OnFinished_t219 * __this, SpringPosition_t218 * ___spring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t219(Il2CppObject* delegate, SpringPosition_t218 * ___spring);
// System.IAsyncResult SpringPosition/OnFinished::BeginInvoke(SpringPosition,System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m1243 (OnFinished_t219 * __this, SpringPosition_t218 * ___spring, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m1244 (OnFinished_t219 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

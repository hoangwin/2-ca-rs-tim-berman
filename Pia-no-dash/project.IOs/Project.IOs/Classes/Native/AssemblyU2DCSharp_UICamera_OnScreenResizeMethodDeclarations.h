#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera/OnScreenResize
struct OnScreenResize_t250;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/OnScreenResize::.ctor(System.Object,System.IntPtr)
extern "C" void OnScreenResize__ctor_m1429 (OnScreenResize_t250 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnScreenResize::Invoke()
extern "C" void OnScreenResize_Invoke_m1430 (OnScreenResize_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScreenResize_t250(Il2CppObject* delegate);
// System.IAsyncResult UICamera/OnScreenResize::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnScreenResize_BeginInvoke_m1431 (OnScreenResize_t250 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnScreenResize::EndInvoke(System.IAsyncResult)
extern "C" void OnScreenResize_EndInvoke_m1432 (OnScreenResize_t250 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

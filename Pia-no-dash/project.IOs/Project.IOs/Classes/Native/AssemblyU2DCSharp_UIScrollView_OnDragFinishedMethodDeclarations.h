#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollView/OnDragFinished
struct OnDragFinished_t146;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIScrollView/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m724 (OnDragFinished_t146 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m725 (OnDragFinished_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t146(Il2CppObject* delegate);
// System.IAsyncResult UIScrollView/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m726 (OnDragFinished_t146 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m727 (OnDragFinished_t146 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIProgressBar/OnDragFinished
struct OnDragFinished_t136;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIProgressBar/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m680 (OnDragFinished_t136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m681 (OnDragFinished_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t136(Il2CppObject* delegate);
// System.IAsyncResult UIProgressBar/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m682 (OnDragFinished_t136 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m683 (OnDragFinished_t136 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGrid/OnReposition
struct OnReposition_t116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIGrid/OnReposition::.ctor(System.Object,System.IntPtr)
extern "C" void OnReposition__ctor_m591 (OnReposition_t116 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnReposition::Invoke()
extern "C" void OnReposition_Invoke_m592 (OnReposition_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnReposition_t116(Il2CppObject* delegate);
// System.IAsyncResult UIGrid/OnReposition::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnReposition_BeginInvoke_m593 (OnReposition_t116 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnReposition::EndInvoke(System.IAsyncResult)
extern "C" void OnReposition_EndInvoke_m594 (OnReposition_t116 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITable/OnReposition
struct OnReposition_t150;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UITable/OnReposition::.ctor(System.Object,System.IntPtr)
extern "C" void OnReposition__ctor_m771 (OnReposition_t150 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable/OnReposition::Invoke()
extern "C" void OnReposition_Invoke_m772 (OnReposition_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnReposition_t150(Il2CppObject* delegate);
// System.IAsyncResult UITable/OnReposition::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnReposition_BeginInvoke_m773 (OnReposition_t150 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable/OnReposition::EndInvoke(System.IAsyncResult)
extern "C" void OnReposition_EndInvoke_m774 (OnReposition_t150 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

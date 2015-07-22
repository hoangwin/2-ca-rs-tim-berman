#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera/OnCustomInput
struct OnCustomInput_t251;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/OnCustomInput::.ctor(System.Object,System.IntPtr)
extern "C" void OnCustomInput__ctor_m1433 (OnCustomInput_t251 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::Invoke()
extern "C" void OnCustomInput_Invoke_m1434 (OnCustomInput_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnCustomInput_t251(Il2CppObject* delegate);
// System.IAsyncResult UICamera/OnCustomInput::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnCustomInput_BeginInvoke_m1435 (OnCustomInput_t251 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::EndInvoke(System.IAsyncResult)
extern "C" void OnCustomInput_EndInvoke_m1436 (OnCustomInput_t251 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

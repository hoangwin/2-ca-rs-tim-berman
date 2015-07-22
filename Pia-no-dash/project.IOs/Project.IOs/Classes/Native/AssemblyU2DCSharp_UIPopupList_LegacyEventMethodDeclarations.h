#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList/LegacyEvent
struct LegacyEvent_t128;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
extern "C" void LegacyEvent__ctor_m645 (LegacyEvent_t128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
extern "C" void LegacyEvent_Invoke_m646 (LegacyEvent_t128 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_LegacyEvent_t128(Il2CppObject* delegate, String_t* ___val);
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * LegacyEvent_BeginInvoke_m647 (LegacyEvent_t128 * __this, String_t* ___val, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
extern "C" void LegacyEvent_EndInvoke_m648 (LegacyEvent_t128 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInput/OnValidate
struct OnValidate_t264;
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

// System.Void UIInput/OnValidate::.ctor(System.Object,System.IntPtr)
extern "C" void OnValidate__ctor_m1530 (OnValidate_t264 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::Invoke(System.String,System.Int32,System.Char)
extern "C" uint16_t OnValidate_Invoke_m1531 (OnValidate_t264 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidate_t264(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UIInput/OnValidate::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValidate_BeginInvoke_m1532 (OnValidate_t264 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::EndInvoke(System.IAsyncResult)
extern "C" uint16_t OnValidate_EndInvoke_m1533 (OnValidate_t264 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/VoidDelegate
struct VoidDelegate_t199;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t23;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIEventListener/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VoidDelegate__ctor_m1093 (VoidDelegate_t199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::Invoke(UnityEngine.GameObject)
extern "C" void VoidDelegate_Invoke_m1094 (VoidDelegate_t199 * __this, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidDelegate_t199(Il2CppObject* delegate, GameObject_t23 * ___go);
// System.IAsyncResult UIEventListener/VoidDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * VoidDelegate_BeginInvoke_m1095 (VoidDelegate_t199 * __this, GameObject_t23 * ___go, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VoidDelegate_EndInvoke_m1096 (VoidDelegate_t199 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

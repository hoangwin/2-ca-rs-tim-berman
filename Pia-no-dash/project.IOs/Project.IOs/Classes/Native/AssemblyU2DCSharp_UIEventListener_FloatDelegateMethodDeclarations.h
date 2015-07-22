#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/FloatDelegate
struct FloatDelegate_t201;
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

// System.Void UIEventListener/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FloatDelegate__ctor_m1101 (FloatDelegate_t201 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C" void FloatDelegate_Invoke_m1102 (FloatDelegate_t201 * __this, GameObject_t23 * ___go, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FloatDelegate_t201(Il2CppObject* delegate, GameObject_t23 * ___go, float ___delta);
// System.IAsyncResult UIEventListener/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * FloatDelegate_BeginInvoke_m1103 (FloatDelegate_t201 * __this, GameObject_t23 * ___go, float ___delta, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FloatDelegate_EndInvoke_m1104 (FloatDelegate_t201 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

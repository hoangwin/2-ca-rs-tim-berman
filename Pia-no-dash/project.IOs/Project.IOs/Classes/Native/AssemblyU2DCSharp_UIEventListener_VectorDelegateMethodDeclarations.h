#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/VectorDelegate
struct VectorDelegate_t202;
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
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIEventListener/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VectorDelegate__ctor_m1105 (VectorDelegate_t202 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void VectorDelegate_Invoke_m1106 (VectorDelegate_t202 * __this, GameObject_t23 * ___go, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VectorDelegate_t202(Il2CppObject* delegate, GameObject_t23 * ___go, Vector2_t27  ___delta);
// System.IAsyncResult UIEventListener/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C" Object_t * VectorDelegate_BeginInvoke_m1107 (VectorDelegate_t202 * __this, GameObject_t23 * ___go, Vector2_t27  ___delta, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VectorDelegate_EndInvoke_m1108 (VectorDelegate_t202 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

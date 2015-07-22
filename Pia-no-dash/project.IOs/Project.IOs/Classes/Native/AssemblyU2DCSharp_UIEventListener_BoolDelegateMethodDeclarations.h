#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/BoolDelegate
struct BoolDelegate_t200;
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

// System.Void UIEventListener/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BoolDelegate__ctor_m1097 (BoolDelegate_t200 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C" void BoolDelegate_Invoke_m1098 (BoolDelegate_t200 * __this, GameObject_t23 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolDelegate_t200(Il2CppObject* delegate, GameObject_t23 * ___go, bool ___state);
// System.IAsyncResult UIEventListener/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * BoolDelegate_BeginInvoke_m1099 (BoolDelegate_t200 * __this, GameObject_t23 * ___go, bool ___state, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BoolDelegate_EndInvoke_m1100 (BoolDelegate_t200 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

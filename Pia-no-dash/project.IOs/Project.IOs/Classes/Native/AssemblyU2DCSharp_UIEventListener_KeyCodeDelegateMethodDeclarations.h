#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t205;
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
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeDelegate__ctor_m1117 (KeyCodeDelegate_t205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C" void KeyCodeDelegate_Invoke_m1118 (KeyCodeDelegate_t205 * __this, GameObject_t23 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t205(Il2CppObject* delegate, GameObject_t23 * ___go, int32_t ___key);
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeDelegate_BeginInvoke_m1119 (KeyCodeDelegate_t205 * __this, GameObject_t23 * ___go, int32_t ___key, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeDelegate_EndInvoke_m1120 (KeyCodeDelegate_t205 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

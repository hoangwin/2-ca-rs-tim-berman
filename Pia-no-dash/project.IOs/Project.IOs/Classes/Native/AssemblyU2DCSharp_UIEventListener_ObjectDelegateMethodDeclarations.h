#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener/ObjectDelegate
struct ObjectDelegate_t204;
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

// System.Void UIEventListener/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ObjectDelegate__ctor_m1113 (ObjectDelegate_t204 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void ObjectDelegate_Invoke_m1114 (ObjectDelegate_t204 * __this, GameObject_t23 * ___go, GameObject_t23 * ___draggedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectDelegate_t204(Il2CppObject* delegate, GameObject_t23 * ___go, GameObject_t23 * ___draggedObject);
// System.IAsyncResult UIEventListener/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * ObjectDelegate_BeginInvoke_m1115 (ObjectDelegate_t204 * __this, GameObject_t23 * ___go, GameObject_t23 * ___draggedObject, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ObjectDelegate_EndInvoke_m1116 (ObjectDelegate_t204 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/ApplyTween
struct ApplyTween_t17;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" void ApplyTween__ctor_m13 (ApplyTween_t17 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
extern "C" void ApplyTween_Invoke_m14 (ApplyTween_t17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ApplyTween_t17(Il2CppObject* delegate);
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ApplyTween_BeginInvoke_m15 (ApplyTween_t17 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" void ApplyTween_EndInvoke_m16 (ApplyTween_t17 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

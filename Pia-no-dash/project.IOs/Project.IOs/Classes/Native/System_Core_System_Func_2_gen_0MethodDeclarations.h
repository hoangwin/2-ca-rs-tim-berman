#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t545;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t585;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m4007(__this, ___object, ___method, method) (( void (*) (Func_2_t545 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17650_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
#define Func_2_Invoke_m4008(__this, ___arg1, method) (( float (*) (Func_2_t545 *, Object_t *, const MethodInfo*))Func_2_Invoke_m17651_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m17652(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t545 *, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17653_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m17654(__this, ___result, method) (( float (*) (Func_2_t545 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17655_gshared)(__this, ___result, method)

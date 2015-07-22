#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t2399;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17650_gshared (Func_2_t2399 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m17650(__this, ___object, ___method, method) (( void (*) (Func_2_t2399 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17650_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m17651_gshared (Func_2_t2399 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m17651(__this, ___arg1, method) (( float (*) (Func_2_t2399 *, Object_t *, const MethodInfo*))Func_2_Invoke_m17651_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17653_gshared (Func_2_t2399 * __this, Object_t * ___arg1, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m17653(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2399 *, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17653_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m17655_gshared (Func_2_t2399 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m17655(__this, ___result, method) (( float (*) (Func_2_t2399 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17655_gshared)(__this, ___result, method)

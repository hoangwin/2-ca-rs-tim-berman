#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2680;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m21092_gshared (Converter_2_t2680 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m21092(__this, ___object, ___method, method) (( void (*) (Converter_2_t2680 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m21092_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m21093_gshared (Converter_2_t2680 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m21093(__this, ___input, method) (( Object_t * (*) (Converter_2_t2680 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m21093_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m21094_gshared (Converter_2_t2680 * __this, Object_t * ___input, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m21094(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2680 *, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m21094_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m21095_gshared (Converter_2_t2680 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m21095(__this, ___result, method) (( Object_t * (*) (Converter_2_t2680 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m21095_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<BMSymbol>
struct Predicate_1_t2233;
// System.Object
struct Object_t;
// BMSymbol
struct BMSymbol_t168;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<BMSymbol>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m15182(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2233 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12654_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<BMSymbol>::Invoke(T)
#define Predicate_1_Invoke_m15183(__this, ___obj, method) (( bool (*) (Predicate_1_t2233 *, BMSymbol_t168 *, const MethodInfo*))Predicate_1_Invoke_m12655_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<BMSymbol>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m15184(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2233 *, BMSymbol_t168 *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12656_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<BMSymbol>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m15185(__this, ___result, method) (( bool (*) (Predicate_1_t2233 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12657_gshared)(__this, ___result, method)

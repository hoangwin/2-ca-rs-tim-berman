#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Hashtable>
struct Predicate_1_t2040;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t24;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Collections.Hashtable>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12713(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2040 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12654_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Hashtable>::Invoke(T)
#define Predicate_1_Invoke_m12714(__this, ___obj, method) (( bool (*) (Predicate_1_t2040 *, Hashtable_t24 *, const MethodInfo*))Predicate_1_Invoke_m12655_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Hashtable>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12715(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2040 *, Hashtable_t24 *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12656_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Hashtable>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12716(__this, ___result, method) (( bool (*) (Predicate_1_t2040 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12657_gshared)(__this, ___result, method)

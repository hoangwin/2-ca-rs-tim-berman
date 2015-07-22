#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2322;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16539_gshared (Predicate_1_t2322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16539(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2322 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16539_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16540_gshared (Predicate_1_t2322 * __this, UIVertex_t485  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16540(__this, ___obj, method) (( bool (*) (Predicate_1_t2322 *, UIVertex_t485 , const MethodInfo*))Predicate_1_Invoke_m16540_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16541_gshared (Predicate_1_t2322 * __this, UIVertex_t485  ___obj, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16541(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2322 *, UIVertex_t485 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16541_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16542_gshared (Predicate_1_t2322 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16542(__this, ___result, method) (( bool (*) (Predicate_1_t2322 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16542_gshared)(__this, ___result, method)

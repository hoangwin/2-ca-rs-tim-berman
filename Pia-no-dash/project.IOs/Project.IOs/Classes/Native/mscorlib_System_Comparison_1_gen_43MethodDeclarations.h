#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t2622;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t862;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_7MethodDeclarations.h"
#define Comparison_1__ctor_m20534(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2622 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12679_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m20535(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2622 *, PersistentCall_t862 *, PersistentCall_t862 *, const MethodInfo*))Comparison_1_Invoke_m12680_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m20536(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2622 *, PersistentCall_t862 *, PersistentCall_t862 *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12681_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m20537(__this, ___result, method) (( int32_t (*) (Comparison_1_t2622 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12682_gshared)(__this, ___result, method)

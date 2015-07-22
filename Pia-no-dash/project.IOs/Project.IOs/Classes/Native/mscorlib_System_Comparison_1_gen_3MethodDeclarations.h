#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t380;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3664_gshared (Comparison_1_t380 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3664(__this, ___object, ___method, method) (( void (*) (Comparison_1_t380 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3664_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15332_gshared (Comparison_1_t380 * __this, RaycastResult_t413  ___x, RaycastResult_t413  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15332(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t380 *, RaycastResult_t413 , RaycastResult_t413 , const MethodInfo*))Comparison_1_Invoke_m15332_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15333_gshared (Comparison_1_t380 * __this, RaycastResult_t413  ___x, RaycastResult_t413  ___y, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15333(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t380 *, RaycastResult_t413 , RaycastResult_t413 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15333_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15334_gshared (Comparison_1_t380 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15334(__this, ___result, method) (( int32_t (*) (Comparison_1_t380 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15334_gshared)(__this, ___result, method)

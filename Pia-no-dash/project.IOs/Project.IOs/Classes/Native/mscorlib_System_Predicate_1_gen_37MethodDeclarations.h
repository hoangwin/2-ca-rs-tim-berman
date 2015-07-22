﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2463;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18610_gshared (Predicate_1_t2463 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18610(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2463 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18610_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18611_gshared (Predicate_1_t2463 * __this, UILineInfo_t613  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18611(__this, ___obj, method) (( bool (*) (Predicate_1_t2463 *, UILineInfo_t613 , const MethodInfo*))Predicate_1_Invoke_m18611_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18612_gshared (Predicate_1_t2463 * __this, UILineInfo_t613  ___obj, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18612(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2463 *, UILineInfo_t613 , AsyncCallback_t14 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18612_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18613_gshared (Predicate_1_t2463 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18613(__this, ___result, method) (( bool (*) (Predicate_1_t2463 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18613_gshared)(__this, ___result, method)

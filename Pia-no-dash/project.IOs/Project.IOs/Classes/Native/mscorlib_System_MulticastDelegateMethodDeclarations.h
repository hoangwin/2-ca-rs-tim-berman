#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t16;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1973;
// System.Delegate
struct Delegate_t333;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m8079 (MulticastDelegate_t16 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m8080 (MulticastDelegate_t16 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m8081 (MulticastDelegate_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1973* MulticastDelegate_GetInvocationList_m8082 (MulticastDelegate_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t333 * MulticastDelegate_CombineImpl_m8083 (MulticastDelegate_t16 * __this, Delegate_t333 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m8084 (MulticastDelegate_t16 * __this, MulticastDelegate_t16 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t16 * MulticastDelegate_KPM_m8085 (Object_t * __this /* static, unused */, MulticastDelegate_t16 * ___needle, MulticastDelegate_t16 * ___haystack, MulticastDelegate_t16 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t333 * MulticastDelegate_RemoveImpl_m8086 (MulticastDelegate_t16 * __this, Delegate_t333 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

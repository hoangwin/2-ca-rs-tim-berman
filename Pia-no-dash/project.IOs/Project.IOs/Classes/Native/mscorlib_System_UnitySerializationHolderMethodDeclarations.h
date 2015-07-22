#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1943;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1885;
// System.Reflection.Module
struct Module_t1546;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m12368 (UnitySerializationHolder_t1943 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m12369 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t900 * ___info, StreamingContext_t901  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m12370 (Object_t * __this /* static, unused */, DBNull_t1885 * ___instance, SerializationInfo_t900 * ___info, StreamingContext_t901  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m12371 (Object_t * __this /* static, unused */, Module_t1546 * ___instance, SerializationInfo_t900 * ___info, StreamingContext_t901  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m12372 (UnitySerializationHolder_t1943 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m12373 (UnitySerializationHolder_t1943 * __this, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

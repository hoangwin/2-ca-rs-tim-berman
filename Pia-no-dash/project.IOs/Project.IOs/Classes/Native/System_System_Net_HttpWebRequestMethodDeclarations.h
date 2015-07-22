#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1075;
// System.Uri
struct Uri_t782;
// System.Net.ServicePoint
struct ServicePoint_t1155;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m6673 (HttpWebRequest_t1075 * __this, Uri_t782 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m6674 (HttpWebRequest_t1075 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m6675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6676 (HttpWebRequest_t1075 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t782 * HttpWebRequest_get_Address_m6520 (HttpWebRequest_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1155 * HttpWebRequest_get_ServicePoint_m6524 (HttpWebRequest_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1155 * HttpWebRequest_GetServicePoint_m6677 (HttpWebRequest_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m6678 (HttpWebRequest_t1075 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;

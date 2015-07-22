#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1212;
// System.Uri
struct Uri_t782;
// System.String[]
struct StringU5BU5D_t284;
// System.Net.ICredentials
struct ICredentials_t1211;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m6754 (WebProxy_t1212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m6755 (WebProxy_t1212 * __this, Uri_t782 * ___address, bool ___bypassOnLocal, StringU5BU5D_t284* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m6756 (WebProxy_t1212 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m6757 (WebProxy_t1212 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m6758 (WebProxy_t1212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t782 * WebProxy_GetProxy_m6759 (WebProxy_t1212 * __this, Uri_t782 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m6760 (WebProxy_t1212 * __this, Uri_t782 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m6761 (WebProxy_t1212 * __this, SerializationInfo_t900 * ___serializationInfo, StreamingContext_t901  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m6762 (WebProxy_t1212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

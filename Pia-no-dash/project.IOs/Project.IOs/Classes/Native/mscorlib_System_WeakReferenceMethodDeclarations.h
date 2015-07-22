#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.WeakReference
struct WeakReference_t1703;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.WeakReference::.ctor()
extern "C" void WeakReference__ctor_m12391 (WeakReference_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" void WeakReference__ctor_m12392 (WeakReference_t1703 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" void WeakReference__ctor_m12393 (WeakReference_t1703 * __this, Object_t * ___target, bool ___trackResurrection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WeakReference__ctor_m12394 (WeakReference_t1703 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" void WeakReference_AllocateHandle_m12395 (WeakReference_t1703 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
extern "C" Object_t * WeakReference_get_Target_m12396 (WeakReference_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" bool WeakReference_get_TrackResurrection_m12397 (WeakReference_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
extern "C" void WeakReference_Finalize_m12398 (WeakReference_t1703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WeakReference_GetObjectData_m12399 (WeakReference_t1703 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

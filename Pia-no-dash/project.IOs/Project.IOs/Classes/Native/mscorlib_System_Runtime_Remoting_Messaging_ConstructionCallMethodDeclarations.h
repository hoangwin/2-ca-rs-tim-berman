#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1669;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1640;
// System.Object[]
struct ObjectU5BU5D_t38;
// System.Collections.IList
struct IList_t1285;
// System.Collections.IDictionary
struct IDictionary_t1260;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m10369 (ConstructionCall_t1669 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m10370 (ConstructionCall_t1669 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C" void ConstructionCall_InitDictionary_m10371 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m10372 (ConstructionCall_t1669 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C" Type_t * ConstructionCall_get_ActivationType_m10373 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m10374 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m10375 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m10376 (ConstructionCall_t1669 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t38* ConstructionCall_get_CallSiteActivationAttributes_m10377 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m10378 (ConstructionCall_t1669 * __this, ObjectU5BU5D_t38* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C" Object_t * ConstructionCall_get_ContextProperties_m10379 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C" void ConstructionCall_InitMethodProperty_m10380 (ConstructionCall_t1669 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall_GetObjectData_m10381 (ConstructionCall_t1669 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m10382 (ConstructionCall_t1669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

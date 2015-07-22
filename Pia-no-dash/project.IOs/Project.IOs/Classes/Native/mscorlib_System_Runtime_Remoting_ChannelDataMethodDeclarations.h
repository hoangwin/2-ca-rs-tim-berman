#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1710;
// System.Collections.ArrayList
struct ArrayList_t64;
// System.Collections.Hashtable
struct Hashtable_t24;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m10600 (ChannelData_t1710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t64 * ChannelData_get_ServerProviders_m10601 (ChannelData_t1710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t64 * ChannelData_get_ClientProviders_m10602 (ChannelData_t1710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t24 * ChannelData_get_CustomProperties_m10603 (ChannelData_t1710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m10604 (ChannelData_t1710 * __this, ChannelData_t1710 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

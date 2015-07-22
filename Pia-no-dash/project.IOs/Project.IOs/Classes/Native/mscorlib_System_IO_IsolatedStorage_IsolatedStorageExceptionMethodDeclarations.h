#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IsolatedStorage.IsolatedStorageException
struct IsolatedStorageException_t1492;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor()
extern "C" void IsolatedStorageException__ctor_m9351 (IsolatedStorageException_t1492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.String)
extern "C" void IsolatedStorageException__ctor_m9352 (IsolatedStorageException_t1492 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IsolatedStorageException__ctor_m9353 (IsolatedStorageException_t1492 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

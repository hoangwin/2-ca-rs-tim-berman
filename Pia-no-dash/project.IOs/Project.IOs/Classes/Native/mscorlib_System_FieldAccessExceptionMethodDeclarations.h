#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FieldAccessException
struct FieldAccessException_t1905;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
extern "C" void FieldAccessException__ctor_m12017 (FieldAccessException_t1905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
extern "C" void FieldAccessException__ctor_m12018 (FieldAccessException_t1905 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FieldAccessException__ctor_m12019 (FieldAccessException_t1905 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

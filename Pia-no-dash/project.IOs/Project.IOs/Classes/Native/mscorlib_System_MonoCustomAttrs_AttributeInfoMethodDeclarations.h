#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t1917;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1340;

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m12081 (AttributeInfo_t1917 * __this, AttributeUsageAttribute_t1340 * ___usage, int32_t ___inheritanceLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t1340 * AttributeInfo_get_Usage_m12082 (AttributeInfo_t1917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m12083 (AttributeInfo_t1917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

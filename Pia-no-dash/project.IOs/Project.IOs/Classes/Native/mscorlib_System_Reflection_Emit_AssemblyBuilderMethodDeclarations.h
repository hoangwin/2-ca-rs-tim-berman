#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1529;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1528;
// System.Type[]
struct TypeU5BU5D_t793;
// System.Exception
struct Exception_t54;
// System.Reflection.AssemblyName
struct AssemblyName_t1577;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m9665 (AssemblyBuilder_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1528* AssemblyBuilder_GetModulesInternal_m9666 (AssemblyBuilder_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t793* AssemblyBuilder_GetTypes_m9667 (AssemblyBuilder_t1529 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m9668 (AssemblyBuilder_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t54 * AssemblyBuilder_not_supported_m9669 (AssemblyBuilder_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1577 * AssemblyBuilder_UnprotectedGetName_m9670 (AssemblyBuilder_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

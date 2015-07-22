#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t704;
// UnityEngine.Object[]
struct ObjectU5BU5D_t348;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t62;
struct Object_t62_marshaled;
// System.String
struct String_t;

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
extern "C" ObjectU5BU5D_t348* Resources_FindObjectsOfTypeAll_m2352 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t62 * Resources_Load_m2102 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;

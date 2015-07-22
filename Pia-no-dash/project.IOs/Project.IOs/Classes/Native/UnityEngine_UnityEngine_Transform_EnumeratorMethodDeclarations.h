#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform/Enumerator
struct Enumerator_t724;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t32;

// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m4709 (Enumerator_t724 * __this, Transform_t32 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4710 (Enumerator_t724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4711 (Enumerator_t724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

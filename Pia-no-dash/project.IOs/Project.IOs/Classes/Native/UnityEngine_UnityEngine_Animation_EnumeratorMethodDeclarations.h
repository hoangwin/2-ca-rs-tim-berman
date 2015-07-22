#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation/Enumerator
struct Enumerator_t745;
// System.Object
struct Object_t;
// UnityEngine.Animation
struct Animation_t121;

// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m4820 (Enumerator_t745 * __this, Animation_t121 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4821 (Enumerator_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4822 (Enumerator_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

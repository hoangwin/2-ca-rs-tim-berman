#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t666;
struct Gradient_t666_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m4159 (Gradient_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m4160 (Gradient_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m4161 (Gradient_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m4162 (Gradient_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t666_marshal(const Gradient_t666& unmarshaled, Gradient_t666_marshaled& marshaled);
void Gradient_t666_marshal_back(const Gradient_t666_marshaled& marshaled, Gradient_t666& unmarshaled);
void Gradient_t666_marshal_cleanup(Gradient_t666_marshaled& marshaled);

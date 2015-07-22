#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t44;
struct WaitForSeconds_t44_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m308 (WaitForSeconds_t44 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t44_marshal(const WaitForSeconds_t44& unmarshaled, WaitForSeconds_t44_marshaled& marshaled);
void WaitForSeconds_t44_marshal_back(const WaitForSeconds_t44_marshaled& marshaled, WaitForSeconds_t44& unmarshaled);
void WaitForSeconds_t44_marshal_cleanup(WaitForSeconds_t44_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t643;
struct YieldInstruction_t643_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m4738 (YieldInstruction_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t643_marshal(const YieldInstruction_t643& unmarshaled, YieldInstruction_t643_marshaled& marshaled);
void YieldInstruction_t643_marshal_back(const YieldInstruction_t643_marshaled& marshaled, YieldInstruction_t643& unmarshaled);
void YieldInstruction_t643_marshal_cleanup(YieldInstruction_t643_marshaled& marshaled);

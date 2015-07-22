#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealTime
struct RealTime_t186;

// System.Void RealTime::.ctor()
extern "C" void RealTime__ctor_m1032 (RealTime_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::get_time()
extern "C" float RealTime_get_time_m1033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RealTime::get_deltaTime()
extern "C" float RealTime_get_deltaTime_m1034 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::Spawn()
extern "C" void RealTime_Spawn_m1035 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealTime::Update()
extern "C" void RealTime_Update_m1036 (RealTime_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

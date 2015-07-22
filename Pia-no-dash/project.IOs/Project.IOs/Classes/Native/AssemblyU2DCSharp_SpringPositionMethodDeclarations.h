#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPosition
struct SpringPosition_t218;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPosition::.ctor()
extern "C" void SpringPosition__ctor_m1245 (SpringPosition_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Start()
extern "C" void SpringPosition_Start_m1246 (SpringPosition_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Update()
extern "C" void SpringPosition_Update_m1247 (SpringPosition_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPosition SpringPosition::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPosition_t218 * SpringPosition_Begin_m1248 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, Vector3_t10  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;

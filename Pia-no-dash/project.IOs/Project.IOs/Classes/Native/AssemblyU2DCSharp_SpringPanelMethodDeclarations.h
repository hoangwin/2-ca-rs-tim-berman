#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPanel
struct SpringPanel_t187;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPanel::.ctor()
extern "C" void SpringPanel__ctor_m1041 (SpringPanel_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Start()
extern "C" void SpringPanel_Start_m1042 (SpringPanel_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Update()
extern "C" void SpringPanel_Update_m1043 (SpringPanel_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::AdvanceTowardsPosition()
extern "C" void SpringPanel_AdvanceTowardsPosition_m1044 (SpringPanel_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPanel SpringPanel::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPanel_t187 * SpringPanel_Begin_m1045 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, Vector3_t10  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;

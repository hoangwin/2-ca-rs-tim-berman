#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGrid
struct UIGrid_t102;
// UnityEngine.Transform
struct Transform_t32;

// System.Void UIGrid::.ctor()
extern "C" void UIGrid__ctor_m595 (UIGrid_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::set_repositionNow(System.Boolean)
extern "C" void UIGrid_set_repositionNow_m596 (UIGrid_t102 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Init()
extern "C" void UIGrid_Init_m597 (UIGrid_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
extern "C" void UIGrid_Start_m598 (UIGrid_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
extern "C" void UIGrid_Update_m599 (UIGrid_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UIGrid_SortByName_m600 (Object_t * __this /* static, unused */, Transform_t32 * ___a, Transform_t32 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition()
extern "C" void UIGrid_Reposition_m601 (UIGrid_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

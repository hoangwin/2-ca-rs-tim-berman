#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITable
struct UITable_t103;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t151;
// UnityEngine.Transform
struct Transform_t32;

// System.Void UITable::.ctor()
extern "C" void UITable__ctor_m775 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::set_repositionNow(System.Boolean)
extern "C" void UITable_set_repositionNow_m776 (UITable_t103 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITable::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UITable_SortByName_m777 (Object_t * __this /* static, unused */, Transform_t32 * ___a, Transform_t32 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::get_children()
extern "C" List_1_t151 * UITable_get_children_m778 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::RepositionVariableSize(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C" void UITable_RepositionVariableSize_m779 (UITable_t103 * __this, List_1_t151 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Reposition()
extern "C" void UITable_Reposition_m780 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Start()
extern "C" void UITable_Start_m781 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Init()
extern "C" void UITable_Init_m782 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::LateUpdate()
extern "C" void UITable_LateUpdate_m783 (UITable_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

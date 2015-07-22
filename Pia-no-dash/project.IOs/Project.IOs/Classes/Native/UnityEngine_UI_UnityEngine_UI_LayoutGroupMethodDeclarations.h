#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t536;
// UnityEngine.RectOffset
struct RectOffset_t540;
// UnityEngine.RectTransform
struct RectTransform_t451;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t541;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C" void LayoutGroup__ctor_m3547 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C" RectOffset_t540 * LayoutGroup_get_padding_m3548 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C" void LayoutGroup_set_padding_m3549 (LayoutGroup_t536 * __this, RectOffset_t540 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C" int32_t LayoutGroup_get_childAlignment_m3550 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C" void LayoutGroup_set_childAlignment_m3551 (LayoutGroup_t536 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C" RectTransform_t451 * LayoutGroup_get_rectTransform_m3552 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C" List_1_t541 * LayoutGroup_get_rectChildren_m3553 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C" void LayoutGroup_CalculateLayoutInputHorizontal_m3554 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C" float LayoutGroup_get_minWidth_m3555 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C" float LayoutGroup_get_preferredWidth_m3556 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C" float LayoutGroup_get_flexibleWidth_m3557 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C" float LayoutGroup_get_minHeight_m3558 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C" float LayoutGroup_get_preferredHeight_m3559 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C" float LayoutGroup_get_flexibleHeight_m3560 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C" int32_t LayoutGroup_get_layoutPriority_m3561 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C" void LayoutGroup_OnEnable_m3562 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C" void LayoutGroup_OnDisable_m3563 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C" void LayoutGroup_OnDidApplyAnimationProperties_m3564 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C" float LayoutGroup_GetTotalMinSize_m3565 (LayoutGroup_t536 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C" float LayoutGroup_GetTotalPreferredSize_m3566 (LayoutGroup_t536 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C" float LayoutGroup_GetTotalFlexibleSize_m3567 (LayoutGroup_t536 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C" float LayoutGroup_GetStartOffset_m3568 (LayoutGroup_t536 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C" void LayoutGroup_SetLayoutInputForAxis_m3569 (LayoutGroup_t536 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C" void LayoutGroup_SetChildAlongAxis_m3570 (LayoutGroup_t536 * __this, RectTransform_t451 * ___rect, int32_t ___axis, float ___pos, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C" bool LayoutGroup_get_isRootLayoutGroup_m3571 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C" void LayoutGroup_OnRectTransformDimensionsChange_m3572 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C" void LayoutGroup_OnTransformChildrenChanged_m3573 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C" void LayoutGroup_SetDirty_m3574 (LayoutGroup_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

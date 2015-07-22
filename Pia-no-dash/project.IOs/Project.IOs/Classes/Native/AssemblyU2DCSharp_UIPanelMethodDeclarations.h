#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPanel
struct UIPanel_t94;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Transform
struct Transform_t32;
// UIWidget
struct UIWidget_t83;
// UIDrawCall
struct UIDrawCall_t197;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIPanel::.ctor()
extern "C" void UIPanel__ctor_m1653 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C" void UIPanel__cctor_m1654 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_nextUnusedDepth()
extern "C" int32_t UIPanel_get_nextUnusedDepth_m1655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C" float UIPanel_get_alpha_m1656 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C" void UIPanel_set_alpha_m1657 (UIPanel_t94 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_finalAlpha()
extern "C" float UIPanel_get_finalAlpha_m1658 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
extern "C" int32_t UIPanel_get_depth_m1659 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
extern "C" void UIPanel_set_depth_m1660 (UIPanel_t94 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
extern "C" int32_t UIPanel_CompareFunc_m1661 (Object_t * __this /* static, unused */, UIPanel_t94 * ___a, UIPanel_t94 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_width()
extern "C" float UIPanel_get_width_m1662 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_height()
extern "C" float UIPanel_get_height_m1663 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_halfPixelOffset()
extern "C" bool UIPanel_get_halfPixelOffset_m1664 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_usedForUI()
extern "C" bool UIPanel_get_usedForUI_m1665 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::get_drawCallOffset()
extern "C" Vector3_t10  UIPanel_get_drawCallOffset_m1666 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_drawCallCount()
extern "C" int32_t UIPanel_get_drawCallCount_m1667 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C" int32_t UIPanel_get_clipping_m1668 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C" void UIPanel_set_clipping_m1669 (UIPanel_t94 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipOffset()
extern "C" Vector2_t27  UIPanel_get_clipOffset_m1670 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipOffset(UnityEngine.Vector2)
extern "C" void UIPanel_set_clipOffset_m1671 (UIPanel_t94 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C" Vector4_t198  UIPanel_get_clipRange_m1672 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C" void UIPanel_set_clipRange_m1673 (UIPanel_t94 * __this, Vector4_t198  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_baseClipRegion()
extern "C" Vector4_t198  UIPanel_get_baseClipRegion_m1674 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_baseClipRegion(UnityEngine.Vector4)
extern "C" void UIPanel_set_baseClipRegion_m1675 (UIPanel_t94 * __this, Vector4_t198  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_finalClipRegion()
extern "C" Vector4_t198  UIPanel_get_finalClipRegion_m1676 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C" Vector2_t27  UIPanel_get_clipSoftness_m1677 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C" void UIPanel_set_clipSoftness_m1678 (UIPanel_t94 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_localCorners()
extern "C" Vector3U5BU5D_t11* UIPanel_get_localCorners_m1679 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_worldCorners()
extern "C" Vector3U5BU5D_t11* UIPanel_get_worldCorners_m1680 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* UIPanel_GetSides_m1681 (UIPanel_t94 * __this, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m1682 (UIPanel_t94 * __this, Vector3_t10  ___a, Vector3_t10  ___b, Vector3_t10  ___c, Vector3_t10  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m1683 (UIPanel_t94 * __this, Vector3_t10  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C" bool UIPanel_IsVisible_m1684 (UIPanel_t94 * __this, UIWidget_t83 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildAllDrawCalls(System.Boolean)
extern "C" void UIPanel_RebuildAllDrawCalls_m1685 (Object_t * __this /* static, unused */, bool ___sort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
extern "C" void UIPanel_SetDirty_m1686 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C" void UIPanel_Awake_m1687 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnStart()
extern "C" void UIPanel_OnStart_m1688 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C" void UIPanel_OnEnable_m1689 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C" void UIPanel_OnDisable_m1690 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C" void UIPanel_UpdateTransformMatrix_m1691 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnAnchor()
extern "C" void UIPanel_OnAnchor_m1692 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C" void UIPanel_LateUpdate_m1693 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
extern "C" void UIPanel_UpdateLayers_m1694 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
extern "C" void UIPanel_UpdateWidgets_m1695 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::InsertWidget(UIWidget)
extern "C" UIDrawCall_t197 * UIPanel_InsertWidget_m1696 (Object_t * __this /* static, unused */, UIWidget_t83 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C" void UIPanel_RemoveWidget_m1697 (Object_t * __this /* static, unused */, UIWidget_t83 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C" void UIPanel_Refresh_m1698 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector3_t10  UIPanel_CalculateConstrainOffset_m1699 (UIPanel_t94 * __this, Vector2_t27  ___min, Vector2_t27  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m1700 (UIPanel_t94 * __this, Transform_t32 * ___target, Bounds_t111 * ___targetBounds, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m1701 (UIPanel_t94 * __this, Transform_t32 * ___target, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C" UIPanel_t94 * UIPanel_Find_m1702 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C" UIPanel_t94 * UIPanel_Find_m1703 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C" UIPanel_t94 * UIPanel_Find_m1704 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, bool ___createIfMissing, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Fill()
extern "C" void UIPanel_Fill_m1705 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SubmitDrawCall(UIDrawCall)
extern "C" void UIPanel_SubmitDrawCall_m1706 (UIPanel_t94 * __this, UIDrawCall_t197 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::Fill(UIDrawCall)
extern "C" bool UIPanel_Fill_m1707 (Object_t * __this /* static, unused */, UIDrawCall_t197 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetWindowSize()
extern "C" Vector2_t27  UIPanel_GetWindowSize_m1708 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetViewSize()
extern "C" Vector2_t27  UIPanel_GetViewSize_m1709 (UIPanel_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

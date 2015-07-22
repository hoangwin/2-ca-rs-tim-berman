#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollView
struct UIScrollView_t92;
// UIPanel
struct UIPanel_t94;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIScrollView::.ctor()
extern "C" void UIScrollView__ctor_m728 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIScrollView::get_panel()
extern "C" UIPanel_t94 * UIScrollView_get_panel_m729 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIScrollView::get_bounds()
extern "C" Bounds_t111  UIScrollView_get_bounds_m730 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveHorizontally()
extern "C" bool UIScrollView_get_canMoveHorizontally_m731 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveVertically()
extern "C" bool UIScrollView_get_canMoveVertically_m732 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveHorizontally()
extern "C" bool UIScrollView_get_shouldMoveHorizontally_m733 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveVertically()
extern "C" bool UIScrollView_get_shouldMoveVertically_m734 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMove()
extern "C" bool UIScrollView_get_shouldMove_m735 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIScrollView::get_currentMomentum()
extern "C" Vector3_t10  UIScrollView_get_currentMomentum_m736 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::set_currentMomentum(UnityEngine.Vector3)
extern "C" void UIScrollView_set_currentMomentum_m737 (UIScrollView_t92 * __this, Vector3_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Awake()
extern "C" void UIScrollView_Awake_m738 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnDestroy()
extern "C" void UIScrollView_OnDestroy_m739 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnPanelChange()
extern "C" void UIScrollView_OnPanelChange_m740 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Start()
extern "C" void UIScrollView_Start_m741 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean)
extern "C" bool UIScrollView_RestrictWithinBounds_m742 (UIScrollView_t92 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean,System.Boolean,System.Boolean)
extern "C" bool UIScrollView_RestrictWithinBounds_m743 (UIScrollView_t92 * __this, bool ___instant, bool ___horizontal, bool ___vertical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::DisableSpring()
extern "C" void UIScrollView_DisableSpring_m744 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(System.Boolean)
extern "C" void UIScrollView_UpdateScrollbars_m745 (UIScrollView_t92 * __this, bool ___recalculateBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C" void UIScrollView_SetDragAmount_m746 (UIScrollView_t92 * __this, float ___x, float ___y, bool ___updateScrollbars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::ResetPosition()
extern "C" void UIScrollView_ResetPosition_m747 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnHorizontalBar()
extern "C" void UIScrollView_OnHorizontalBar_m748 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnVerticalBar()
extern "C" void UIScrollView_OnVerticalBar_m749 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveRelative(UnityEngine.Vector3)
extern "C" void UIScrollView_MoveRelative_m750 (UIScrollView_t92 * __this, Vector3_t10  ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveAbsolute(UnityEngine.Vector3)
extern "C" void UIScrollView_MoveAbsolute_m751 (UIScrollView_t92 * __this, Vector3_t10  ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Press(System.Boolean)
extern "C" void UIScrollView_Press_m752 (UIScrollView_t92 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Drag()
extern "C" void UIScrollView_Drag_m753 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Scroll(System.Single)
extern "C" void UIScrollView_Scroll_m754 (UIScrollView_t92 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::LateUpdate()
extern "C" void UIScrollView_LateUpdate_m755 (UIScrollView_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

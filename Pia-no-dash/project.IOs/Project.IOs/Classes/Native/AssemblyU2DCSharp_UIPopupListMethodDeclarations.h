#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList
struct UIPopupList_t77;
// UnityEngine.Object
struct Object_t62;
struct Object_t62_marshaled;
// UIPopupList/LegacyEvent
struct LegacyEvent_t128;
// System.String
struct String_t;
// Localization
struct Localization_t173;
// UILabel
struct UILabel_t133;
// UnityEngine.GameObject
struct GameObject_t23;
// UIWidget
struct UIWidget_t83;
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIPopupList::.ctor()
extern "C" void UIPopupList__ctor_m649 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UIPopupList::get_ambigiousFont()
extern "C" Object_t62 * UIPopupList_get_ambigiousFont_m650 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_ambigiousFont(UnityEngine.Object)
extern "C" void UIPopupList_set_ambigiousFont_m651 (UIPopupList_t77 * __this, Object_t62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPopupList/LegacyEvent UIPopupList::get_onSelectionChange()
extern "C" LegacyEvent_t128 * UIPopupList_get_onSelectionChange_m652 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_onSelectionChange(UIPopupList/LegacyEvent)
extern "C" void UIPopupList_set_onSelectionChange_m653 (UIPopupList_t77 * __this, LegacyEvent_t128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C" bool UIPopupList_get_isOpen_m654 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_value()
extern "C" String_t* UIPopupList_get_value_m655 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_value(System.String)
extern "C" void UIPopupList_set_value_m656 (UIPopupList_t77 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C" String_t* UIPopupList_get_selection_m657 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C" void UIPopupList_set_selection_m658 (UIPopupList_t77 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
extern "C" bool UIPopupList_get_handleEvents_m659 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern "C" void UIPopupList_set_handleEvents_m660 (UIPopupList_t77 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isValid()
extern "C" bool UIPopupList_get_isValid_m661 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPopupList::get_activeFontSize()
extern "C" int32_t UIPopupList_get_activeFontSize_m662 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPopupList::get_activeFontScale()
extern "C" float UIPopupList_get_activeFontScale_m663 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::TriggerCallbacks()
extern "C" void UIPopupList_TriggerCallbacks_m664 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnEnable()
extern "C" void UIPopupList_OnEnable_m665 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnValidate()
extern "C" void UIPopupList_OnValidate_m666 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C" void UIPopupList_Start_m667 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize(Localization)
extern "C" void UIPopupList_OnLocalize_m668 (UIPopupList_t77 * __this, Localization_t173 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C" void UIPopupList_Highlight_m669 (UIPopupList_t77 * __this, UILabel_t133 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemHover_m670 (UIPopupList_t77 * __this, GameObject_t23 * ___go, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C" void UIPopupList_Select_m671 (UIPopupList_t77 * __this, UILabel_t133 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemPress_m672 (UIPopupList_t77 * __this, GameObject_t23 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C" void UIPopupList_OnKey_m673 (UIPopupList_t77 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C" void UIPopupList_OnSelect_m674 (UIPopupList_t77 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C" void UIPopupList_AnimateColor_m675 (UIPopupList_t77 * __this, UIWidget_t83 * ___widget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimatePosition_m676 (UIPopupList_t77 * __this, UIWidget_t83 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimateScale_m677 (UIPopupList_t77 * __this, UIWidget_t83 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_Animate_m678 (UIPopupList_t77 * __this, UIWidget_t83 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C" void UIPopupList_OnClick_m679 (UIPopupList_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

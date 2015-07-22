#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITextList
struct UITextList_t288;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UITextList::.ctor()
extern "C" void UITextList__ctor_m1784 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITextList::get_isValid()
extern "C" bool UITextList_get_isValid_m1785 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_scrollValue()
extern "C" float UITextList_get_scrollValue_m1786 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::set_scrollValue(System.Single)
extern "C" void UITextList_set_scrollValue_m1787 (UITextList_t288 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_lineHeight()
extern "C" float UITextList_get_lineHeight_m1788 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITextList::get_scrollHeight()
extern "C" int32_t UITextList_get_scrollHeight_m1789 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Clear()
extern "C" void UITextList_Clear_m1790 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Start()
extern "C" void UITextList_Start_m1791 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Update()
extern "C" void UITextList_Update_m1792 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScroll(System.Single)
extern "C" void UITextList_OnScroll_m1793 (UITextList_t288 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnDrag(UnityEngine.Vector2)
extern "C" void UITextList_OnDrag_m1794 (UITextList_t288 * __this, Vector2_t27  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScrollBar()
extern "C" void UITextList_OnScrollBar_m1795 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String)
extern "C" void UITextList_Add_m1796 (UITextList_t288 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String,System.Boolean)
extern "C" void UITextList_Add_m1797 (UITextList_t288 * __this, String_t* ___text, bool ___updateVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Rebuild()
extern "C" void UITextList_Rebuild_m1798 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::UpdateVisibleText()
extern "C" void UITextList_UpdateVisibleText_m1799 (UITextList_t288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

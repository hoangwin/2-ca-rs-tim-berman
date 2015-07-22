#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInput
struct UIInput_t74;
// System.String
struct String_t;

// System.Void UIInput::.ctor()
extern "C" void UIInput__ctor_m1534 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::.cctor()
extern "C" void UIInput__cctor_m1535 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_defaultText()
extern "C" String_t* UIInput_get_defaultText_m1536 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultText(System.String)
extern "C" void UIInput_set_defaultText_m1537 (UIInput_t74 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_text()
extern "C" String_t* UIInput_get_text_m1538 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_text(System.String)
extern "C" void UIInput_set_text_m1539 (UIInput_t74 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_value()
extern "C" String_t* UIInput_get_value_m1540 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_value(System.String)
extern "C" void UIInput_set_value_m1541 (UIInput_t74 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_needsTextCursor()
extern "C" bool UIInput_get_needsTextCursor_m1542 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_selected()
extern "C" bool UIInput_get_selected_m1543 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selected(System.Boolean)
extern "C" void UIInput_set_selected_m1544 (UIInput_t74 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_isSelected()
extern "C" bool UIInput_get_isSelected_m1545 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_isSelected(System.Boolean)
extern "C" void UIInput_set_isSelected_m1546 (UIInput_t74 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_cursorPosition()
extern "C" int32_t UIInput_get_cursorPosition_m1547 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Start()
extern "C" void UIInput_Start_m1548 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Init()
extern "C" void UIInput_Init_m1549 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveToPlayerPrefs(System.String)
extern "C" void UIInput_SaveToPlayerPrefs_m1550 (UIInput_t74 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelect(System.Boolean)
extern "C" void UIInput_OnSelect_m1551 (UIInput_t74 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelectEvent()
extern "C" void UIInput_OnSelectEvent_m1552 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDeselectEvent()
extern "C" void UIInput_OnDeselectEvent_m1553 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Update()
extern "C" void UIInput_Update_m1554 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Submit()
extern "C" void UIInput_Submit_m1555 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::UpdateLabel()
extern "C" void UIInput_UpdateLabel_m1556 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RestoreLabelPivot()
extern "C" void UIInput_RestoreLabelPivot_m1557 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t UIInput_Validate_m1558 (UIInput_t74 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::ExecuteOnChange()
extern "C" void UIInput_ExecuteOnChange_m1559 (UIInput_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UILabel
struct UILabel_t133;
// UnityEngine.Material
struct Material_t57;
// UIFont
struct UIFont_t130;
// UnityEngine.Font
struct Font_t131;
// UnityEngine.Object
struct Object_t62;
struct Object_t62_marshaled;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Transform
struct Transform_t32;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// NGUIText/SymbolStyle
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle.h"
// UILabel/Overflow
#include "AssemblyU2DCSharp_UILabel_Overflow.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UILabel/Effect
#include "AssemblyU2DCSharp_UILabel_Effect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UILabel::.ctor()
extern "C" void UILabel__ctor_m1560 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_hasChanged()
extern "C" bool UILabel_get_hasChanged_m1561 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_hasChanged(System.Boolean)
extern "C" void UILabel_set_hasChanged_m1562 (UILabel_t133 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UILabel::get_material()
extern "C" Material_t57 * UILabel_get_material_m1563 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_material(UnityEngine.Material)
extern "C" void UILabel_set_material_m1564 (UILabel_t133 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_font()
extern "C" UIFont_t130 * UILabel_get_font_m1565 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_font(UIFont)
extern "C" void UILabel_set_font_m1566 (UILabel_t133 * __this, UIFont_t130 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_bitmapFont()
extern "C" UIFont_t130 * UILabel_get_bitmapFont_m1567 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_bitmapFont(UIFont)
extern "C" void UILabel_set_bitmapFont_m1568 (UILabel_t133 * __this, UIFont_t130 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UILabel::get_trueTypeFont()
extern "C" Font_t131 * UILabel_get_trueTypeFont_m1569 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_trueTypeFont(UnityEngine.Font)
extern "C" void UILabel_set_trueTypeFont_m1570 (UILabel_t133 * __this, Font_t131 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UILabel::get_ambigiousFont()
extern "C" Object_t62 * UILabel_get_ambigiousFont_m1571 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_ambigiousFont(UnityEngine.Object)
extern "C" void UILabel_set_ambigiousFont_m1572 (UILabel_t133 * __this, Object_t62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_text()
extern "C" String_t* UILabel_get_text_m1573 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_text(System.String)
extern "C" void UILabel_set_text_m1574 (UILabel_t133 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_fontSize()
extern "C" int32_t UILabel_get_fontSize_m1575 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontSize(System.Int32)
extern "C" void UILabel_set_fontSize_m1576 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UILabel::get_fontStyle()
extern "C" int32_t UILabel_get_fontStyle_m1577 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontStyle(UnityEngine.FontStyle)
extern "C" void UILabel_set_fontStyle_m1578 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_applyGradient()
extern "C" bool UILabel_get_applyGradient_m1579 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_applyGradient(System.Boolean)
extern "C" void UILabel_set_applyGradient_m1580 (UILabel_t133 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientTop()
extern "C" Color_t9  UILabel_get_gradientTop_m1581 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientTop(UnityEngine.Color)
extern "C" void UILabel_set_gradientTop_m1582 (UILabel_t133 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientBottom()
extern "C" Color_t9  UILabel_get_gradientBottom_m1583 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientBottom(UnityEngine.Color)
extern "C" void UILabel_set_gradientBottom_m1584 (UILabel_t133 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingX()
extern "C" int32_t UILabel_get_spacingX_m1585 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingX(System.Int32)
extern "C" void UILabel_set_spacingX_m1586 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingY()
extern "C" int32_t UILabel_get_spacingY_m1587 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingY(System.Int32)
extern "C" void UILabel_set_spacingY_m1588 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_usePrintedSize()
extern "C" bool UILabel_get_usePrintedSize_m1589 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_supportEncoding()
extern "C" bool UILabel_get_supportEncoding_m1590 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_supportEncoding(System.Boolean)
extern "C" void UILabel_set_supportEncoding_m1591 (UILabel_t133 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/SymbolStyle UILabel::get_symbolStyle()
extern "C" int32_t UILabel_get_symbolStyle_m1592 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_symbolStyle(NGUIText/SymbolStyle)
extern "C" void UILabel_set_symbolStyle_m1593 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Overflow UILabel::get_overflowMethod()
extern "C" int32_t UILabel_get_overflowMethod_m1594 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_overflowMethod(UILabel/Overflow)
extern "C" void UILabel_set_overflowMethod_m1595 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineWidth()
extern "C" int32_t UILabel_get_lineWidth_m1596 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineWidth(System.Int32)
extern "C" void UILabel_set_lineWidth_m1597 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineHeight()
extern "C" int32_t UILabel_get_lineHeight_m1598 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineHeight(System.Int32)
extern "C" void UILabel_set_lineHeight_m1599 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_multiLine()
extern "C" bool UILabel_get_multiLine_m1600 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_multiLine(System.Boolean)
extern "C" void UILabel_set_multiLine_m1601 (UILabel_t133 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_localCorners()
extern "C" Vector3U5BU5D_t11* UILabel_get_localCorners_m1602 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_worldCorners()
extern "C" Vector3U5BU5D_t11* UILabel_get_worldCorners_m1603 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UILabel::get_drawingDimensions()
extern "C" Vector4_t198  UILabel_get_drawingDimensions_m1604 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_maxLineCount()
extern "C" int32_t UILabel_get_maxLineCount_m1605 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_maxLineCount(System.Int32)
extern "C" void UILabel_set_maxLineCount_m1606 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Effect UILabel::get_effectStyle()
extern "C" int32_t UILabel_get_effectStyle_m1607 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectStyle(UILabel/Effect)
extern "C" void UILabel_set_effectStyle_m1608 (UILabel_t133 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_effectColor()
extern "C" Color_t9  UILabel_get_effectColor_m1609 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectColor(UnityEngine.Color)
extern "C" void UILabel_set_effectColor_m1610 (UILabel_t133 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_effectDistance()
extern "C" Vector2_t27  UILabel_get_effectDistance_m1611 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectDistance(UnityEngine.Vector2)
extern "C" void UILabel_set_effectDistance_m1612 (UILabel_t133 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_shrinkToFit()
extern "C" bool UILabel_get_shrinkToFit_m1613 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_shrinkToFit(System.Boolean)
extern "C" void UILabel_set_shrinkToFit_m1614 (UILabel_t133 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_processedText()
extern "C" String_t* UILabel_get_processedText_m1615 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_printedSize()
extern "C" Vector2_t27  UILabel_get_printedSize_m1616 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_localSize()
extern "C" Vector2_t27  UILabel_get_localSize_m1617 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isValid()
extern "C" bool UILabel_get_isValid_m1618 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_pixelSize()
extern "C" float UILabel_get_pixelSize_m1619 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnEnable()
extern "C" void UILabel_OnEnable_m1620 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnDisable()
extern "C" void UILabel_OnDisable_m1621 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetActiveFont(UnityEngine.Font)
extern "C" void UILabel_SetActiveFont_m1622 (UILabel_t133 * __this, Font_t131 * ___fnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* UILabel_GetSides_m1623 (UILabel_t133 * __this, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpgradeFrom265()
extern "C" void UILabel_UpgradeFrom265_m1624 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnAnchor()
extern "C" void UILabel_OnAnchor_m1625 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessAndRequest()
extern "C" void UILabel_ProcessAndRequest_m1626 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnStart()
extern "C" void UILabel_OnStart_m1627 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MarkAsChanged()
extern "C" void UILabel_MarkAsChanged_m1628 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText()
extern "C" void UILabel_ProcessText_m1629 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText(System.Boolean)
extern "C" void UILabel_ProcessText_m1630 (UILabel_t133 * __this, bool ___legacyMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MakePixelPerfect()
extern "C" void UILabel_MakePixelPerfect_m1631 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::AssumeNaturalSize()
extern "C" void UILabel_AssumeNaturalSize_m1632 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ApplyShadow(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void UILabel_ApplyShadow_m1633 (UILabel_t133 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UILabel_OnFill_m1634 (UILabel_t133 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::CalculateOffsetToFit(System.String)
extern "C" int32_t UILabel_CalculateOffsetToFit_m1635 (UILabel_t133 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpdateNGUIText()
extern "C" void UILabel_UpdateNGUIText_m1636 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentPercent()
extern "C" void UILabel_SetCurrentPercent_m1637 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentSelection()
extern "C" void UILabel_SetCurrentSelection_m1638 (UILabel_t133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&)
extern "C" bool UILabel_Wrap_m1639 (UILabel_t133 * __this, String_t* ___text, String_t** ___final, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&,System.Int32)
extern "C" bool UILabel_Wrap_m1640 (UILabel_t133 * __this, String_t* ___text, String_t** ___final, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIFont
struct UIFont_t130;
// BMFont
struct BMFont_t164;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t260;
// UIAtlas
struct UIAtlas_t129;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Texture2D
struct Texture2D_t37;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t167;
// UnityEngine.Font
struct Font_t131;
// UnityEngine.Texture
struct Texture_t190;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// BMSymbol
struct BMSymbol_t168;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIFont::.ctor()
extern "C" void UIFont__ctor_m1482 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::.cctor()
extern "C" void UIFont__cctor_m1483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C" BMFont_t164 * UIFont_get_bmFont_m1484 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C" int32_t UIFont_get_texWidth_m1485 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C" int32_t UIFont_get_texHeight_m1486 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C" bool UIFont_get_hasSymbols_m1487 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C" List_1_t260 * UIFont_get_symbols_m1488 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C" UIAtlas_t129 * UIFont_get_atlas_m1489 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C" void UIFont_set_atlas_m1490 (UIFont_t130 * __this, UIAtlas_t129 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C" Material_t57 * UIFont_get_material_m1491 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C" void UIFont_set_material_m1492 (UIFont_t130 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIFont::get_pixelSize()
extern "C" float UIFont_get_pixelSize_m1493 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_pixelSize(System.Single)
extern "C" void UIFont_set_pixelSize_m1494 (UIFont_t130 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
extern "C" bool UIFont_get_premultipliedAlpha_m1495 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C" Texture2D_t37 * UIFont_get_texture_m1496 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C" Rect_t31  UIFont_get_uvRect_m1497 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C" void UIFont_set_uvRect_m1498 (UIFont_t130 * __this, Rect_t31  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C" String_t* UIFont_get_spriteName_m1499 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C" void UIFont_set_spriteName_m1500 (UIFont_t130 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C" bool UIFont_get_isValid_m1501 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C" int32_t UIFont_get_size_m1502 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_size(System.Int32)
extern "C" void UIFont_set_size_m1503 (UIFont_t130 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_defaultSize()
extern "C" int32_t UIFont_get_defaultSize_m1504 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_defaultSize(System.Int32)
extern "C" void UIFont_set_defaultSize_m1505 (UIFont_t130 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIFont::get_sprite()
extern "C" UISpriteData_t167 * UIFont_get_sprite_m1506 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C" UIFont_t130 * UIFont_get_replacement_m1507 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C" void UIFont_set_replacement_m1508 (UIFont_t130 * __this, UIFont_t130 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C" bool UIFont_get_isDynamic_m1509 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C" Font_t131 * UIFont_get_dynamicFont_m1510 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C" void UIFont_set_dynamicFont_m1511 (UIFont_t130 * __this, Font_t131 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C" int32_t UIFont_get_dynamicFontStyle_m1512 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C" void UIFont_set_dynamicFontStyle_m1513 (UIFont_t130 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C" void UIFont_Trim_m1514 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C" bool UIFont_References_m1515 (UIFont_t130 * __this, UIFont_t130 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C" bool UIFont_CheckIfRelated_m1516 (Object_t * __this /* static, unused */, UIFont_t130 * ___a, UIFont_t130 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C" Texture_t190 * UIFont_get_dynamicTexture_m1517 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsChanged()
extern "C" void UIFont_MarkAsChanged_m1518 (UIFont_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIFont::CalculatePrintedSize(System.String)
extern "C" Vector2_t27  UIFont_CalculatePrintedSize_m1519 (UIFont_t130 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::GetEndOfLineThatFits(System.String)
extern "C" String_t* UIFont_GetEndOfLineThatFits_m1520 (UIFont_t130 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::CalculateOffsetToFit(System.String)
extern "C" int32_t UIFont_CalculateOffsetToFit_m1521 (UIFont_t130 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&)
extern "C" bool UIFont_WrapText_m1522 (UIFont_t130 * __this, String_t* ___text, String_t** ___finalText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIFont_Print_m1523 (UIFont_t130 * __this, String_t* ___text, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C" BMSymbol_t168 * UIFont_GetSymbol_m1524 (UIFont_t130 * __this, String_t* ___sequence, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C" BMSymbol_t168 * UIFont_MatchSymbol_m1525 (UIFont_t130 * __this, String_t* ___text, int32_t ___offset, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C" void UIFont_AddSymbol_m1526 (UIFont_t130 * __this, String_t* ___sequence, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C" void UIFont_RemoveSymbol_m1527 (UIFont_t130 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C" void UIFont_RenameSymbol_m1528 (UIFont_t130 * __this, String_t* ___before, String_t* ___after, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C" bool UIFont_UsesSprite_m1529 (UIFont_t130 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;

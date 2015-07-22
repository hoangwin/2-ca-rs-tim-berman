#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISprite
struct UISprite_t72;
// UnityEngine.Material
struct Material_t57;
// UIAtlas
struct UIAtlas_t129;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t167;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t26;
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UISprite::.ctor()
extern "C" void UISprite__ctor_m1723 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::.cctor()
extern "C" void UISprite__cctor_m1724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/Type UISprite::get_type()
extern "C" int32_t UISprite_get_type_m1725 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_type(UISprite/Type)
extern "C" void UISprite_set_type_m1726 (UISprite_t72 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C" Material_t57 * UISprite_get_material_m1727 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C" UIAtlas_t129 * UISprite_get_atlas_m1728 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C" void UISprite_set_atlas_m1729 (UISprite_t72 * __this, UIAtlas_t129 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C" String_t* UISprite_get_spriteName_m1730 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C" void UISprite_set_spriteName_m1731 (UISprite_t72 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C" bool UISprite_get_isValid_m1732 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C" bool UISprite_get_fillCenter_m1733 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C" void UISprite_set_fillCenter_m1734 (UISprite_t72 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/FillDirection UISprite::get_fillDirection()
extern "C" int32_t UISprite_get_fillDirection_m1735 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillDirection(UISprite/FillDirection)
extern "C" void UISprite_set_fillDirection_m1736 (UISprite_t72 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_fillAmount()
extern "C" float UISprite_get_fillAmount_m1737 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillAmount(System.Single)
extern "C" void UISprite_set_fillAmount_m1738 (UISprite_t72 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_invert()
extern "C" bool UISprite_get_invert_m1739 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_invert(System.Boolean)
extern "C" void UISprite_set_invert_m1740 (UISprite_t72 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C" Vector4_t198  UISprite_get_border_m1741 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minWidth()
extern "C" int32_t UISprite_get_minWidth_m1742 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minHeight()
extern "C" int32_t UISprite_get_minHeight_m1743 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UISprite::GetAtlasSprite()
extern "C" UISpriteData_t167 * UISprite_GetAtlasSprite_m1744 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UISpriteData)
extern "C" void UISprite_SetAtlasSprite_m1745 (UISprite_t72 * __this, UISpriteData_t167 * ___sp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C" void UISprite_MakePixelPerfect_m1746 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnUpdate()
extern "C" void UISprite_OnUpdate_m1747 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_OnFill_m1748 (UISprite_t72 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_drawingDimensions()
extern "C" Vector4_t198  UISprite_get_drawingDimensions_m1749 (UISprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SimpleFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_SimpleFill_m1750 (UISprite_t72 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SlicedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_SlicedFill_m1751 (UISprite_t72 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::TiledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_TiledFill_m1752 (UISprite_t72 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::FilledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_FilledFill_m1753 (UISprite_t72 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
extern "C" bool UISprite_RadialCut_m1754 (Object_t * __this /* static, unused */, Vector2U5BU5D_t26* ___xy, Vector2U5BU5D_t26* ___uv, float ___fill, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C" void UISprite_RadialCut_m1755 (Object_t * __this /* static, unused */, Vector2U5BU5D_t26* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;

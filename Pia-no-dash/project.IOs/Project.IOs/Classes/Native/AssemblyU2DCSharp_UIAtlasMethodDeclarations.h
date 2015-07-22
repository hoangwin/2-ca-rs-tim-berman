#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIAtlas
struct UIAtlas_t129;
// UnityEngine.Material
struct Material_t57;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t241;
// UnityEngine.Texture
struct Texture_t190;
// UISpriteData
struct UISpriteData_t167;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t325;

// System.Void UIAtlas::.ctor()
extern "C" void UIAtlas__ctor_m1408 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
extern "C" Material_t57 * UIAtlas_get_spriteMaterial_m1409 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
extern "C" void UIAtlas_set_spriteMaterial_m1410 (UIAtlas_t129 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
extern "C" bool UIAtlas_get_premultipliedAlpha_m1411 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UISpriteData> UIAtlas::get_spriteList()
extern "C" List_1_t241 * UIAtlas_get_spriteList_m1412 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UISpriteData>)
extern "C" void UIAtlas_set_spriteList_m1413 (UIAtlas_t129 * __this, List_1_t241 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
extern "C" Texture_t190 * UIAtlas_get_texture_m1414 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
extern "C" float UIAtlas_get_pixelSize_m1415 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
extern "C" void UIAtlas_set_pixelSize_m1416 (UIAtlas_t129 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
extern "C" UIAtlas_t129 * UIAtlas_get_replacement_m1417 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
extern "C" void UIAtlas_set_replacement_m1418 (UIAtlas_t129 * __this, UIAtlas_t129 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIAtlas::GetSprite(System.String)
extern "C" UISpriteData_t167 * UIAtlas_GetSprite_m1419 (UIAtlas_t129 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::SortAlphabetically()
extern "C" void UIAtlas_SortAlphabetically_m1420 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
extern "C" BetterList_1_t325 * UIAtlas_GetListOfSprites_m1421 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
extern "C" BetterList_1_t325 * UIAtlas_GetListOfSprites_m1422 (UIAtlas_t129 * __this, String_t* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
extern "C" bool UIAtlas_References_m1423 (UIAtlas_t129 * __this, UIAtlas_t129 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
extern "C" bool UIAtlas_CheckIfRelated_m1424 (Object_t * __this /* static, unused */, UIAtlas_t129 * ___a, UIAtlas_t129 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsChanged()
extern "C" void UIAtlas_MarkAsChanged_m1425 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::Upgrade()
extern "C" bool UIAtlas_Upgrade_m1426 (UIAtlas_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::<SortAlphabetically>m__0(UISpriteData,UISpriteData)
extern "C" int32_t UIAtlas_U3CSortAlphabeticallyU3Em__0_m1427 (Object_t * __this /* static, unused */, UISpriteData_t167 * ___s1, UISpriteData_t167 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t131;
// UnityEngine.Material
struct Material_t57;
// System.String[]
struct StringU5BU5D_t284;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t369;
// System.Action`1<UnityEngine.Font>
struct Action_1_t600;
// System.String
struct String_t;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m3773 (Object_t * __this /* static, unused */, Action_1_t600 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m4875 (Object_t * __this /* static, unused */, Action_1_t600 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t57 * Font_get_material_m2397 (Font_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m3881 (Font_t131 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t284* Font_get_fontNames_m2399 (Font_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m2139 (Font_t131 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m4876 (Object_t * __this /* static, unused */, Font_t131 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t369 * Font_get_textureRebuildCallback_m2417 (Font_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2419 (Font_t131 * __this, FontTextureRebuildCallback_t369 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m2140 (Font_t131 * __this, uint16_t ___ch, CharacterInfo_t182 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m3957 (Font_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m3959 (Font_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

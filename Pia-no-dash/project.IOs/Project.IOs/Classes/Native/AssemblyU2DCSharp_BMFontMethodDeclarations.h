#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BMFont
struct BMFont_t164;
// System.String
struct String_t;
// BMGlyph
struct BMGlyph_t166;

// System.Void BMFont::.ctor()
extern "C" void BMFont__ctor_m813 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMFont::get_isValid()
extern "C" bool BMFont_get_isValid_m814 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_charSize()
extern "C" int32_t BMFont_get_charSize_m815 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_charSize(System.Int32)
extern "C" void BMFont_set_charSize_m816 (BMFont_t164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_baseOffset()
extern "C" int32_t BMFont_get_baseOffset_m817 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_baseOffset(System.Int32)
extern "C" void BMFont_set_baseOffset_m818 (BMFont_t164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texWidth()
extern "C" int32_t BMFont_get_texWidth_m819 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texWidth(System.Int32)
extern "C" void BMFont_set_texWidth_m820 (BMFont_t164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texHeight()
extern "C" int32_t BMFont_get_texHeight_m821 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texHeight(System.Int32)
extern "C" void BMFont_set_texHeight_m822 (BMFont_t164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_glyphCount()
extern "C" int32_t BMFont_get_glyphCount_m823 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BMFont::get_spriteName()
extern "C" String_t* BMFont_get_spriteName_m824 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_spriteName(System.String)
extern "C" void BMFont_set_spriteName_m825 (BMFont_t164 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32,System.Boolean)
extern "C" BMGlyph_t166 * BMFont_GetGlyph_m826 (BMFont_t164 * __this, int32_t ___index, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32)
extern "C" BMGlyph_t166 * BMFont_GetGlyph_m827 (BMFont_t164 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Clear()
extern "C" void BMFont_Clear_m828 (BMFont_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void BMFont_Trim_m829 (BMFont_t164 * __this, int32_t ___xMin, int32_t ___yMin, int32_t ___xMax, int32_t ___yMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;

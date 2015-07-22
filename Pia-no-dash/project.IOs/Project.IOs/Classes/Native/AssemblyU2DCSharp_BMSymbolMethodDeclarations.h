#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BMSymbol
struct BMSymbol_t168;
// UIAtlas
struct UIAtlas_t129;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BMSymbol::.ctor()
extern "C" void BMSymbol__ctor_m834 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_length()
extern "C" int32_t BMSymbol_get_length_m835 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetX()
extern "C" int32_t BMSymbol_get_offsetX_m836 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetY()
extern "C" int32_t BMSymbol_get_offsetY_m837 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_width()
extern "C" int32_t BMSymbol_get_width_m838 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_height()
extern "C" int32_t BMSymbol_get_height_m839 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_advance()
extern "C" int32_t BMSymbol_get_advance_m840 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BMSymbol::get_uvRect()
extern "C" Rect_t31  BMSymbol_get_uvRect_m841 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMSymbol::MarkAsChanged()
extern "C" void BMSymbol_MarkAsChanged_m842 (BMSymbol_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMSymbol::Validate(UIAtlas)
extern "C" bool BMSymbol_Validate_m843 (BMSymbol_t168 * __this, UIAtlas_t129 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;

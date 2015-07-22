#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITexture
struct UITexture_t289;
// UnityEngine.Texture
struct Texture_t190;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Shader
struct Shader_t191;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UITexture::.ctor()
extern "C" void UITexture__ctor_m1800 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C" Texture_t190 * UITexture_get_mainTexture_m1801 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C" void UITexture_set_mainTexture_m1802 (UITexture_t289 * __this, Texture_t190 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C" Material_t57 * UITexture_get_material_m1803 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C" void UITexture_set_material_m1804 (UITexture_t289 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C" Shader_t191 * UITexture_get_shader_m1805 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C" void UITexture_set_shader_m1806 (UITexture_t289 * __this, Shader_t191 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C" bool UITexture_get_premultipliedAlpha_m1807 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C" Rect_t31  UITexture_get_uvRect_m1808 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C" void UITexture_set_uvRect_m1809 (UITexture_t289 * __this, Rect_t31  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_drawingDimensions()
extern "C" Vector4_t198  UITexture_get_drawingDimensions_m1810 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C" void UITexture_MakePixelPerfect_m1811 (UITexture_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UITexture_OnFill_m1812 (UITexture_t289 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;

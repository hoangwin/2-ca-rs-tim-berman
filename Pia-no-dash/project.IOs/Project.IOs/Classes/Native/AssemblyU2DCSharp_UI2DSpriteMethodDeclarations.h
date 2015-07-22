#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UI2DSprite
struct UI2DSprite_t236;
// UnityEngine.Sprite
struct Sprite_t235;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Shader
struct Shader_t191;
// UnityEngine.Texture
struct Texture_t190;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UI2DSprite::.ctor()
extern "C" void UI2DSprite__ctor_m1386 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UI2DSprite::get_sprite2D()
extern "C" Sprite_t235 * UI2DSprite_get_sprite2D_m1387 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_sprite2D(UnityEngine.Sprite)
extern "C" void UI2DSprite_set_sprite2D_m1388 (UI2DSprite_t236 * __this, Sprite_t235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UI2DSprite::get_material()
extern "C" Material_t57 * UI2DSprite_get_material_m1389 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_material(UnityEngine.Material)
extern "C" void UI2DSprite_set_material_m1390 (UI2DSprite_t236 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UI2DSprite::get_shader()
extern "C" Shader_t191 * UI2DSprite_get_shader_m1391 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_shader(UnityEngine.Shader)
extern "C" void UI2DSprite_set_shader_m1392 (UI2DSprite_t236 * __this, Shader_t191 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UI2DSprite::get_mainTexture()
extern "C" Texture_t190 * UI2DSprite_get_mainTexture_m1393 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_premultipliedAlpha()
extern "C" bool UI2DSprite_get_premultipliedAlpha_m1394 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_drawingDimensions()
extern "C" Vector4_t198  UI2DSprite_get_drawingDimensions_m1395 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UI2DSprite::get_uvRect()
extern "C" Rect_t31  UI2DSprite_get_uvRect_m1396 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnUpdate()
extern "C" void UI2DSprite_OnUpdate_m1397 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::MakePixelPerfect()
extern "C" void UI2DSprite_MakePixelPerfect_m1398 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UI2DSprite_OnFill_m1399 (UI2DSprite_t236 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;

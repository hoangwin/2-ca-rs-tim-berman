#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t49;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Material[]
struct MaterialU5BU5D_t59;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t57 * Renderer_get_material_m343 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t57 * Renderer_get_sharedMaterial_m2248 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t59* Renderer_get_materials_m370 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" void Renderer_set_sharedMaterials_m2247 (Renderer_t49 * __this, MaterialU5BU5D_t59* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t111  Renderer_get_bounds_m2462 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Renderer_INTERNAL_get_bounds_m4138 (Renderer_t49 * __this, Bounds_t111 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m3748 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m3749 (Renderer_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGeometry
struct UIGeometry_t210;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t275;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UIGeometry::.ctor()
extern "C" void UIGeometry__ctor_m1134 (UIGeometry_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C" bool UIGeometry_get_hasVertices_m1135 (UIGeometry_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C" bool UIGeometry_get_hasTransformed_m1136 (UIGeometry_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C" void UIGeometry_Clear_m1137 (UIGeometry_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
extern "C" void UIGeometry_ApplyTransform_m1138 (UIGeometry_t210 * __this, Matrix4x4_t215  ___widgetToPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIGeometry_WriteToBuffers_m1139 (UIGeometry_t210 * __this, BetterList_1_t207 * ___v, BetterList_1_t208 * ___u, BetterList_1_t209 * ___c, BetterList_1_t207 * ___n, BetterList_1_t275 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;

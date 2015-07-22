#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t192;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t353;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t26;
// UnityEngine.Color32[]
struct Color32U5BU5D_t352;
// System.Int32[]
struct Int32U5BU5D_t195;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m2249 (Mesh_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m4116 (Object_t * __this /* static, unused */, Mesh_t192 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m4117 (Mesh_t192 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m2252 (Mesh_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m2254 (Mesh_t192 * __this, Vector3U5BU5D_t11* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m2259 (Mesh_t192 * __this, Vector3U5BU5D_t11* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C" void Mesh_set_tangents_m2261 (Mesh_t192 * __this, Vector4U5BU5D_t353* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m2256 (Mesh_t192 * __this, Vector2U5BU5D_t26* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
extern "C" void Mesh_set_colors32_m2258 (Mesh_t192 * __this, Color32U5BU5D_t352* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m2263 (Mesh_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m2262 (Mesh_t192 * __this, Int32U5BU5D_t195* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C" int32_t Mesh_get_vertexCount_m2251 (Mesh_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
extern "C" void Mesh_MarkDynamic_m2250 (Mesh_t192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

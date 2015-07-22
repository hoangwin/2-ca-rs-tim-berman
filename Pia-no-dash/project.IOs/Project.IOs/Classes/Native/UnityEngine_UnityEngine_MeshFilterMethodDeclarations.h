#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MeshFilter
struct MeshFilter_t193;
// UnityEngine.Mesh
struct Mesh_t192;

// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" Mesh_t192 * MeshFilter_get_mesh_m2265 (MeshFilter_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" void MeshFilter_set_mesh_m2264 (MeshFilter_t193 * __this, Mesh_t192 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

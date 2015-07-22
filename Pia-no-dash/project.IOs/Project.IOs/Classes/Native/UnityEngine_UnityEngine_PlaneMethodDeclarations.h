#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t110;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m1973 (Plane_t110 * __this, Vector3_t10  ___inNormal, Vector3_t10  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m1984 (Plane_t110 * __this, Vector3_t10  ___a, Vector3_t10  ___b, Vector3_t10  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t10  Plane_get_normal_m4496 (Plane_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m4497 (Plane_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" bool Plane_Raycast_m1975 (Plane_t110 * __this, Ray_t326  ___ray, float* ___enter, const MethodInfo* method) IL2CPP_METHOD_ATTR;

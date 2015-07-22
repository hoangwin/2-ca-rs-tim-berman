#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/CRSpline
struct CRSpline_t12;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C" void CRSpline__ctor_m7 (CRSpline_t12 * __this, Vector3U5BU5D_t11* ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C" Vector3_t10  CRSpline_Interp_m8 (CRSpline_t12 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;

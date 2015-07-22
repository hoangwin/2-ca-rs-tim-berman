#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rect
struct Rect_t31;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m402 (Rect_t31 * __this, float ___left, float ___top, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::Set(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect_Set_m2448 (Rect_t31 * __this, float ___left, float ___top, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m382 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m383 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m384 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m385 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C" Vector2_t27  Rect_get_position_m3843 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t27  Rect_get_center_m3918 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m386 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m387 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m388 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m389 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t27  Rect_get_size_m3842 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m1993 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
extern "C" void Rect_set_xMin_m2114 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m1994 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
extern "C" void Rect_set_yMin_m2116 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m1995 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
extern "C" void Rect_set_xMax_m2115 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m1996 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
extern "C" void Rect_set_yMax_m2117 (Rect_t31 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C" String_t* Rect_ToString_m4428 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m4429 (Rect_t31 * __this, Vector3_t10  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m4430 (Rect_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C" bool Rect_Equals_m4431 (Rect_t31 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m2398 (Object_t * __this /* static, unused */, Rect_t31  ___lhs, Rect_t31  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m3910 (Object_t * __this /* static, unused */, Rect_t31  ___lhs, Rect_t31  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

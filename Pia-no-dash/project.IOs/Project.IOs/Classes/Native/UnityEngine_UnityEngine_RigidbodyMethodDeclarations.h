#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t52;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" void Rigidbody_set_useGravity_m2437 (Rigidbody_t52 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m2436 (Rigidbody_t52 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m393 (Rigidbody_t52 * __this, Vector3_t10  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m4764 (Object_t * __this /* static, unused */, Rigidbody_t52 * ___self, Vector3_t10 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m397 (Rigidbody_t52 * __this, Quaternion_t60  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m4765 (Object_t * __this /* static, unused */, Rigidbody_t52 * ___self, Quaternion_t60 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;

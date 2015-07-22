#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIRect/AnchorPoint
struct AnchorPoint_t211;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;

// System.Void UIRect/AnchorPoint::.ctor()
extern "C" void AnchorPoint__ctor_m1140 (AnchorPoint_t211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C" void AnchorPoint__ctor_m1141 (AnchorPoint_t211 * __this, float ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C" void AnchorPoint_Set_m1142 (AnchorPoint_t211 * __this, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C" void AnchorPoint_SetToNearest_m1143 (AnchorPoint_t211 * __this, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" void AnchorPoint_SetToNearest_m1144 (AnchorPoint_t211 * __this, float ___rel0, float ___rel1, float ___rel2, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C" void AnchorPoint_SetHorizontal_m1145 (AnchorPoint_t211 * __this, Transform_t32 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C" void AnchorPoint_SetVertical_m1146 (AnchorPoint_t211 * __this, Transform_t32 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* AnchorPoint_GetSides_m1147 (AnchorPoint_t211 * __this, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;

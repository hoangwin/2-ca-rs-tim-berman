#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t2019;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m12461_gshared (GenericEqualityComparer_1_t2019 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m12461(__this, method) (( void (*) (GenericEqualityComparer_1_t2019 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m12461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m21417_gshared (GenericEqualityComparer_1_t2019 * __this, Guid_t66  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m21417(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2019 *, Guid_t66 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m21417_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m21418_gshared (GenericEqualityComparer_1_t2019 * __this, Guid_t66  ___x, Guid_t66  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m21418(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2019 *, Guid_t66 , Guid_t66 , const MethodInfo*))GenericEqualityComparer_1_Equals_m21418_gshared)(__this, ___x, ___y, method)

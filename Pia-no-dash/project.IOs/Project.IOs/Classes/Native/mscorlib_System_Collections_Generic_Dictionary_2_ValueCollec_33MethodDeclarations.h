#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2649;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2640;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20834_gshared (Enumerator_t2649 * __this, Dictionary_2_t2640 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m20834(__this, ___host, method) (( void (*) (Enumerator_t2649 *, Dictionary_2_t2640 *, const MethodInfo*))Enumerator__ctor_m20834_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20835_gshared (Enumerator_t2649 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20835(__this, method) (( Object_t * (*) (Enumerator_t2649 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m20836_gshared (Enumerator_t2649 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20836(__this, method) (( void (*) (Enumerator_t2649 *, const MethodInfo*))Enumerator_Dispose_m20836_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20837_gshared (Enumerator_t2649 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20837(__this, method) (( bool (*) (Enumerator_t2649 *, const MethodInfo*))Enumerator_MoveNext_m20837_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" bool Enumerator_get_Current_m20838_gshared (Enumerator_t2649 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20838(__this, method) (( bool (*) (Enumerator_t2649 *, const MethodInfo*))Enumerator_get_Current_m20838_gshared)(__this, method)

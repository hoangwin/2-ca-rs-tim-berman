#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BetterList`1<System.Object>
struct BetterList_1_t2103;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2391;
// System.Object[]
struct ObjectU5BU5D_t38;
// BetterList`1/CompareFunc<System.Object>
struct CompareFunc_t2105;

// System.Void BetterList`1<System.Object>::.ctor()
extern "C" void BetterList_1__ctor_m13421_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1__ctor_m13421(__this, method) (( void (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1__ctor_m13421_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<System.Object>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m13423_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_GetEnumerator_m13423(__this, method) (( Object_t* (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_GetEnumerator_m13423_gshared)(__this, method)
// T BetterList`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * BetterList_1_get_Item_m13424_gshared (BetterList_1_t2103 * __this, int32_t ___i, const MethodInfo* method);
#define BetterList_1_get_Item_m13424(__this, ___i, method) (( Object_t * (*) (BetterList_1_t2103 *, int32_t, const MethodInfo*))BetterList_1_get_Item_m13424_gshared)(__this, ___i, method)
// System.Void BetterList`1<System.Object>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m13426_gshared (BetterList_1_t2103 * __this, int32_t ___i, Object_t * ___value, const MethodInfo* method);
#define BetterList_1_set_Item_m13426(__this, ___i, ___value, method) (( void (*) (BetterList_1_t2103 *, int32_t, Object_t *, const MethodInfo*))BetterList_1_set_Item_m13426_gshared)(__this, ___i, ___value, method)
// System.Void BetterList`1<System.Object>::AllocateMore()
extern "C" void BetterList_1_AllocateMore_m13428_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_AllocateMore_m13428(__this, method) (( void (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_AllocateMore_m13428_gshared)(__this, method)
// System.Void BetterList`1<System.Object>::Trim()
extern "C" void BetterList_1_Trim_m13430_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_Trim_m13430(__this, method) (( void (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_Trim_m13430_gshared)(__this, method)
// System.Void BetterList`1<System.Object>::Clear()
extern "C" void BetterList_1_Clear_m13432_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_Clear_m13432(__this, method) (( void (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_Clear_m13432_gshared)(__this, method)
// System.Void BetterList`1<System.Object>::Release()
extern "C" void BetterList_1_Release_m13434_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_Release_m13434(__this, method) (( void (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_Release_m13434_gshared)(__this, method)
// System.Void BetterList`1<System.Object>::Add(T)
extern "C" void BetterList_1_Add_m13435_gshared (BetterList_1_t2103 * __this, Object_t * ___item, const MethodInfo* method);
#define BetterList_1_Add_m13435(__this, ___item, method) (( void (*) (BetterList_1_t2103 *, Object_t *, const MethodInfo*))BetterList_1_Add_m13435_gshared)(__this, ___item, method)
// System.Void BetterList`1<System.Object>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m13437_gshared (BetterList_1_t2103 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define BetterList_1_Insert_m13437(__this, ___index, ___item, method) (( void (*) (BetterList_1_t2103 *, int32_t, Object_t *, const MethodInfo*))BetterList_1_Insert_m13437_gshared)(__this, ___index, ___item, method)
// System.Boolean BetterList`1<System.Object>::Contains(T)
extern "C" bool BetterList_1_Contains_m13439_gshared (BetterList_1_t2103 * __this, Object_t * ___item, const MethodInfo* method);
#define BetterList_1_Contains_m13439(__this, ___item, method) (( bool (*) (BetterList_1_t2103 *, Object_t *, const MethodInfo*))BetterList_1_Contains_m13439_gshared)(__this, ___item, method)
// System.Boolean BetterList`1<System.Object>::Remove(T)
extern "C" bool BetterList_1_Remove_m13440_gshared (BetterList_1_t2103 * __this, Object_t * ___item, const MethodInfo* method);
#define BetterList_1_Remove_m13440(__this, ___item, method) (( bool (*) (BetterList_1_t2103 *, Object_t *, const MethodInfo*))BetterList_1_Remove_m13440_gshared)(__this, ___item, method)
// System.Void BetterList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void BetterList_1_RemoveAt_m13442_gshared (BetterList_1_t2103 * __this, int32_t ___index, const MethodInfo* method);
#define BetterList_1_RemoveAt_m13442(__this, ___index, method) (( void (*) (BetterList_1_t2103 *, int32_t, const MethodInfo*))BetterList_1_RemoveAt_m13442_gshared)(__this, ___index, method)
// T BetterList`1<System.Object>::Pop()
extern "C" Object_t * BetterList_1_Pop_m13444_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_Pop_m13444(__this, method) (( Object_t * (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_Pop_m13444_gshared)(__this, method)
// T[] BetterList`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t38* BetterList_1_ToArray_m13446_gshared (BetterList_1_t2103 * __this, const MethodInfo* method);
#define BetterList_1_ToArray_m13446(__this, method) (( ObjectU5BU5D_t38* (*) (BetterList_1_t2103 *, const MethodInfo*))BetterList_1_ToArray_m13446_gshared)(__this, method)
// System.Void BetterList`1<System.Object>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m13448_gshared (BetterList_1_t2103 * __this, CompareFunc_t2105 * ___comparer, const MethodInfo* method);
#define BetterList_1_Sort_m13448(__this, ___comparer, method) (( void (*) (BetterList_1_t2103 *, CompareFunc_t2105 *, const MethodInfo*))BetterList_1_Sort_m13448_gshared)(__this, ___comparer, method)

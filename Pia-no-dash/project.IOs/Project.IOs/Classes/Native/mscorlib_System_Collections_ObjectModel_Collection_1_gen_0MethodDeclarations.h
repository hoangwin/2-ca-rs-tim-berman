#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t2147;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2750;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2145;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m14061_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14061(__this, method) (( void (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1__ctor_m14061_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14062_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14062(__this, method) (( bool (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14062_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14063_gshared (Collection_1_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14063(__this, ___array, ___index, method) (( void (*) (Collection_1_t2147 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14063_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14064_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14064(__this, method) (( Object_t * (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14064_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14065_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14065(__this, ___value, method) (( int32_t (*) (Collection_1_t2147 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14065_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14066_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14066(__this, ___value, method) (( bool (*) (Collection_1_t2147 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14066_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14067_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14067(__this, ___value, method) (( int32_t (*) (Collection_1_t2147 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14067_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14068_gshared (Collection_1_t2147 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14068(__this, ___index, ___value, method) (( void (*) (Collection_1_t2147 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14068_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14069_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14069(__this, ___value, method) (( void (*) (Collection_1_t2147 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14069_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14070_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14070(__this, method) (( bool (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14070_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14071_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14071(__this, method) (( Object_t * (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14071_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14072_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14072(__this, method) (( bool (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14072_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14073_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14073(__this, method) (( bool (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14073_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14074_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14074(__this, ___index, method) (( Object_t * (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14074_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14075_gshared (Collection_1_t2147 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14075(__this, ___index, ___value, method) (( void (*) (Collection_1_t2147 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14076_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m14076(__this, ___item, method) (( void (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_Add_m14076_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14077_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14077(__this, method) (( void (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_Clear_m14077_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14078_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14078(__this, method) (( void (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_ClearItems_m14078_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14079_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m14079(__this, ___item, method) (( bool (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_Contains_m14079_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14080_gshared (Collection_1_t2147 * __this, Int32U5BU5D_t195* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14080(__this, ___array, ___index, method) (( void (*) (Collection_1_t2147 *, Int32U5BU5D_t195*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14080_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14081_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14081(__this, method) (( Object_t* (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_GetEnumerator_m14081_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14082_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14082(__this, ___item, method) (( int32_t (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m14082_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14083_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m14083(__this, ___index, ___item, method) (( void (*) (Collection_1_t2147 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m14083_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14084_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14084(__this, ___index, ___item, method) (( void (*) (Collection_1_t2147 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m14084_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14085_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m14085(__this, ___item, method) (( bool (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_Remove_m14085_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14086_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14086(__this, ___index, method) (( void (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14086_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14087_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14087(__this, ___index, method) (( void (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14087_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14088_gshared (Collection_1_t2147 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14088(__this, method) (( int32_t (*) (Collection_1_t2147 *, const MethodInfo*))Collection_1_get_Count_m14088_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14089_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14089(__this, ___index, method) (( int32_t (*) (Collection_1_t2147 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14089_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14090_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14090(__this, ___index, ___value, method) (( void (*) (Collection_1_t2147 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m14090_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14091_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14091(__this, ___index, ___item, method) (( void (*) (Collection_1_t2147 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m14091_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14092_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14092(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14092_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m14093_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14093(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14093_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14094_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14094(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14094_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14095_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14095(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14095_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14096_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14096(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14096_gshared)(__this /* static, unused */, ___list, method)

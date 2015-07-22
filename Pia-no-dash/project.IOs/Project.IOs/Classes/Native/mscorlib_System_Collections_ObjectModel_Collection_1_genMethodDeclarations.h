#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2028;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Object[]
struct ObjectU5BU5D_t38;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2391;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2026;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12605_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12605(__this, method) (( void (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1__ctor_m12605_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12606_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12606(__this, method) (( bool (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12606_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12607_gshared (Collection_1_t2028 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12607(__this, ___array, ___index, method) (( void (*) (Collection_1_t2028 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12607_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12608_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12608(__this, method) (( Object_t * (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12608_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12609_gshared (Collection_1_t2028 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12609(__this, ___value, method) (( int32_t (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12609_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12610_gshared (Collection_1_t2028 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12610(__this, ___value, method) (( bool (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12610_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12611_gshared (Collection_1_t2028 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12611(__this, ___value, method) (( int32_t (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12611_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12612_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12612(__this, ___index, ___value, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12612_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12613_gshared (Collection_1_t2028 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12613(__this, ___value, method) (( void (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12614_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12614(__this, method) (( bool (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12614_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12615_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12615(__this, method) (( Object_t * (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12615_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12616_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12616(__this, method) (( bool (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12616_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12617_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12617(__this, method) (( bool (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12617_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12618_gshared (Collection_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12618(__this, ___index, method) (( Object_t * (*) (Collection_1_t2028 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12618_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12619_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12619(__this, ___index, ___value, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12619_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12620_gshared (Collection_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12620(__this, ___item, method) (( void (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_Add_m12620_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12621_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12621(__this, method) (( void (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_Clear_m12621_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12622_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12622(__this, method) (( void (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_ClearItems_m12622_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12623_gshared (Collection_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12623(__this, ___item, method) (( bool (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12623_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12624_gshared (Collection_1_t2028 * __this, ObjectU5BU5D_t38* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12624(__this, ___array, ___index, method) (( void (*) (Collection_1_t2028 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12624_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12625_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12625(__this, method) (( Object_t* (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_GetEnumerator_m12625_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12626_gshared (Collection_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12626(__this, ___item, method) (( int32_t (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12626_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12627_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12627(__this, ___index, ___item, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12627_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12628_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12628(__this, ___index, ___item, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12628_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12629_gshared (Collection_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12629(__this, ___item, method) (( bool (*) (Collection_1_t2028 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12629_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12630_gshared (Collection_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12630(__this, ___index, method) (( void (*) (Collection_1_t2028 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12630_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12631_gshared (Collection_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12631(__this, ___index, method) (( void (*) (Collection_1_t2028 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12631_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12632_gshared (Collection_1_t2028 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12632(__this, method) (( int32_t (*) (Collection_1_t2028 *, const MethodInfo*))Collection_1_get_Count_m12632_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12633_gshared (Collection_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12633(__this, ___index, method) (( Object_t * (*) (Collection_1_t2028 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12633_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12634_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12634(__this, ___index, ___value, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12634_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12635_gshared (Collection_1_t2028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12635(__this, ___index, ___item, method) (( void (*) (Collection_1_t2028 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12635_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12636_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12636(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12636_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12637_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12637(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12637_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12638_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12638(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12638_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12639_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m12639(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m12639_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12640_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m12640(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m12640_gshared)(__this /* static, unused */, ___list, method)

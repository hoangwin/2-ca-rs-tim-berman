﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t2625;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t859;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>
struct IList_1_t2624;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t2623;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t3025;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m20584(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2625 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m12575_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m20585(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2625 *, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12576_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m20586(__this, method) (( void (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12577_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m20587(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12578_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m20588(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12579_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m20589(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12580_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m20590(__this, ___index, method) (( BaseInvokableCall_t859 * (*) (ReadOnlyCollection_1_t2625 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12581_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m20591(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12582_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20592(__this, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12583_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m20593(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2625 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12584_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m20594(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12585_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m20595(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2625 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m12586_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m20596(__this, method) (( void (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m12587_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m20597(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m12588_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m20598(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2625 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12589_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m20599(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m12590_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m20600(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2625 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m12591_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m20601(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12592_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m20602(__this, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12593_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m20603(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12594_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m20604(__this, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12595_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m20605(__this, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12596_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m20606(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2625 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12597_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m20607(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2625 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12598_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define ReadOnlyCollection_1_Contains_m20608(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2625 *, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m12599_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m20609(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2625 *, BaseInvokableCallU5BU5D_t2623*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m12600_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m20610(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12601_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m20611(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2625 *, BaseInvokableCall_t859 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m12602_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define ReadOnlyCollection_1_get_Count_m20612(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2625 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m12603_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m20613(__this, ___index, method) (( BaseInvokableCall_t859 * (*) (ReadOnlyCollection_1_t2625 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m12604_gshared)(__this, ___index, method)
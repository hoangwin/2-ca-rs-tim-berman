#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EventDelegate
struct EventDelegate_t172;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// System.String
struct String_t;
// EventDelegate/Callback
struct Callback_t171;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;

// System.Void EventDelegate::.ctor()
extern "C" void EventDelegate__ctor_m854 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(EventDelegate/Callback)
extern "C" void EventDelegate__ctor_m855 (EventDelegate_t172 * __this, Callback_t171 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(UnityEngine.MonoBehaviour,System.String)
extern "C" void EventDelegate__ctor_m856 (EventDelegate_t172 * __this, MonoBehaviour_t2 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.cctor()
extern "C" void EventDelegate__cctor_m857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour EventDelegate::get_target()
extern "C" MonoBehaviour_t2 * EventDelegate_get_target_m858 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_target(UnityEngine.MonoBehaviour)
extern "C" void EventDelegate_set_target_m859 (EventDelegate_t172 * __this, MonoBehaviour_t2 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::get_methodName()
extern "C" String_t* EventDelegate_get_methodName_m860 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_methodName(System.String)
extern "C" void EventDelegate_set_methodName_m861 (EventDelegate_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isValid()
extern "C" bool EventDelegate_get_isValid_m862 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isEnabled()
extern "C" bool EventDelegate_get_isEnabled_m863 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::GetMethodName(EventDelegate/Callback)
extern "C" String_t* EventDelegate_GetMethodName_m864 (Object_t * __this /* static, unused */, Callback_t171 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(EventDelegate/Callback)
extern "C" bool EventDelegate_IsValid_m865 (Object_t * __this /* static, unused */, Callback_t171 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Equals(System.Object)
extern "C" bool EventDelegate_Equals_m866 (EventDelegate_t172 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EventDelegate::GetHashCode()
extern "C" int32_t EventDelegate_GetHashCode_m867 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate/Callback EventDelegate::Get()
extern "C" Callback_t171 * EventDelegate_Get_m868 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(EventDelegate/Callback)
extern "C" void EventDelegate_Set_m869 (EventDelegate_t172 * __this, Callback_t171 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(UnityEngine.MonoBehaviour,System.String)
extern "C" void EventDelegate_Set_m870 (EventDelegate_t172 * __this, MonoBehaviour_t2 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Execute()
extern "C" bool EventDelegate_Execute_m871 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Clear()
extern "C" void EventDelegate_Clear_m872 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::ToString()
extern "C" String_t* EventDelegate_ToString_m873 (EventDelegate_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Execute(System.Collections.Generic.List`1<EventDelegate>)
extern "C" void EventDelegate_Execute_m874 (Object_t * __this /* static, unused */, List_1_t80 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(System.Collections.Generic.List`1<EventDelegate>)
extern "C" bool EventDelegate_IsValid_m875 (Object_t * __this /* static, unused */, List_1_t80 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" void EventDelegate_Set_m876 (Object_t * __this /* static, unused */, List_1_t80 * ___list, Callback_t171 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" void EventDelegate_Add_m877 (Object_t * __this /* static, unused */, List_1_t80 * ___list, Callback_t171 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback,System.Boolean)
extern "C" void EventDelegate_Add_m878 (Object_t * __this /* static, unused */, List_1_t80 * ___list, Callback_t171 * ___callback, bool ___oneShot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C" void EventDelegate_Add_m879 (Object_t * __this /* static, unused */, List_1_t80 * ___list, EventDelegate_t172 * ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate,System.Boolean)
extern "C" void EventDelegate_Add_m880 (Object_t * __this /* static, unused */, List_1_t80 * ___list, EventDelegate_t172 * ___ev, bool ___oneShot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" bool EventDelegate_Remove_m881 (Object_t * __this /* static, unused */, List_1_t80 * ___list, Callback_t171 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;

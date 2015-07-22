#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t2587;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t488;
struct Event_t488_marshaled;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_43MethodDeclarations.h"
#define Transform_1__ctor_m20360(__this, ___object, ___method, method) (( void (*) (Transform_1_t2587 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20338_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20361(__this, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Transform_1_t2587 *, Event_t488 *, int32_t, const MethodInfo*))Transform_1_Invoke_m20339_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20362(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2587 *, Event_t488 *, int32_t, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20340_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20363(__this, ___result, method) (( DictionaryEntry_t65  (*) (Transform_1_t2587 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20341_gshared)(__this, ___result, method)

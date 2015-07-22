#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// System.String
struct String_t;
// EventDelegate/Callback
struct Callback_t171;
// System.Object
#include "mscorlib_System_Object.h"
// EventDelegate
struct  EventDelegate_t172  : public Object_t
{
	// UnityEngine.MonoBehaviour EventDelegate::mTarget
	MonoBehaviour_t2 * ___mTarget_0;
	// System.String EventDelegate::mMethodName
	String_t* ___mMethodName_1;
	// System.Boolean EventDelegate::oneShot
	bool ___oneShot_2;
	// EventDelegate/Callback EventDelegate::mCachedCallback
	Callback_t171 * ___mCachedCallback_3;
	// System.Boolean EventDelegate::mRawDelegate
	bool ___mRawDelegate_4;
};
struct EventDelegate_t172_StaticFields{
	// System.Int32 EventDelegate::s_Hash
	int32_t ___s_Hash_5;
};

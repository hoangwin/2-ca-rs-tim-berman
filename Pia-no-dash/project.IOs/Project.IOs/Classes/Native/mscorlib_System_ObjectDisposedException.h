#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ObjectDisposedException
struct  ObjectDisposedException_t989  : public InvalidOperationException_t1154
{
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;
};

#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t64;
// System.Threading.Timer
struct Timer_t1659;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t1660  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t64 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t1659 * ____timer_1;
};

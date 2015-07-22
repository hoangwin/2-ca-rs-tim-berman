#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t368;
struct Touch_t368_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2390 (Touch_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t27  Touch_get_position_m2392 (Touch_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m2393 (Touch_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2391 (Touch_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t368_marshal(const Touch_t368& unmarshaled, Touch_t368_marshaled& marshaled);
void Touch_t368_marshal_back(const Touch_t368_marshaled& marshaled, Touch_t368& unmarshaled);
void Touch_t368_marshal_cleanup(Touch_t368_marshaled& marshaled);

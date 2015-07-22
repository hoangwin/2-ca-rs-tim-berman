#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t155;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIToggledObjects
struct  UIToggledObjects_t156  : public MonoBehaviour_t2
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::activate
	List_1_t155 * ___activate_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::deactivate
	List_1_t155 * ___deactivate_3;
	// UnityEngine.GameObject UIToggledObjects::target
	GameObject_t23 * ___target_4;
	// System.Boolean UIToggledObjects::inverse
	bool ___inverse_5;
};

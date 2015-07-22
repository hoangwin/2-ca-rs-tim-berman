#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.GameObject
struct GameObject_t23;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UICamera/ClickNotification
#include "AssemblyU2DCSharp_UICamera_ClickNotification.h"
// UICamera/MouseOrTouch
struct  MouseOrTouch_t246  : public Object_t
{
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t27  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::lastPos
	Vector2_t27  ___lastPos_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t27  ___delta_2;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t27  ___totalDelta_3;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t113 * ___pressedCam_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::last
	GameObject_t23 * ___last_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t23 * ___current_6;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t23 * ___pressed_7;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t23 * ___dragged_8;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_9;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_10;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_11;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_12;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_13;
};

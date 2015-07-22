#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UIRect
struct UIRect_t108;
// UnityEngine.Camera
struct Camera_t113;
// System.Object
#include "mscorlib_System_Object.h"
// UIRect/AnchorPoint
struct  AnchorPoint_t211  : public Object_t
{
	// UnityEngine.Transform UIRect/AnchorPoint::target
	Transform_t32 * ___target_0;
	// System.Single UIRect/AnchorPoint::relative
	float ___relative_1;
	// System.Int32 UIRect/AnchorPoint::absolute
	int32_t ___absolute_2;
	// UIRect UIRect/AnchorPoint::rect
	UIRect_t108 * ___rect_3;
	// UnityEngine.Camera UIRect/AnchorPoint::targetCam
	Camera_t113 * ___targetCam_4;
};

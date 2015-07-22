#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIViewport
struct  UIViewport_t292  : public MonoBehaviour_t2
{
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t113 * ___sourceCamera_2;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t32 * ___topLeft_3;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t32 * ___bottomRight_4;
	// System.Single UIViewport::fullSize
	float ___fullSize_5;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t113 * ___mCam_6;
};

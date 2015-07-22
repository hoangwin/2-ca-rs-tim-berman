#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UIProgressBar
#include "AssemblyU2DCSharp_UIProgressBar.h"
// UISlider/Direction
#include "AssemblyU2DCSharp_UISlider_Direction.h"
// UISlider
struct  UISlider_t142  : public UIProgressBar_t137
{
	// UnityEngine.Transform UISlider::foreground
	Transform_t32 * ___foreground_15;
	// System.Single UISlider::rawValue
	float ___rawValue_16;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_17;
	// System.Boolean UISlider::mInverted
	bool ___mInverted_18;
};

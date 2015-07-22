#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t34;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIPlaySound/Trigger
#include "AssemblyU2DCSharp_UIPlaySound_Trigger.h"
// UIPlaySound
struct  UIPlaySound_t124  : public MonoBehaviour_t2
{
	// UnityEngine.AudioClip UIPlaySound::audioClip
	AudioClip_t34 * ___audioClip_2;
	// UIPlaySound/Trigger UIPlaySound::trigger
	int32_t ___trigger_3;
	// System.Single UIPlaySound::volume
	float ___volume_4;
	// System.Single UIPlaySound::pitch
	float ___pitch_5;
};

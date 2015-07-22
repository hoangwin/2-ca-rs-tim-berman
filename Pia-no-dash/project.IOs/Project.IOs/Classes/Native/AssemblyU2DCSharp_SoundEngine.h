#pragma once
#include <stdint.h>
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t308;
// UnityEngine.AudioClip
struct AudioClip_t34;
// UnityEngine.AudioSource
struct AudioSource_t25;
// SoundEngine
struct SoundEngine_t309;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundEngine
struct  SoundEngine_t309  : public MonoBehaviour_t2
{
	// UnityEngine.AudioClip[] SoundEngine::clips
	AudioClipU5BU5D_t308* ___clips_3;
	// UnityEngine.AudioClip SoundEngine::end
	AudioClip_t34 * ___end_4;
	// UnityEngine.AudioSource SoundEngine::audioSource
	AudioSource_t25 * ___audioSource_5;
	// UnityEngine.AudioSource SoundEngine::music
	AudioSource_t25 * ___music_6;
};
struct SoundEngine_t309_StaticFields{
	// System.Boolean SoundEngine::isSound
	bool ___isSound_2;
	// SoundEngine SoundEngine::instance
	SoundEngine_t309 * ___instance_7;
};

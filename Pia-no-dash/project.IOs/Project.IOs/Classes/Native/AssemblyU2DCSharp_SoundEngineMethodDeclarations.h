#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundEngine
struct SoundEngine_t309;
// UnityEngine.AudioClip
struct AudioClip_t34;

// System.Void SoundEngine::.ctor()
extern "C" void SoundEngine__ctor_m1895 (SoundEngine_t309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::.cctor()
extern "C" void SoundEngine__cctor_m1896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::Start()
extern "C" void SoundEngine_Start_m1897 (SoundEngine_t309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::play(UnityEngine.AudioClip)
extern "C" void SoundEngine_play_m1898 (Object_t * __this /* static, unused */, AudioClip_t34 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::play(System.Int32)
extern "C" void SoundEngine_play_m1899 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::Update()
extern "C" void SoundEngine_Update_m1900 (SoundEngine_t309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

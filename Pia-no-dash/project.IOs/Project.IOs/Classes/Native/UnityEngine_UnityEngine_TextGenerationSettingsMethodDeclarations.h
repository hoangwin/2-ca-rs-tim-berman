#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t582;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"

// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C" bool TextGenerationSettings_CompareColors_m5277 (TextGenerationSettings_t582 * __this, Color_t9  ___left, Color_t9  ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool TextGenerationSettings_CompareVector2_m5278 (TextGenerationSettings_t582 * __this, Vector2_t27  ___left, Vector2_t27  ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerationSettings_Equals_m5279 (TextGenerationSettings_t582 * __this, TextGenerationSettings_t582  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

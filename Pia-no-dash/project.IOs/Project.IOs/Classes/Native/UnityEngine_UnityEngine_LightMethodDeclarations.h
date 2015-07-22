#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Light
struct Light_t50;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// UnityEngine.Color UnityEngine.Light::get_color()
extern "C" Color_t9  Light_get_color_m344 (Light_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C" void Light_set_color_m347 (Light_t50 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_get_color_m4700 (Light_t50 * __this, Color_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_set_color_m4701 (Light_t50 * __this, Color_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

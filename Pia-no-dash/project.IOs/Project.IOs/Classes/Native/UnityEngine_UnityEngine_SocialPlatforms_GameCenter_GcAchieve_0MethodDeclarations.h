#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t821;
struct GcAchievementData_t821_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t831;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t831 * GcAchievementData_ToAchievement_m5167 (GcAchievementData_t821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t821_marshal(const GcAchievementData_t821& unmarshaled, GcAchievementData_t821_marshaled& marshaled);
void GcAchievementData_t821_marshal_back(const GcAchievementData_t821_marshaled& marshaled, GcAchievementData_t821& unmarshaled);
void GcAchievementData_t821_marshal_cleanup(GcAchievementData_t821_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t822;
struct GcScoreData_t822_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t833;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t833 * GcScoreData_ToScore_m5168 (GcScoreData_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t822_marshal(const GcScoreData_t822& unmarshaled, GcScoreData_t822_marshaled& marshaled);
void GcScoreData_t822_marshal_back(const GcScoreData_t822_marshaled& marshaled, GcScoreData_t822& unmarshaled);
void GcScoreData_t822_marshal_cleanup(GcScoreData_t822_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t748;
struct SkeletonBone_t748_marshaled;

void SkeletonBone_t748_marshal(const SkeletonBone_t748& unmarshaled, SkeletonBone_t748_marshaled& marshaled);
void SkeletonBone_t748_marshal_back(const SkeletonBone_t748_marshaled& marshaled, SkeletonBone_t748& unmarshaled);
void SkeletonBone_t748_marshal_cleanup(SkeletonBone_t748_marshaled& marshaled);

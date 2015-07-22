#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t712;
struct CacheIndex_t712_marshaled;

void CacheIndex_t712_marshal(const CacheIndex_t712& unmarshaled, CacheIndex_t712_marshaled& marshaled);
void CacheIndex_t712_marshal_back(const CacheIndex_t712_marshaled& marshaled, CacheIndex_t712& unmarshaled);
void CacheIndex_t712_marshal_cleanup(CacheIndex_t712_marshaled& marshaled);

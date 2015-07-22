﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t1862;
// System.Threading.WaitCallback
struct WaitCallback_t1948;
// System.Object
struct Object_t;

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m11566 (Object_t * __this /* static, unused */, WaitCallback_t1948 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;

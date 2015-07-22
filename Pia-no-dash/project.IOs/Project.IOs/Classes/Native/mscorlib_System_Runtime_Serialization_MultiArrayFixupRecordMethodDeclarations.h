﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1746;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1743;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1736;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m10749 (MultiArrayFixupRecord_t1746 * __this, ObjectRecord_t1743 * ___objectToBeFixed, Int32U5BU5D_t195* ___indices, ObjectRecord_t1743 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m10750 (MultiArrayFixupRecord_t1746 * __this, ObjectManager_t1736 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;

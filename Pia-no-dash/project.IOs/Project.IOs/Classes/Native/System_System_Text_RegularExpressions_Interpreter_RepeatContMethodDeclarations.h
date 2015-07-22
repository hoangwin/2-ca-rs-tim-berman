#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1279;

// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" void RepeatContext__ctor_m7149 (RepeatContext_t1279 * __this, RepeatContext_t1279 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m7150 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m7151 (RepeatContext_t1279 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m7152 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m7153 (RepeatContext_t1279 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m7154 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m7155 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m7156 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m7157 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t1279 * RepeatContext_get_Previous_m7158 (RepeatContext_t1279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

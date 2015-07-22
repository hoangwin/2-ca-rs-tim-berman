#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Localization
struct Localization_t173;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t319;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t175;

// System.Void Localization::.ctor()
extern "C" void Localization__ctor_m882 (Localization_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C" bool Localization_get_isActive_m883 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Localization Localization::get_instance()
extern "C" Localization_t173 * Localization_get_instance_m884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_currentLanguage()
extern "C" String_t* Localization_get_currentLanguage_m885 (Localization_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_currentLanguage(System.String)
extern "C" void Localization_set_currentLanguage_m886 (Localization_t173 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Awake()
extern "C" void Localization_Awake_m887 (Localization_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnEnable()
extern "C" void Localization_OnEnable_m888 (Localization_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDestroy()
extern "C" void Localization_OnDestroy_m889 (Localization_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C" void Localization_Load_m890 (Localization_t173 * __this, TextAsset_t319 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void Localization_Set_m891 (Localization_t173 * __this, String_t* ___languageName, Dictionary_2_t175 * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C" String_t* Localization_Get_m892 (Localization_t173 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C" String_t* Localization_Localize_m893 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
// Localization
struct Localization_t173;
// System.String
struct String_t;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t174;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t175;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Localization
struct  Localization_t173  : public MonoBehaviour_t2
{
	// System.String Localization::startingLanguage
	String_t* ___startingLanguage_3;
	// UnityEngine.TextAsset[] Localization::languages
	TextAssetU5BU5D_t174* ___languages_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mDictionary
	Dictionary_2_t175 * ___mDictionary_5;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_6;
};
struct Localization_t173_StaticFields{
	// Localization Localization::mInstance
	Localization_t173 * ___mInstance_2;
};

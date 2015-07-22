#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween
struct iTween_t18;
// System.Collections.Hashtable
struct Hashtable_t24;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.AudioClip
struct AudioClip_t34;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// UnityEngine.Transform[]
struct TransformU5BU5D_t36;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Texture2D
struct Texture2D_t37;
// UnityEngine.Transform
struct Transform_t32;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t38;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void iTween::.ctor(System.Collections.Hashtable)
extern "C" void iTween__ctor_m35 (iTween_t18 * __this, Hashtable_t24 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
extern "C" void iTween__cctor_m36 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
extern "C" void iTween_Init_m37 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
extern "C" void iTween_CameraFadeFrom_m38 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeFrom_m39 (Object_t * __this /* static, unused */, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
extern "C" void iTween_CameraFadeTo_m40 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeTo_m41 (Object_t * __this /* static, unused */, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ValueTo_m42 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeFrom_m43 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeFrom_m44 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeTo_m45 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeTo_m46 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorFrom_m47 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Color_t9  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorFrom_m48 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorTo_m49 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Color_t9  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorTo_m50 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioFrom_m51 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioFrom_m52 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioTo_m53 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioTo_m54 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
extern "C" void iTween_Stab_m55 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, AudioClip_t34 * ___audioclip, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Stab_m56 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookFrom_m57 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookFrom_m58 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookTo_m59 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookTo_m60 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveTo_m61 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveTo_m62 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveFrom_m63 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveFrom_m64 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveAdd_m65 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveAdd_m66 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveBy_m67 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveBy_m68 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleTo_m69 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleTo_m70 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleFrom_m71 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleFrom_m72 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleAdd_m73 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleAdd_m74 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleBy_m75 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleBy_m76 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateTo_m77 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateTo_m78 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateFrom_m79 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateFrom_m80 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateAdd_m81 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateAdd_m82 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateBy_m83 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateBy_m84 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakePosition_m85 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakePosition_m86 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeScale_m87 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeScale_m88 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeRotation_m89 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeRotation_m90 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchPosition_m91 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchPosition_m92 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchRotation_m93 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchRotation_m94 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchScale_m95 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchScale_m96 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
extern "C" void iTween_GenerateTargets_m97 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
extern "C" void iTween_GenerateRectTargets_m98 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
extern "C" void iTween_GenerateColorTargets_m99 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
extern "C" void iTween_GenerateVector3Targets_m100 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
extern "C" void iTween_GenerateVector2Targets_m101 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
extern "C" void iTween_GenerateFloatTargets_m102 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
extern "C" void iTween_GenerateColorToTargets_m103 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
extern "C" void iTween_GenerateAudioToTargets_m104 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
extern "C" void iTween_GenerateStabTargets_m105 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
extern "C" void iTween_GenerateLookToTargets_m106 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
extern "C" void iTween_GenerateMoveToPathTargets_m107 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
extern "C" void iTween_GenerateMoveToTargets_m108 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
extern "C" void iTween_GenerateMoveByTargets_m109 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
extern "C" void iTween_GenerateScaleToTargets_m110 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
extern "C" void iTween_GenerateScaleByTargets_m111 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
extern "C" void iTween_GenerateScaleAddTargets_m112 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
extern "C" void iTween_GenerateRotateToTargets_m113 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
extern "C" void iTween_GenerateRotateAddTargets_m114 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
extern "C" void iTween_GenerateRotateByTargets_m115 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
extern "C" void iTween_GenerateShakePositionTargets_m116 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
extern "C" void iTween_GenerateShakeScaleTargets_m117 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
extern "C" void iTween_GenerateShakeRotationTargets_m118 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
extern "C" void iTween_GeneratePunchPositionTargets_m119 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
extern "C" void iTween_GeneratePunchRotationTargets_m120 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
extern "C" void iTween_GeneratePunchScaleTargets_m121 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
extern "C" void iTween_ApplyRectTargets_m122 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
extern "C" void iTween_ApplyColorTargets_m123 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
extern "C" void iTween_ApplyVector3Targets_m124 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
extern "C" void iTween_ApplyVector2Targets_m125 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
extern "C" void iTween_ApplyFloatTargets_m126 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
extern "C" void iTween_ApplyColorToTargets_m127 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
extern "C" void iTween_ApplyAudioToTargets_m128 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
extern "C" void iTween_ApplyStabTargets_m129 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
extern "C" void iTween_ApplyMoveToPathTargets_m130 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
extern "C" void iTween_ApplyMoveToTargets_m131 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
extern "C" void iTween_ApplyMoveByTargets_m132 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
extern "C" void iTween_ApplyScaleToTargets_m133 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
extern "C" void iTween_ApplyLookToTargets_m134 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
extern "C" void iTween_ApplyRotateToTargets_m135 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
extern "C" void iTween_ApplyRotateAddTargets_m136 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
extern "C" void iTween_ApplyShakePositionTargets_m137 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
extern "C" void iTween_ApplyShakeScaleTargets_m138 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
extern "C" void iTween_ApplyShakeRotationTargets_m139 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
extern "C" void iTween_ApplyPunchPositionTargets_m140 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
extern "C" void iTween_ApplyPunchRotationTargets_m141 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
extern "C" void iTween_ApplyPunchScaleTargets_m142 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
extern "C" Object_t * iTween_TweenDelay_m143 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
extern "C" void iTween_TweenStart_m144 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
extern "C" Object_t * iTween_TweenRestart_m145 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
extern "C" void iTween_TweenUpdate_m146 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
extern "C" void iTween_TweenComplete_m147 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
extern "C" void iTween_TweenLoop_m148 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
extern "C" Rect_t31  iTween_RectUpdate_m149 (Object_t * __this /* static, unused */, Rect_t31  ___currentValue, Rect_t31  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t10  iTween_Vector3Update_m150 (Object_t * __this /* static, unused */, Vector3_t10  ___currentValue, Vector3_t10  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t27  iTween_Vector2Update_m151 (Object_t * __this /* static, unused */, Vector2_t27  ___currentValue, Vector2_t27  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
extern "C" float iTween_FloatUpdate_m152 (Object_t * __this /* static, unused */, float ___currentValue, float ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeUpdate_m153 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeUpdate_m154 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorUpdate_m155 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorUpdate_m156 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Color_t9  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioUpdate_m157 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioUpdate_m158 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateUpdate_m159 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateUpdate_m160 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleUpdate_m161 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleUpdate_m162 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveUpdate_m163 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveUpdate_m164 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookUpdate_m165 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookUpdate_m166 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3_t10  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
extern "C" float iTween_PathLength_m167 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
extern "C" float iTween_PathLength_m168 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
extern "C" Texture2D_t37 * iTween_CameraTexture_m169 (Object_t * __this /* static, unused */, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m170 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Vector3U5BU5D_t11* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m171 (Object_t * __this /* static, unused */, Transform_t32 * ___target, Vector3U5BU5D_t11* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m172 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, TransformU5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m173 (Object_t * __this /* static, unused */, Transform_t32 * ___target, TransformU5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
extern "C" Vector3_t10  iTween_PointOnPath_m174 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
extern "C" void iTween_DrawLine_m175 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m176 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
extern "C" void iTween_DrawLine_m177 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m178 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineGizmos_m179 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m180 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawLineGizmos_m181 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m182 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineHandles_m183 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m184 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawLineHandles_m185 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m186 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___line, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t10  iTween_PointOnPath_m187 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
extern "C" void iTween_DrawPath_m188 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m189 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
extern "C" void iTween_DrawPath_m190 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m191 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathGizmos_m192 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m193 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawPathGizmos_m194 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m195 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathHandles_m196 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m197 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawPathHandles_m198 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m199 (Object_t * __this /* static, unused */, TransformU5BU5D_t36* ___path, Color_t9  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
extern "C" void iTween_CameraFadeDepth_m200 (Object_t * __this /* static, unused */, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
extern "C" void iTween_CameraFadeDestroy_m201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
extern "C" void iTween_CameraFadeSwap_m202 (Object_t * __this /* static, unused */, Texture2D_t37 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
extern "C" GameObject_t23 * iTween_CameraFadeAdd_m203 (Object_t * __this /* static, unused */, Texture2D_t37 * ___texture, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
extern "C" GameObject_t23 * iTween_CameraFadeAdd_m204 (Object_t * __this /* static, unused */, Texture2D_t37 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
extern "C" GameObject_t23 * iTween_CameraFadeAdd_m205 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
extern "C" void iTween_Resume_m206 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Resume_m207 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
extern "C" void iTween_Resume_m208 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Resume_m209 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
extern "C" void iTween_Resume_m210 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
extern "C" void iTween_Resume_m211 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
extern "C" void iTween_Pause_m212 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Pause_m213 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
extern "C" void iTween_Pause_m214 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Pause_m215 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
extern "C" void iTween_Pause_m216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
extern "C" void iTween_Pause_m217 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
extern "C" int32_t iTween_Count_m218 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
extern "C" int32_t iTween_Count_m219 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
extern "C" int32_t iTween_Count_m220 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
extern "C" int32_t iTween_Count_m221 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
extern "C" void iTween_Stop_m222 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
extern "C" void iTween_Stop_m223 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
extern "C" void iTween_StopByName_m224 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
extern "C" void iTween_Stop_m225 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Stop_m226 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
extern "C" void iTween_Stop_m227 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
extern "C" void iTween_StopByName_m228 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Stop_m229 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_StopByName_m230 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, String_t* ___name, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern "C" Hashtable_t24 * iTween_Hash_m231 (Object_t * __this /* static, unused */, ObjectU5BU5D_t38* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
extern "C" void iTween_Awake_m232 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
extern "C" Object_t * iTween_Start_m233 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
extern "C" void iTween_Update_m234 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
extern "C" void iTween_FixedUpdate_m235 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
extern "C" void iTween_LateUpdate_m236 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
extern "C" void iTween_OnEnable_m237 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
extern "C" void iTween_OnDisable_m238 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawLineHelper_m239 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___line, Color_t9  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawPathHelper_m240 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, Color_t9  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t11* iTween_PathControlPointGenerator_m241 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t10  iTween_Interp_m242 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___pts, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Launch_m243 (Object_t * __this /* static, unused */, GameObject_t23 * ___target, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
extern "C" Hashtable_t24 * iTween_CleanArgs_m244 (Object_t * __this /* static, unused */, Hashtable_t24 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
extern "C" String_t* iTween_GenerateID_m245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
extern "C" void iTween_RetrieveArgs_m246 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GetEasingFunction()
extern "C" void iTween_GetEasingFunction_m247 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
extern "C" void iTween_UpdatePercentage_m248 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
extern "C" void iTween_CallBack_m249 (iTween_t18 * __this, String_t* ___callbackType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
extern "C" void iTween_Dispose_m250 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
extern "C" void iTween_ConflictCheck_m251 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
extern "C" void iTween_EnableKinematic_m252 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
extern "C" void iTween_DisableKinematic_m253 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
extern "C" void iTween_ResumeDelay_m254 (iTween_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
extern "C" float iTween_linear_m255 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
extern "C" float iTween_clerp_m256 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
extern "C" float iTween_spring_m257 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuad_m258 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuad_m259 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuad_m260 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCubic_m261 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCubic_m262 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCubic_m263 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuart_m264 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuart_m265 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuart_m266 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuint_m267 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuint_m268 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuint_m269 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInSine_m270 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutSine_m271 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutSine_m272 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInExpo_m273 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutExpo_m274 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutExpo_m275 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCirc_m276 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCirc_m277 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCirc_m278 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBounce_m279 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBounce_m280 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBounce_m281 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBack_m282 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBack_m283 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBack_m284 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
extern "C" float iTween_punch_m285 (iTween_t18 * __this, float ___amplitude, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInElastic_m286 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutElastic_m287 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutElastic_m288 (iTween_t18 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

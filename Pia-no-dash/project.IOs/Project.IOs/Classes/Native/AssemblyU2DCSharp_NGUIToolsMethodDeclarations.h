#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUITools
struct NGUITools_t185;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t25;
// UnityEngine.AudioClip
struct AudioClip_t34;
// UnityEngine.WWW
struct WWW_t321;
// UnityEngine.WWWForm
struct WWWForm_t322;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.BoxCollider
struct BoxCollider_t323;
// UnityEngine.Object
struct Object_t62;
struct Object_t62_marshaled;
// UIPanel
struct UIPanel_t94;
// UnityEngine.Transform
struct Transform_t32;
// UISprite
struct UISprite_t72;
// UIAtlas
struct UIAtlas_t129;
// System.Object
struct Object_t;
// UnityEngine.Behaviour
struct Behaviour_t324;
// System.Byte[]
struct ByteU5BU5D_t169;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void NGUITools::.cctor()
extern "C" void NGUITools__cctor_m960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
extern "C" float NGUITools_get_soundVolume_m961 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
extern "C" void NGUITools_set_soundVolume_m962 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
extern "C" bool NGUITools_get_fileAccess_m963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
extern "C" AudioSource_t25 * NGUITools_PlaySound_m964 (Object_t * __this /* static, unused */, AudioClip_t34 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C" AudioSource_t25 * NGUITools_PlaySound_m965 (Object_t * __this /* static, unused */, AudioClip_t34 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
extern "C" AudioSource_t25 * NGUITools_PlaySound_m966 (Object_t * __this /* static, unused */, AudioClip_t34 * ___clip, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String)
extern "C" WWW_t321 * NGUITools_OpenURL_m967 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String,UnityEngine.WWWForm)
extern "C" WWW_t321 * NGUITools_OpenURL_m968 (Object_t * __this /* static, unused */, String_t* ___url, WWWForm_t322 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
extern "C" int32_t NGUITools_RandomRange_m969 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
extern "C" String_t* NGUITools_GetHierarchy_m970 (Object_t * __this /* static, unused */, GameObject_t23 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
extern "C" Camera_t113 * NGUITools_FindCameraForLayer_m971 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider NGUITools::AddWidgetCollider(UnityEngine.GameObject)
extern "C" BoxCollider_t323 * NGUITools_AddWidgetCollider_m972 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider NGUITools::AddWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C" BoxCollider_t323 * NGUITools_AddWidgetCollider_m973 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject)
extern "C" void NGUITools_UpdateWidgetCollider_m974 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_UpdateWidgetCollider_m975 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider)
extern "C" void NGUITools_UpdateWidgetCollider_m976 (Object_t * __this /* static, unused */, BoxCollider_t323 * ___bc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider,System.Boolean)
extern "C" void NGUITools_UpdateWidgetCollider_m977 (Object_t * __this /* static, unused */, BoxCollider_t323 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetTypeName(UnityEngine.Object)
extern "C" String_t* NGUITools_GetTypeName_m978 (Object_t * __this /* static, unused */, Object_t62 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::RegisterUndo(UnityEngine.Object,System.String)
extern "C" void NGUITools_RegisterUndo_m979 (Object_t * __this /* static, unused */, Object_t62 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
extern "C" GameObject_t23 * NGUITools_AddChild_m980 (Object_t * __this /* static, unused */, GameObject_t23 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C" GameObject_t23 * NGUITools_AddChild_m981 (Object_t * __this /* static, unused */, GameObject_t23 * ___parent, bool ___undo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t23 * NGUITools_AddChild_m982 (Object_t * __this /* static, unused */, GameObject_t23 * ___parent, GameObject_t23 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateRaycastDepth(UnityEngine.GameObject)
extern "C" int32_t NGUITools_CalculateRaycastDepth_m983 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
extern "C" int32_t NGUITools_CalculateNextDepth_m984 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject,System.Boolean)
extern "C" int32_t NGUITools_CalculateNextDepth_m985 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___ignoreChildrenWithColliders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::AdjustDepth(UnityEngine.GameObject,System.Int32)
extern "C" int32_t NGUITools_AdjustDepth_m986 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, int32_t ___adjustment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::BringForward(UnityEngine.GameObject)
extern "C" void NGUITools_BringForward_m987 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::PushBack(UnityEngine.GameObject)
extern "C" void NGUITools_PushBack_m988 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeDepths()
extern "C" void NGUITools_NormalizeDepths_m989 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths()
extern "C" void NGUITools_NormalizeWidgetDepths_m990 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizePanelDepths()
extern "C" void NGUITools_NormalizePanelDepths_m991 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean)
extern "C" UIPanel_t94 * NGUITools_CreateUI_m992 (Object_t * __this /* static, unused */, bool ___advanced3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean,System.Int32)
extern "C" UIPanel_t94 * NGUITools_CreateUI_m993 (Object_t * __this /* static, unused */, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C" UIPanel_t94 * NGUITools_CreateUI_m994 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C" void NGUITools_SetChildLayer_m995 (Object_t * __this /* static, unused */, Transform_t32 * ___t, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
extern "C" UISprite_t72 * NGUITools_AddSprite_m996 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, UIAtlas_t129 * ___atlas, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
extern "C" GameObject_t23 * NGUITools_GetRoot_m997 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
extern "C" void NGUITools_Destroy_m998 (Object_t * __this /* static, unused */, Object_t62 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
extern "C" void NGUITools_DestroyImmediate_m999 (Object_t * __this /* static, unused */, Object_t62 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
extern "C" void NGUITools_Broadcast_m1000 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
extern "C" void NGUITools_Broadcast_m1001 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool NGUITools_IsChild_m1002 (Object_t * __this /* static, unused */, Transform_t32 * ___parent, Transform_t32 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
extern "C" void NGUITools_Activate_m1003 (Object_t * __this /* static, unused */, Transform_t32 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
extern "C" void NGUITools_Deactivate_m1004 (Object_t * __this /* static, unused */, Transform_t32 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActive_m1005 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::CallCreatePanel(UnityEngine.Transform)
extern "C" void NGUITools_CallCreatePanel_m1006 (Object_t * __this /* static, unused */, Transform_t32 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveChildren_m1007 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsActive(UnityEngine.Behaviour)
extern "C" bool NGUITools_IsActive_m1008 (Object_t * __this /* static, unused */, Behaviour_t324 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.Behaviour)
extern "C" bool NGUITools_GetActive_m1009 (Object_t * __this /* static, unused */, Behaviour_t324 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
extern "C" bool NGUITools_GetActive_m1010 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveSelf_m1011 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C" void NGUITools_SetLayer_m1012 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
extern "C" Vector3_t10  NGUITools_Round_m1013 (Object_t * __this /* static, unused */, Vector3_t10  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
extern "C" void NGUITools_MakePixelPerfect_m1014 (Object_t * __this /* static, unused */, Transform_t32 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
extern "C" bool NGUITools_Save_m1015 (Object_t * __this /* static, unused */, String_t* ___fileName, ByteU5BU5D_t169* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
extern "C" ByteU5BU5D_t169* NGUITools_Load_m1016 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
extern "C" Color_t9  NGUITools_ApplyPMA_m1017 (Object_t * __this /* static, unused */, Color_t9  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
extern "C" void NGUITools_MarkParentAsChanged_m1018 (Object_t * __this /* static, unused */, GameObject_t23 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
extern "C" String_t* NGUITools_get_clipboard_m1019 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
extern "C" void NGUITools_set_clipboard_m1020 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
extern "C" String_t* NGUITools_EncodeColor_m1021 (Object_t * __this /* static, unused */, Color_t9  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
extern "C" Color_t9  NGUITools_ParseColor_m1022 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
extern "C" String_t* NGUITools_StripSymbols_m1023 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera)
extern "C" Vector3U5BU5D_t11* NGUITools_GetSides_m1024 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single)
extern "C" Vector3U5BU5D_t11* NGUITools_GetSides_m1025 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* NGUITools_GetSides_m1026 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* NGUITools_GetSides_m1027 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, float ___depth, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera)
extern "C" Vector3U5BU5D_t11* NGUITools_GetWorldCorners_m1028 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single)
extern "C" Vector3U5BU5D_t11* NGUITools_GetWorldCorners_m1029 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* NGUITools_GetWorldCorners_m1030 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* NGUITools_GetWorldCorners_m1031 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, float ___depth, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;

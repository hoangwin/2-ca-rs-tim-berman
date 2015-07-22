#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDrawCall
struct UIDrawCall_t197;
// BetterList`1<UIDrawCall>
struct BetterList_1_t189;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Texture
struct Texture_t190;
// UnityEngine.Shader
struct Shader_t191;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t275;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// System.Int32[]
struct Int32U5BU5D_t195;
// UIPanel
struct UIPanel_t94;
// System.String
struct String_t;
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDrawCall::.ctor()
extern "C" void UIDrawCall__ctor_m1046 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C" void UIDrawCall__cctor_m1047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C" BetterList_1_t189 * UIDrawCall_get_list_m1048 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C" BetterList_1_t189 * UIDrawCall_get_activeList_m1049 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C" BetterList_1_t189 * UIDrawCall_get_inactiveList_m1050 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isDirty()
extern "C" bool UIDrawCall_get_isDirty_m1051 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_isDirty(System.Boolean)
extern "C" void UIDrawCall_set_isDirty_m1052 (UIDrawCall_t197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C" int32_t UIDrawCall_get_renderQueue_m1053 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C" void UIDrawCall_set_renderQueue_m1054 (UIDrawCall_t197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C" int32_t UIDrawCall_get_finalRenderQueue_m1055 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C" Transform_t32 * UIDrawCall_get_cachedTransform_m1056 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C" Material_t57 * UIDrawCall_get_baseMaterial_m1057 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C" void UIDrawCall_set_baseMaterial_m1058 (UIDrawCall_t197 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C" Material_t57 * UIDrawCall_get_dynamicMaterial_m1059 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C" Texture_t190 * UIDrawCall_get_mainTexture_m1060 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C" void UIDrawCall_set_mainTexture_m1061 (UIDrawCall_t197 * __this, Texture_t190 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C" Shader_t191 * UIDrawCall_get_shader_m1062 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C" void UIDrawCall_set_shader_m1063 (UIDrawCall_t197 * __this, Shader_t191 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C" int32_t UIDrawCall_get_triangles_m1064 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C" bool UIDrawCall_get_isClipped_m1065 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIDrawCall::get_clipping()
extern "C" int32_t UIDrawCall_get_clipping_m1066 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipping(UIDrawCall/Clipping)
extern "C" void UIDrawCall_set_clipping_m1067 (UIDrawCall_t197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIDrawCall::get_clipRange()
extern "C" Vector4_t198  UIDrawCall_get_clipRange_m1068 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipRange(UnityEngine.Vector4)
extern "C" void UIDrawCall_set_clipRange_m1069 (UIDrawCall_t197 * __this, Vector4_t198  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDrawCall::get_clipSoftness()
extern "C" Vector2_t27  UIDrawCall_get_clipSoftness_m1070 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipSoftness(UnityEngine.Vector2)
extern "C" void UIDrawCall_set_clipSoftness_m1071 (UIDrawCall_t197 * __this, Vector2_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C" void UIDrawCall_CreateMaterial_m1072 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C" Material_t57 * UIDrawCall_RebuildMaterial_m1073 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C" void UIDrawCall_UpdateMaterials_m1074 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Set(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIDrawCall_Set_m1075 (UIDrawCall_t197 * __this, BetterList_1_t207 * ___verts, BetterList_1_t207 * ___norms, BetterList_1_t275 * ___tans, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C" Int32U5BU5D_t195* UIDrawCall_GenerateCachedIndexBuffer_m1076 (UIDrawCall_t197 * __this, int32_t ___vertexCount, int32_t ___indexCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C" void UIDrawCall_OnWillRenderObject_m1077 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C" void UIDrawCall_OnEnable_m1078 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C" void UIDrawCall_OnDisable_m1079 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C" void UIDrawCall_OnDestroy_m1080 (UIDrawCall_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.Int32,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C" UIDrawCall_t197 * UIDrawCall_Create_m1081 (Object_t * __this /* static, unused */, int32_t ___index, UIPanel_t94 * ___panel, Material_t57 * ___mat, Texture_t190 * ___tex, Shader_t191 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C" UIDrawCall_t197 * UIDrawCall_Create_m1082 (Object_t * __this /* static, unused */, String_t* ___name, UIPanel_t94 * ___pan, Material_t57 * ___mat, Texture_t190 * ___tex, Shader_t191 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C" UIDrawCall_t197 * UIDrawCall_Create_m1083 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C" void UIDrawCall_ClearAll_m1084 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C" void UIDrawCall_ReleaseAll_m1085 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetDirty()
extern "C" void UIDrawCall_SetDirty_m1086 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetDirty(UIPanel)
extern "C" void UIDrawCall_SetDirty_m1087 (Object_t * __this /* static, unused */, UIPanel_t94 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C" int32_t UIDrawCall_Count_m1088 (Object_t * __this /* static, unused */, UIPanel_t94 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIPanel)
extern "C" void UIDrawCall_Destroy_m1089 (Object_t * __this /* static, unused */, UIPanel_t94 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C" void UIDrawCall_Destroy_m1090 (Object_t * __this /* static, unused */, UIDrawCall_t197 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Update(UIPanel)
extern "C" void UIDrawCall_Update_m1091 (Object_t * __this /* static, unused */, UIPanel_t94 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateLayer(UIPanel)
extern "C" void UIDrawCall_UpdateLayer_m1092 (Object_t * __this /* static, unused */, UIPanel_t94 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
// BetterList`1<UIDrawCall>
struct BetterList_1_t189;
// UIPanel
struct UIPanel_t94;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Texture
struct Texture_t190;
// UnityEngine.Shader
struct Shader_t191;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Mesh
struct Mesh_t192;
// UnityEngine.MeshFilter
struct MeshFilter_t193;
// UnityEngine.MeshRenderer
struct MeshRenderer_t194;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t196;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDrawCall
struct  UIDrawCall_t197  : public MonoBehaviour_t2
{
	// System.Int32 UIDrawCall::depthStart
	int32_t ___depthStart_5;
	// System.Int32 UIDrawCall::depthEnd
	int32_t ___depthEnd_6;
	// UIPanel UIDrawCall::manager
	UIPanel_t94 * ___manager_7;
	// UIPanel UIDrawCall::panel
	UIPanel_t94 * ___panel_8;
	// System.Boolean UIDrawCall::alwaysOnScreen
	bool ___alwaysOnScreen_9;
	// UnityEngine.Material UIDrawCall::mMaterial
	Material_t57 * ___mMaterial_10;
	// UnityEngine.Texture UIDrawCall::mTexture
	Texture_t190 * ___mTexture_11;
	// UnityEngine.Shader UIDrawCall::mShader
	Shader_t191 * ___mShader_12;
	// UIDrawCall/Clipping UIDrawCall::mClipping
	int32_t ___mClipping_13;
	// UnityEngine.Vector4 UIDrawCall::mClipRange
	Vector4_t198  ___mClipRange_14;
	// UnityEngine.Vector2 UIDrawCall::mClipSoft
	Vector2_t27  ___mClipSoft_15;
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t32 * ___mTrans_16;
	// UnityEngine.Mesh UIDrawCall::mMesh
	Mesh_t192 * ___mMesh_17;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t193 * ___mFilter_18;
	// UnityEngine.MeshRenderer UIDrawCall::mRenderer
	MeshRenderer_t194 * ___mRenderer_19;
	// UnityEngine.Material UIDrawCall::mDynamicMat
	Material_t57 * ___mDynamicMat_20;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t195* ___mIndices_21;
	// System.Boolean UIDrawCall::mRebuildMat
	bool ___mRebuildMat_22;
	// System.Boolean UIDrawCall::mDirty
	bool ___mDirty_23;
	// System.Boolean UIDrawCall::mReset
	bool ___mReset_24;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue_25;
	// UIDrawCall/Clipping UIDrawCall::mLastClip
	int32_t ___mLastClip_26;
	// System.Int32 UIDrawCall::mTriangles
	int32_t ___mTriangles_27;
};
struct UIDrawCall_t197_StaticFields{
	// BetterList`1<UIDrawCall> UIDrawCall::mActiveList
	BetterList_1_t189 * ___mActiveList_3;
	// BetterList`1<UIDrawCall> UIDrawCall::mInactiveList
	BetterList_1_t189 * ___mInactiveList_4;
	// System.Collections.Generic.List`1<System.Int32[]> UIDrawCall::mCache
	List_1_t196 * ___mCache_28;
};

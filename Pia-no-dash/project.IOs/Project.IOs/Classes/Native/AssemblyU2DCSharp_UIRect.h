#pragma once
#include <stdint.h>
// UIRect/AnchorPoint
struct AnchorPoint_t211;
// UnityEngine.GameObject
struct GameObject_t23;
// UnityEngine.Transform
struct Transform_t32;
// BetterList`1<UIRect>
struct BetterList_1_t212;
// UIRoot
struct UIRoot_t101;
// UIRect
struct UIRect_t108;
// UnityEngine.Camera
struct Camera_t113;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIRect
struct  UIRect_t108  : public MonoBehaviour_t2
{
	// UIRect/AnchorPoint UIRect::leftAnchor
	AnchorPoint_t211 * ___leftAnchor_2;
	// UIRect/AnchorPoint UIRect::rightAnchor
	AnchorPoint_t211 * ___rightAnchor_3;
	// UIRect/AnchorPoint UIRect::bottomAnchor
	AnchorPoint_t211 * ___bottomAnchor_4;
	// UIRect/AnchorPoint UIRect::topAnchor
	AnchorPoint_t211 * ___topAnchor_5;
	// UnityEngine.GameObject UIRect::mGo
	GameObject_t23 * ___mGo_6;
	// UnityEngine.Transform UIRect::mTrans
	Transform_t32 * ___mTrans_7;
	// BetterList`1<UIRect> UIRect::mChildren
	BetterList_1_t212 * ___mChildren_8;
	// System.Boolean UIRect::mChanged
	bool ___mChanged_9;
	// System.Single UIRect::mFinalAlpha
	float ___mFinalAlpha_10;
	// UIRoot UIRect::mRoot
	UIRoot_t101 * ___mRoot_11;
	// UIRect UIRect::mParent
	UIRect_t108 * ___mParent_12;
	// UnityEngine.Camera UIRect::mMyCam
	Camera_t113 * ___mMyCam_13;
	// System.Int32 UIRect::mUpdateFrame
	int32_t ___mUpdateFrame_14;
	// System.Boolean UIRect::mAnchorsCached
	bool ___mAnchorsCached_15;
	// System.Boolean UIRect::mParentFound
	bool ___mParentFound_16;
	// System.Boolean UIRect::mRootSet
	bool ___mRootSet_17;
};
struct UIRect_t108_StaticFields{
	// UnityEngine.Vector3[] UIRect::mSides
	Vector3U5BU5D_t11* ___mSides_18;
};

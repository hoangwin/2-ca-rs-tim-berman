#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Collider
struct Collider_t100;
// UIRoot
struct UIRoot_t101;
// UIGrid
struct UIGrid_t102;
// UITable
struct UITable_t103;
// UIDragScrollView
struct UIDragScrollView_t104;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDragDropItem/Restriction
#include "AssemblyU2DCSharp_UIDragDropItem_Restriction.h"
// UIDragDropItem
struct  UIDragDropItem_t105  : public MonoBehaviour_t2
{
	// UIDragDropItem/Restriction UIDragDropItem::restriction
	int32_t ___restriction_2;
	// UnityEngine.Transform UIDragDropItem::mTrans
	Transform_t32 * ___mTrans_3;
	// UnityEngine.Transform UIDragDropItem::mParent
	Transform_t32 * ___mParent_4;
	// UnityEngine.Collider UIDragDropItem::mCollider
	Collider_t100 * ___mCollider_5;
	// UIRoot UIDragDropItem::mRoot
	UIRoot_t101 * ___mRoot_6;
	// UIGrid UIDragDropItem::mGrid
	UIGrid_t102 * ___mGrid_7;
	// UITable UIDragDropItem::mTable
	UITable_t103 * ___mTable_8;
	// System.Int32 UIDragDropItem::mTouchID
	int32_t ___mTouchID_9;
	// System.Single UIDragDropItem::mPressTime
	float ___mPressTime_10;
	// UIDragScrollView UIDragDropItem::mDragScrollView
	UIDragScrollView_t104 * ___mDragScrollView_11;
};

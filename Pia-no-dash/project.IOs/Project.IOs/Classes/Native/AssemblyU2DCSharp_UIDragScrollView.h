#pragma once
#include <stdint.h>
// UIScrollView
struct UIScrollView_t92;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDragScrollView
struct  UIDragScrollView_t104  : public MonoBehaviour_t2
{
	// UIScrollView UIDragScrollView::scrollView
	UIScrollView_t92 * ___scrollView_2;
	// UIScrollView UIDragScrollView::draggablePanel
	UIScrollView_t92 * ___draggablePanel_3;
	// UnityEngine.Transform UIDragScrollView::mTrans
	Transform_t32 * ___mTrans_4;
	// UIScrollView UIDragScrollView::mScroll
	UIScrollView_t92 * ___mScroll_5;
	// System.Boolean UIDragScrollView::mAutoFind
	bool ___mAutoFind_6;
};

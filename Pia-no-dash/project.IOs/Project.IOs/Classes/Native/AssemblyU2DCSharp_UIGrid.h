#pragma once
#include <stdint.h>
// UIGrid/OnReposition
struct OnReposition_t116;
// UIPanel
struct UIPanel_t94;
// UIScrollView
struct UIScrollView_t92;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIGrid/Arrangement
#include "AssemblyU2DCSharp_UIGrid_Arrangement.h"
// UIGrid
struct  UIGrid_t102  : public UIWidgetContainer_t84
{
	// UIGrid/Arrangement UIGrid::arrangement
	int32_t ___arrangement_2;
	// System.Int32 UIGrid::maxPerLine
	int32_t ___maxPerLine_3;
	// System.Single UIGrid::cellWidth
	float ___cellWidth_4;
	// System.Single UIGrid::cellHeight
	float ___cellHeight_5;
	// System.Boolean UIGrid::animateSmoothly
	bool ___animateSmoothly_6;
	// System.Boolean UIGrid::sorted
	bool ___sorted_7;
	// System.Boolean UIGrid::hideInactive
	bool ___hideInactive_8;
	// UIGrid/OnReposition UIGrid::onReposition
	OnReposition_t116 * ___onReposition_9;
	// System.Boolean UIGrid::mStarted
	bool ___mStarted_10;
	// System.Boolean UIGrid::mReposition
	bool ___mReposition_11;
	// UIPanel UIGrid::mPanel
	UIPanel_t94 * ___mPanel_12;
	// UIScrollView UIGrid::mDrag
	UIScrollView_t92 * ___mDrag_13;
	// System.Boolean UIGrid::mInitDone
	bool ___mInitDone_14;
};

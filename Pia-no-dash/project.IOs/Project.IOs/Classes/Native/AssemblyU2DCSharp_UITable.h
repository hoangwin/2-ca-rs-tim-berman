#pragma once
#include <stdint.h>
// UITable/OnReposition
struct OnReposition_t150;
// UIPanel
struct UIPanel_t94;
// UIScrollView
struct UIScrollView_t92;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t151;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UITable/Direction
#include "AssemblyU2DCSharp_UITable_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UITable
struct  UITable_t103  : public UIWidgetContainer_t84
{
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// System.Boolean UITable::sorted
	bool ___sorted_4;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_5;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_6;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t27  ___padding_7;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t150 * ___onReposition_8;
	// UIPanel UITable::mPanel
	UIPanel_t94 * ___mPanel_9;
	// UIScrollView UITable::mDrag
	UIScrollView_t92 * ___mDrag_10;
	// System.Boolean UITable::mInitDone
	bool ___mInitDone_11;
	// System.Boolean UITable::mReposition
	bool ___mReposition_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::mChildren
	List_1_t151 * ___mChildren_13;
};

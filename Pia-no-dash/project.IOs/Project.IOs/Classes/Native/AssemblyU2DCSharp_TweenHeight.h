#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t83;
// UITable
struct UITable_t103;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenHeight
struct  TweenHeight_t224  : public UITweener_t221
{
	// System.Int32 TweenHeight::from
	int32_t ___from_19;
	// System.Int32 TweenHeight::to
	int32_t ___to_20;
	// System.Boolean TweenHeight::updateTable
	bool ___updateTable_21;
	// UIWidget TweenHeight::mWidget
	UIWidget_t83 * ___mWidget_22;
	// UITable TweenHeight::mTable
	UITable_t103 * ___mTable_23;
};

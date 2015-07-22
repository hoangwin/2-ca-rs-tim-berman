#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t162;
// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph>
struct Dictionary_2_t163;
// System.Object
#include "mscorlib_System_Object.h"
// BMFont
struct  BMFont_t164  : public Object_t
{
	// System.Int32 BMFont::mSize
	int32_t ___mSize_0;
	// System.Int32 BMFont::mBase
	int32_t ___mBase_1;
	// System.Int32 BMFont::mWidth
	int32_t ___mWidth_2;
	// System.Int32 BMFont::mHeight
	int32_t ___mHeight_3;
	// System.String BMFont::mSpriteName
	String_t* ___mSpriteName_4;
	// System.Collections.Generic.List`1<BMGlyph> BMFont::mSaved
	List_1_t162 * ___mSaved_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph> BMFont::mDict
	Dictionary_2_t163 * ___mDict_6;
};

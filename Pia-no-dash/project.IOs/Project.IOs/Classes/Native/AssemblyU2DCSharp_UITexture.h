#pragma once
#include <stdint.h>
// UnityEngine.Texture
struct Texture_t190;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Shader
struct Shader_t191;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UITexture
struct  UITexture_t289  : public UIWidget_t83
{
	// UnityEngine.Rect UITexture::mRect
	Rect_t31  ___mRect_40;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t190 * ___mTexture_41;
	// UnityEngine.Material UITexture::mMat
	Material_t57 * ___mMat_42;
	// UnityEngine.Shader UITexture::mShader
	Shader_t191 * ___mShader_43;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_44;
};

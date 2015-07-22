#pragma once
#include <stdint.h>
// TreePart[]
struct TreePartU5BU5D_t311;
// TreePart
struct TreePart_t312;
// Tree
struct Tree_t313;
// UnityEngine.Renderer
struct Renderer_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Tree
struct  Tree_t313  : public MonoBehaviour_t2
{
	// TreePart[] Tree::treePart
	TreePartU5BU5D_t311* ___treePart_2;
	// TreePart Tree::temp
	TreePart_t312 * ___temp_3;
	// System.Single Tree::offsetMove
	float ___offsetMove_5;
	// UnityEngine.Vector3 Tree::posFrom
	Vector3_t10  ___posFrom_6;
	// UnityEngine.Renderer Tree::templeRenderer
	Renderer_t49 * ___templeRenderer_7;
	// System.Single Tree::HEIGHT
	float ___HEIGHT_8;
};
struct Tree_t313_StaticFields{
	// Tree Tree::instance
	Tree_t313 * ___instance_4;
};

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Player
struct Player_t299;
// UnityEngine.Collision2D
struct Collision2D_t327;

// System.Void Player::.ctor()
extern "C" void Player__ctor_m1876 (Player_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m1877 (Player_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m1878 (Player_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m1879 (Player_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setAnimAttack(System.Boolean)
extern "C" void Player_setAnimAttack_m1880 (Player_t299 * __this, bool ___left, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setAnimIDE(System.Boolean)
extern "C" void Player_setAnimIDE_m1881 (Player_t299 * __this, bool ___left, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void Player_OnCollisionEnter2D_m1882 (Player_t299 * __this, Collision2D_t327 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;

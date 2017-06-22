#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallSpawner
struct  BallSpawner_t2612991105  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BallSpawner::spawnSprite
	GameObject_t1756533147 * ___spawnSprite_2;
	// System.Single BallSpawner::minPos
	float ___minPos_3;
	// System.Single BallSpawner::maxPos
	float ___maxPos_4;
	// System.Single BallSpawner::height
	float ___height_5;
	// System.Single BallSpawner::delayTimer
	float ___delayTimer_6;
	// System.Single BallSpawner::timer
	float ___timer_7;

public:
	inline static int32_t get_offset_of_spawnSprite_2() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___spawnSprite_2)); }
	inline GameObject_t1756533147 * get_spawnSprite_2() const { return ___spawnSprite_2; }
	inline GameObject_t1756533147 ** get_address_of_spawnSprite_2() { return &___spawnSprite_2; }
	inline void set_spawnSprite_2(GameObject_t1756533147 * value)
	{
		___spawnSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawnSprite_2, value);
	}

	inline static int32_t get_offset_of_minPos_3() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___minPos_3)); }
	inline float get_minPos_3() const { return ___minPos_3; }
	inline float* get_address_of_minPos_3() { return &___minPos_3; }
	inline void set_minPos_3(float value)
	{
		___minPos_3 = value;
	}

	inline static int32_t get_offset_of_maxPos_4() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___maxPos_4)); }
	inline float get_maxPos_4() const { return ___maxPos_4; }
	inline float* get_address_of_maxPos_4() { return &___maxPos_4; }
	inline void set_maxPos_4(float value)
	{
		___maxPos_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_delayTimer_6() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___delayTimer_6)); }
	inline float get_delayTimer_6() const { return ___delayTimer_6; }
	inline float* get_address_of_delayTimer_6() { return &___delayTimer_6; }
	inline void set_delayTimer_6(float value)
	{
		___delayTimer_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(BallSpawner_t2612991105, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

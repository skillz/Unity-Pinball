#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collect
struct  Collect_t626302910  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Collect::uiManager
	GameObject_t1756533147 * ___uiManager_2;
	// System.Int32 Collect::catcherScore
	int32_t ___catcherScore_3;
	// UnityEngine.GameObject Collect::otherBall
	GameObject_t1756533147 * ___otherBall_4;
	// UnityEngine.AudioSource Collect::soundLowValue
	AudioSource_t1135106623 * ___soundLowValue_5;
	// UnityEngine.AudioSource Collect::soundHighValue
	AudioSource_t1135106623 * ___soundHighValue_6;
	// UnityEngine.Vector4 Collect::ballColor
	Vector4_t2243707581  ___ballColor_7;

public:
	inline static int32_t get_offset_of_uiManager_2() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___uiManager_2)); }
	inline GameObject_t1756533147 * get_uiManager_2() const { return ___uiManager_2; }
	inline GameObject_t1756533147 ** get_address_of_uiManager_2() { return &___uiManager_2; }
	inline void set_uiManager_2(GameObject_t1756533147 * value)
	{
		___uiManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiManager_2, value);
	}

	inline static int32_t get_offset_of_catcherScore_3() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___catcherScore_3)); }
	inline int32_t get_catcherScore_3() const { return ___catcherScore_3; }
	inline int32_t* get_address_of_catcherScore_3() { return &___catcherScore_3; }
	inline void set_catcherScore_3(int32_t value)
	{
		___catcherScore_3 = value;
	}

	inline static int32_t get_offset_of_otherBall_4() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___otherBall_4)); }
	inline GameObject_t1756533147 * get_otherBall_4() const { return ___otherBall_4; }
	inline GameObject_t1756533147 ** get_address_of_otherBall_4() { return &___otherBall_4; }
	inline void set_otherBall_4(GameObject_t1756533147 * value)
	{
		___otherBall_4 = value;
		Il2CppCodeGenWriteBarrier(&___otherBall_4, value);
	}

	inline static int32_t get_offset_of_soundLowValue_5() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___soundLowValue_5)); }
	inline AudioSource_t1135106623 * get_soundLowValue_5() const { return ___soundLowValue_5; }
	inline AudioSource_t1135106623 ** get_address_of_soundLowValue_5() { return &___soundLowValue_5; }
	inline void set_soundLowValue_5(AudioSource_t1135106623 * value)
	{
		___soundLowValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundLowValue_5, value);
	}

	inline static int32_t get_offset_of_soundHighValue_6() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___soundHighValue_6)); }
	inline AudioSource_t1135106623 * get_soundHighValue_6() const { return ___soundHighValue_6; }
	inline AudioSource_t1135106623 ** get_address_of_soundHighValue_6() { return &___soundHighValue_6; }
	inline void set_soundHighValue_6(AudioSource_t1135106623 * value)
	{
		___soundHighValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundHighValue_6, value);
	}

	inline static int32_t get_offset_of_ballColor_7() { return static_cast<int32_t>(offsetof(Collect_t626302910, ___ballColor_7)); }
	inline Vector4_t2243707581  get_ballColor_7() const { return ___ballColor_7; }
	inline Vector4_t2243707581 * get_address_of_ballColor_7() { return &___ballColor_7; }
	inline void set_ballColor_7(Vector4_t2243707581  value)
	{
		___ballColor_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

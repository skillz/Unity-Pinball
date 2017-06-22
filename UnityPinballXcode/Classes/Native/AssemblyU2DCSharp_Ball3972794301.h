#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Ball::randomV
	float ___randomV_2;
	// System.Single Ball::randomH
	float ___randomH_3;
	// System.Single Ball::currentSpeed
	float ___currentSpeed_4;
	// System.Single Ball::maxSpeed
	float ___maxSpeed_5;
	// System.Int32 Ball::ballScore
	int32_t ___ballScore_6;
	// System.Single Ball::previousTime
	float ___previousTime_7;
	// System.Int32 Ball::hitNumber
	int32_t ___hitNumber_8;
	// System.Single[] Ball::hitTime
	SingleU5BU5D_t577127397* ___hitTime_9;
	// System.Boolean Ball::playCombo
	bool ___playCombo_10;
	// System.Single Ball::ballScoref
	float ___ballScoref_11;
	// System.Single Ball::colorChangeIndex
	float ___colorChangeIndex_12;
	// UnityEngine.Rigidbody2D Ball::rb
	Rigidbody2D_t502193897 * ___rb_13;
	// UnityEngine.SpriteRenderer Ball::sr
	SpriteRenderer_t1209076198 * ___sr_14;
	// UnityEngine.AudioSource Ball::hitSound
	AudioSource_t1135106623 * ___hitSound_15;
	// UnityEngine.AudioSource Ball::celebrate
	AudioSource_t1135106623 * ___celebrate_16;
	// System.Boolean Ball::isPlay
	bool ___isPlay_17;

public:
	inline static int32_t get_offset_of_randomV_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___randomV_2)); }
	inline float get_randomV_2() const { return ___randomV_2; }
	inline float* get_address_of_randomV_2() { return &___randomV_2; }
	inline void set_randomV_2(float value)
	{
		___randomV_2 = value;
	}

	inline static int32_t get_offset_of_randomH_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___randomH_3)); }
	inline float get_randomH_3() const { return ___randomH_3; }
	inline float* get_address_of_randomH_3() { return &___randomH_3; }
	inline void set_randomH_3(float value)
	{
		___randomH_3 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___currentSpeed_4)); }
	inline float get_currentSpeed_4() const { return ___currentSpeed_4; }
	inline float* get_address_of_currentSpeed_4() { return &___currentSpeed_4; }
	inline void set_currentSpeed_4(float value)
	{
		___currentSpeed_4 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___maxSpeed_5)); }
	inline float get_maxSpeed_5() const { return ___maxSpeed_5; }
	inline float* get_address_of_maxSpeed_5() { return &___maxSpeed_5; }
	inline void set_maxSpeed_5(float value)
	{
		___maxSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ballScore_6() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballScore_6)); }
	inline int32_t get_ballScore_6() const { return ___ballScore_6; }
	inline int32_t* get_address_of_ballScore_6() { return &___ballScore_6; }
	inline void set_ballScore_6(int32_t value)
	{
		___ballScore_6 = value;
	}

	inline static int32_t get_offset_of_previousTime_7() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___previousTime_7)); }
	inline float get_previousTime_7() const { return ___previousTime_7; }
	inline float* get_address_of_previousTime_7() { return &___previousTime_7; }
	inline void set_previousTime_7(float value)
	{
		___previousTime_7 = value;
	}

	inline static int32_t get_offset_of_hitNumber_8() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___hitNumber_8)); }
	inline int32_t get_hitNumber_8() const { return ___hitNumber_8; }
	inline int32_t* get_address_of_hitNumber_8() { return &___hitNumber_8; }
	inline void set_hitNumber_8(int32_t value)
	{
		___hitNumber_8 = value;
	}

	inline static int32_t get_offset_of_hitTime_9() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___hitTime_9)); }
	inline SingleU5BU5D_t577127397* get_hitTime_9() const { return ___hitTime_9; }
	inline SingleU5BU5D_t577127397** get_address_of_hitTime_9() { return &___hitTime_9; }
	inline void set_hitTime_9(SingleU5BU5D_t577127397* value)
	{
		___hitTime_9 = value;
		Il2CppCodeGenWriteBarrier(&___hitTime_9, value);
	}

	inline static int32_t get_offset_of_playCombo_10() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___playCombo_10)); }
	inline bool get_playCombo_10() const { return ___playCombo_10; }
	inline bool* get_address_of_playCombo_10() { return &___playCombo_10; }
	inline void set_playCombo_10(bool value)
	{
		___playCombo_10 = value;
	}

	inline static int32_t get_offset_of_ballScoref_11() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballScoref_11)); }
	inline float get_ballScoref_11() const { return ___ballScoref_11; }
	inline float* get_address_of_ballScoref_11() { return &___ballScoref_11; }
	inline void set_ballScoref_11(float value)
	{
		___ballScoref_11 = value;
	}

	inline static int32_t get_offset_of_colorChangeIndex_12() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___colorChangeIndex_12)); }
	inline float get_colorChangeIndex_12() const { return ___colorChangeIndex_12; }
	inline float* get_address_of_colorChangeIndex_12() { return &___colorChangeIndex_12; }
	inline void set_colorChangeIndex_12(float value)
	{
		___colorChangeIndex_12 = value;
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___rb_13)); }
	inline Rigidbody2D_t502193897 * get_rb_13() const { return ___rb_13; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody2D_t502193897 * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier(&___rb_13, value);
	}

	inline static int32_t get_offset_of_sr_14() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___sr_14)); }
	inline SpriteRenderer_t1209076198 * get_sr_14() const { return ___sr_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sr_14() { return &___sr_14; }
	inline void set_sr_14(SpriteRenderer_t1209076198 * value)
	{
		___sr_14 = value;
		Il2CppCodeGenWriteBarrier(&___sr_14, value);
	}

	inline static int32_t get_offset_of_hitSound_15() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___hitSound_15)); }
	inline AudioSource_t1135106623 * get_hitSound_15() const { return ___hitSound_15; }
	inline AudioSource_t1135106623 ** get_address_of_hitSound_15() { return &___hitSound_15; }
	inline void set_hitSound_15(AudioSource_t1135106623 * value)
	{
		___hitSound_15 = value;
		Il2CppCodeGenWriteBarrier(&___hitSound_15, value);
	}

	inline static int32_t get_offset_of_celebrate_16() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___celebrate_16)); }
	inline AudioSource_t1135106623 * get_celebrate_16() const { return ___celebrate_16; }
	inline AudioSource_t1135106623 ** get_address_of_celebrate_16() { return &___celebrate_16; }
	inline void set_celebrate_16(AudioSource_t1135106623 * value)
	{
		___celebrate_16 = value;
		Il2CppCodeGenWriteBarrier(&___celebrate_16, value);
	}

	inline static int32_t get_offset_of_isPlay_17() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___isPlay_17)); }
	inline bool get_isPlay_17() const { return ___isPlay_17; }
	inline bool* get_address_of_isPlay_17() { return &___isPlay_17; }
	inline void set_isPlay_17(bool value)
	{
		___isPlay_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

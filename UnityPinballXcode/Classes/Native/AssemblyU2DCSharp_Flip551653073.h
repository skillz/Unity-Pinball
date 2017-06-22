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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flip
struct  Flip_t551653073  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Flip::torqueForce
	float ___torqueForce_2;
	// System.Single Flip::tiltAngle
	float ___tiltAngle_3;
	// UnityEngine.GameObject Flip::leftFlipper
	GameObject_t1756533147 * ___leftFlipper_4;
	// UnityEngine.GameObject Flip::rightFlipper
	GameObject_t1756533147 * ___rightFlipper_5;
	// UnityEngine.Rigidbody2D Flip::rbLeftFlipper
	Rigidbody2D_t502193897 * ___rbLeftFlipper_6;
	// UnityEngine.Rigidbody2D Flip::rbRightFlipper
	Rigidbody2D_t502193897 * ___rbRightFlipper_7;
	// System.Boolean Flip::currentPlatformAndroidOrIOS
	bool ___currentPlatformAndroidOrIOS_8;
	// UnityEngine.AudioSource Flip::flipSound
	AudioSource_t1135106623 * ___flipSound_9;

public:
	inline static int32_t get_offset_of_torqueForce_2() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___torqueForce_2)); }
	inline float get_torqueForce_2() const { return ___torqueForce_2; }
	inline float* get_address_of_torqueForce_2() { return &___torqueForce_2; }
	inline void set_torqueForce_2(float value)
	{
		___torqueForce_2 = value;
	}

	inline static int32_t get_offset_of_tiltAngle_3() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___tiltAngle_3)); }
	inline float get_tiltAngle_3() const { return ___tiltAngle_3; }
	inline float* get_address_of_tiltAngle_3() { return &___tiltAngle_3; }
	inline void set_tiltAngle_3(float value)
	{
		___tiltAngle_3 = value;
	}

	inline static int32_t get_offset_of_leftFlipper_4() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___leftFlipper_4)); }
	inline GameObject_t1756533147 * get_leftFlipper_4() const { return ___leftFlipper_4; }
	inline GameObject_t1756533147 ** get_address_of_leftFlipper_4() { return &___leftFlipper_4; }
	inline void set_leftFlipper_4(GameObject_t1756533147 * value)
	{
		___leftFlipper_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftFlipper_4, value);
	}

	inline static int32_t get_offset_of_rightFlipper_5() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___rightFlipper_5)); }
	inline GameObject_t1756533147 * get_rightFlipper_5() const { return ___rightFlipper_5; }
	inline GameObject_t1756533147 ** get_address_of_rightFlipper_5() { return &___rightFlipper_5; }
	inline void set_rightFlipper_5(GameObject_t1756533147 * value)
	{
		___rightFlipper_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightFlipper_5, value);
	}

	inline static int32_t get_offset_of_rbLeftFlipper_6() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___rbLeftFlipper_6)); }
	inline Rigidbody2D_t502193897 * get_rbLeftFlipper_6() const { return ___rbLeftFlipper_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbLeftFlipper_6() { return &___rbLeftFlipper_6; }
	inline void set_rbLeftFlipper_6(Rigidbody2D_t502193897 * value)
	{
		___rbLeftFlipper_6 = value;
		Il2CppCodeGenWriteBarrier(&___rbLeftFlipper_6, value);
	}

	inline static int32_t get_offset_of_rbRightFlipper_7() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___rbRightFlipper_7)); }
	inline Rigidbody2D_t502193897 * get_rbRightFlipper_7() const { return ___rbRightFlipper_7; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbRightFlipper_7() { return &___rbRightFlipper_7; }
	inline void set_rbRightFlipper_7(Rigidbody2D_t502193897 * value)
	{
		___rbRightFlipper_7 = value;
		Il2CppCodeGenWriteBarrier(&___rbRightFlipper_7, value);
	}

	inline static int32_t get_offset_of_currentPlatformAndroidOrIOS_8() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___currentPlatformAndroidOrIOS_8)); }
	inline bool get_currentPlatformAndroidOrIOS_8() const { return ___currentPlatformAndroidOrIOS_8; }
	inline bool* get_address_of_currentPlatformAndroidOrIOS_8() { return &___currentPlatformAndroidOrIOS_8; }
	inline void set_currentPlatformAndroidOrIOS_8(bool value)
	{
		___currentPlatformAndroidOrIOS_8 = value;
	}

	inline static int32_t get_offset_of_flipSound_9() { return static_cast<int32_t>(offsetof(Flip_t551653073, ___flipSound_9)); }
	inline AudioSource_t1135106623 * get_flipSound_9() const { return ___flipSound_9; }
	inline AudioSource_t1135106623 ** get_address_of_flipSound_9() { return &___flipSound_9; }
	inline void set_flipSound_9(AudioSource_t1135106623 * value)
	{
		___flipSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___flipSound_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

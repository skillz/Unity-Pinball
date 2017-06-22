#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CatcherMove
struct  CatcherMove_t602726185  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CatcherMove::catcherSpeedIndex
	float ___catcherSpeedIndex_2;
	// System.Single CatcherMove::minPos
	float ___minPos_3;
	// System.Single CatcherMove::maxPos
	float ___maxPos_4;
	// System.Single CatcherMove::catcherSpeedAndroid
	float ___catcherSpeedAndroid_5;
	// System.Single CatcherMove::catcherSpeedPc
	float ___catcherSpeedPc_6;
	// System.Single CatcherMove::catcherSpeedAndroidFast
	float ___catcherSpeedAndroidFast_7;
	// UnityEngine.Vector3 CatcherMove::position
	Vector3_t2243707580  ___position_8;
	// System.Boolean CatcherMove::currentPlatformAndroidOrIOS
	bool ___currentPlatformAndroidOrIOS_9;
	// UnityEngine.Rigidbody2D CatcherMove::rb
	Rigidbody2D_t502193897 * ___rb_10;

public:
	inline static int32_t get_offset_of_catcherSpeedIndex_2() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___catcherSpeedIndex_2)); }
	inline float get_catcherSpeedIndex_2() const { return ___catcherSpeedIndex_2; }
	inline float* get_address_of_catcherSpeedIndex_2() { return &___catcherSpeedIndex_2; }
	inline void set_catcherSpeedIndex_2(float value)
	{
		___catcherSpeedIndex_2 = value;
	}

	inline static int32_t get_offset_of_minPos_3() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___minPos_3)); }
	inline float get_minPos_3() const { return ___minPos_3; }
	inline float* get_address_of_minPos_3() { return &___minPos_3; }
	inline void set_minPos_3(float value)
	{
		___minPos_3 = value;
	}

	inline static int32_t get_offset_of_maxPos_4() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___maxPos_4)); }
	inline float get_maxPos_4() const { return ___maxPos_4; }
	inline float* get_address_of_maxPos_4() { return &___maxPos_4; }
	inline void set_maxPos_4(float value)
	{
		___maxPos_4 = value;
	}

	inline static int32_t get_offset_of_catcherSpeedAndroid_5() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___catcherSpeedAndroid_5)); }
	inline float get_catcherSpeedAndroid_5() const { return ___catcherSpeedAndroid_5; }
	inline float* get_address_of_catcherSpeedAndroid_5() { return &___catcherSpeedAndroid_5; }
	inline void set_catcherSpeedAndroid_5(float value)
	{
		___catcherSpeedAndroid_5 = value;
	}

	inline static int32_t get_offset_of_catcherSpeedPc_6() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___catcherSpeedPc_6)); }
	inline float get_catcherSpeedPc_6() const { return ___catcherSpeedPc_6; }
	inline float* get_address_of_catcherSpeedPc_6() { return &___catcherSpeedPc_6; }
	inline void set_catcherSpeedPc_6(float value)
	{
		___catcherSpeedPc_6 = value;
	}

	inline static int32_t get_offset_of_catcherSpeedAndroidFast_7() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___catcherSpeedAndroidFast_7)); }
	inline float get_catcherSpeedAndroidFast_7() const { return ___catcherSpeedAndroidFast_7; }
	inline float* get_address_of_catcherSpeedAndroidFast_7() { return &___catcherSpeedAndroidFast_7; }
	inline void set_catcherSpeedAndroidFast_7(float value)
	{
		___catcherSpeedAndroidFast_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___position_8)); }
	inline Vector3_t2243707580  get_position_8() const { return ___position_8; }
	inline Vector3_t2243707580 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector3_t2243707580  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_currentPlatformAndroidOrIOS_9() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___currentPlatformAndroidOrIOS_9)); }
	inline bool get_currentPlatformAndroidOrIOS_9() const { return ___currentPlatformAndroidOrIOS_9; }
	inline bool* get_address_of_currentPlatformAndroidOrIOS_9() { return &___currentPlatformAndroidOrIOS_9; }
	inline void set_currentPlatformAndroidOrIOS_9(bool value)
	{
		___currentPlatformAndroidOrIOS_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(CatcherMove_t602726185, ___rb_10)); }
	inline Rigidbody2D_t502193897 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_t502193897 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rb_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

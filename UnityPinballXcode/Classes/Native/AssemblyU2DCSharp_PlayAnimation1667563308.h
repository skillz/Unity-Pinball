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
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayAnimation
struct  PlayAnimation_t1667563308  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayAnimation::buttonBouncy
	GameObject_t1756533147 * ___buttonBouncy_2;
	// UnityEngine.GameObject PlayAnimation::combo
	GameObject_t1756533147 * ___combo_3;
	// System.Boolean PlayAnimation::hitBall
	bool ___hitBall_4;
	// System.Int32 PlayAnimation::timer
	int32_t ___timer_5;
	// System.Single PlayAnimation::previousTime
	float ___previousTime_6;
	// System.Boolean PlayAnimation::playcombo
	bool ___playcombo_7;
	// UnityEngine.GameObject PlayAnimation::uiManager
	GameObject_t1756533147 * ___uiManager_8;
	// UnityEngine.Animator PlayAnimation::buttonAnimator
	Animator_t69676727 * ___buttonAnimator_9;

public:
	inline static int32_t get_offset_of_buttonBouncy_2() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___buttonBouncy_2)); }
	inline GameObject_t1756533147 * get_buttonBouncy_2() const { return ___buttonBouncy_2; }
	inline GameObject_t1756533147 ** get_address_of_buttonBouncy_2() { return &___buttonBouncy_2; }
	inline void set_buttonBouncy_2(GameObject_t1756533147 * value)
	{
		___buttonBouncy_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonBouncy_2, value);
	}

	inline static int32_t get_offset_of_combo_3() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___combo_3)); }
	inline GameObject_t1756533147 * get_combo_3() const { return ___combo_3; }
	inline GameObject_t1756533147 ** get_address_of_combo_3() { return &___combo_3; }
	inline void set_combo_3(GameObject_t1756533147 * value)
	{
		___combo_3 = value;
		Il2CppCodeGenWriteBarrier(&___combo_3, value);
	}

	inline static int32_t get_offset_of_hitBall_4() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___hitBall_4)); }
	inline bool get_hitBall_4() const { return ___hitBall_4; }
	inline bool* get_address_of_hitBall_4() { return &___hitBall_4; }
	inline void set_hitBall_4(bool value)
	{
		___hitBall_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___timer_5)); }
	inline int32_t get_timer_5() const { return ___timer_5; }
	inline int32_t* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(int32_t value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_previousTime_6() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___previousTime_6)); }
	inline float get_previousTime_6() const { return ___previousTime_6; }
	inline float* get_address_of_previousTime_6() { return &___previousTime_6; }
	inline void set_previousTime_6(float value)
	{
		___previousTime_6 = value;
	}

	inline static int32_t get_offset_of_playcombo_7() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___playcombo_7)); }
	inline bool get_playcombo_7() const { return ___playcombo_7; }
	inline bool* get_address_of_playcombo_7() { return &___playcombo_7; }
	inline void set_playcombo_7(bool value)
	{
		___playcombo_7 = value;
	}

	inline static int32_t get_offset_of_uiManager_8() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___uiManager_8)); }
	inline GameObject_t1756533147 * get_uiManager_8() const { return ___uiManager_8; }
	inline GameObject_t1756533147 ** get_address_of_uiManager_8() { return &___uiManager_8; }
	inline void set_uiManager_8(GameObject_t1756533147 * value)
	{
		___uiManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___uiManager_8, value);
	}

	inline static int32_t get_offset_of_buttonAnimator_9() { return static_cast<int32_t>(offsetof(PlayAnimation_t1667563308, ___buttonAnimator_9)); }
	inline Animator_t69676727 * get_buttonAnimator_9() const { return ___buttonAnimator_9; }
	inline Animator_t69676727 ** get_address_of_buttonAnimator_9() { return &___buttonAnimator_9; }
	inline void set_buttonAnimator_9(Animator_t69676727 * value)
	{
		___buttonAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___buttonAnimator_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

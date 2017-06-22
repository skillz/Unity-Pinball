#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SceneManagement.Scene UIManager::currentScene
	Scene_t1684909666  ___currentScene_2;
	// UnityEngine.UI.Text UIManager::scoreText
	Text_t356221433 * ___scoreText_3;
	// UnityEngine.UI.Text UIManager::timeLeftText
	Text_t356221433 * ___timeLeftText_4;
	// UnityEngine.UI.Text UIManager::highScoreText
	Text_t356221433 * ___highScoreText_5;
	// UnityEngine.UI.Text UIManager::gameOverScoreText
	Text_t356221433 * ___gameOverScoreText_6;
	// UnityEngine.UI.Text UIManager::gameOverComboText
	Text_t356221433 * ___gameOverComboText_7;
	// UnityEngine.GameObject UIManager::catchText
	GameObject_t1756533147 * ___catchText_8;
	// UnityEngine.UI.Button[] UIManager::buttons
	ButtonU5BU5D_t3071100561* ___buttons_9;
	// System.Int32 UIManager::uiScore
	int32_t ___uiScore_10;
	// System.Int32 UIManager::combos
	int32_t ___combos_11;
	// System.Single UIManager::previousTime
	float ___previousTime_12;
	// System.Boolean UIManager::catchTextActive
	bool ___catchTextActive_13;
	// UnityEngine.GameObject UIManager::collector
	GameObject_t1756533147 * ___collector_14;
	// UnityEngine.GameObject UIManager::bumpers
	GameObject_t1756533147 * ___bumpers_15;
	// System.Int32 UIManager::timeLeft
	int32_t ___timeLeft_16;
	// System.Boolean UIManager::gameOver
	bool ___gameOver_17;
	// UnityEngine.Vector4 UIManager::ballColor
	Vector4_t2243707581  ___ballColor_18;

public:
	inline static int32_t get_offset_of_currentScene_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___currentScene_2)); }
	inline Scene_t1684909666  get_currentScene_2() const { return ___currentScene_2; }
	inline Scene_t1684909666 * get_address_of_currentScene_2() { return &___currentScene_2; }
	inline void set_currentScene_2(Scene_t1684909666  value)
	{
		___currentScene_2 = value;
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___scoreText_3)); }
	inline Text_t356221433 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t356221433 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t356221433 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}

	inline static int32_t get_offset_of_timeLeftText_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___timeLeftText_4)); }
	inline Text_t356221433 * get_timeLeftText_4() const { return ___timeLeftText_4; }
	inline Text_t356221433 ** get_address_of_timeLeftText_4() { return &___timeLeftText_4; }
	inline void set_timeLeftText_4(Text_t356221433 * value)
	{
		___timeLeftText_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeLeftText_4, value);
	}

	inline static int32_t get_offset_of_highScoreText_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___highScoreText_5)); }
	inline Text_t356221433 * get_highScoreText_5() const { return ___highScoreText_5; }
	inline Text_t356221433 ** get_address_of_highScoreText_5() { return &___highScoreText_5; }
	inline void set_highScoreText_5(Text_t356221433 * value)
	{
		___highScoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_5, value);
	}

	inline static int32_t get_offset_of_gameOverScoreText_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___gameOverScoreText_6)); }
	inline Text_t356221433 * get_gameOverScoreText_6() const { return ___gameOverScoreText_6; }
	inline Text_t356221433 ** get_address_of_gameOverScoreText_6() { return &___gameOverScoreText_6; }
	inline void set_gameOverScoreText_6(Text_t356221433 * value)
	{
		___gameOverScoreText_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScoreText_6, value);
	}

	inline static int32_t get_offset_of_gameOverComboText_7() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___gameOverComboText_7)); }
	inline Text_t356221433 * get_gameOverComboText_7() const { return ___gameOverComboText_7; }
	inline Text_t356221433 ** get_address_of_gameOverComboText_7() { return &___gameOverComboText_7; }
	inline void set_gameOverComboText_7(Text_t356221433 * value)
	{
		___gameOverComboText_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverComboText_7, value);
	}

	inline static int32_t get_offset_of_catchText_8() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___catchText_8)); }
	inline GameObject_t1756533147 * get_catchText_8() const { return ___catchText_8; }
	inline GameObject_t1756533147 ** get_address_of_catchText_8() { return &___catchText_8; }
	inline void set_catchText_8(GameObject_t1756533147 * value)
	{
		___catchText_8 = value;
		Il2CppCodeGenWriteBarrier(&___catchText_8, value);
	}

	inline static int32_t get_offset_of_buttons_9() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___buttons_9)); }
	inline ButtonU5BU5D_t3071100561* get_buttons_9() const { return ___buttons_9; }
	inline ButtonU5BU5D_t3071100561** get_address_of_buttons_9() { return &___buttons_9; }
	inline void set_buttons_9(ButtonU5BU5D_t3071100561* value)
	{
		___buttons_9 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_9, value);
	}

	inline static int32_t get_offset_of_uiScore_10() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___uiScore_10)); }
	inline int32_t get_uiScore_10() const { return ___uiScore_10; }
	inline int32_t* get_address_of_uiScore_10() { return &___uiScore_10; }
	inline void set_uiScore_10(int32_t value)
	{
		___uiScore_10 = value;
	}

	inline static int32_t get_offset_of_combos_11() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___combos_11)); }
	inline int32_t get_combos_11() const { return ___combos_11; }
	inline int32_t* get_address_of_combos_11() { return &___combos_11; }
	inline void set_combos_11(int32_t value)
	{
		___combos_11 = value;
	}

	inline static int32_t get_offset_of_previousTime_12() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___previousTime_12)); }
	inline float get_previousTime_12() const { return ___previousTime_12; }
	inline float* get_address_of_previousTime_12() { return &___previousTime_12; }
	inline void set_previousTime_12(float value)
	{
		___previousTime_12 = value;
	}

	inline static int32_t get_offset_of_catchTextActive_13() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___catchTextActive_13)); }
	inline bool get_catchTextActive_13() const { return ___catchTextActive_13; }
	inline bool* get_address_of_catchTextActive_13() { return &___catchTextActive_13; }
	inline void set_catchTextActive_13(bool value)
	{
		___catchTextActive_13 = value;
	}

	inline static int32_t get_offset_of_collector_14() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___collector_14)); }
	inline GameObject_t1756533147 * get_collector_14() const { return ___collector_14; }
	inline GameObject_t1756533147 ** get_address_of_collector_14() { return &___collector_14; }
	inline void set_collector_14(GameObject_t1756533147 * value)
	{
		___collector_14 = value;
		Il2CppCodeGenWriteBarrier(&___collector_14, value);
	}

	inline static int32_t get_offset_of_bumpers_15() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___bumpers_15)); }
	inline GameObject_t1756533147 * get_bumpers_15() const { return ___bumpers_15; }
	inline GameObject_t1756533147 ** get_address_of_bumpers_15() { return &___bumpers_15; }
	inline void set_bumpers_15(GameObject_t1756533147 * value)
	{
		___bumpers_15 = value;
		Il2CppCodeGenWriteBarrier(&___bumpers_15, value);
	}

	inline static int32_t get_offset_of_timeLeft_16() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___timeLeft_16)); }
	inline int32_t get_timeLeft_16() const { return ___timeLeft_16; }
	inline int32_t* get_address_of_timeLeft_16() { return &___timeLeft_16; }
	inline void set_timeLeft_16(int32_t value)
	{
		___timeLeft_16 = value;
	}

	inline static int32_t get_offset_of_gameOver_17() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___gameOver_17)); }
	inline bool get_gameOver_17() const { return ___gameOver_17; }
	inline bool* get_address_of_gameOver_17() { return &___gameOver_17; }
	inline void set_gameOver_17(bool value)
	{
		___gameOver_17 = value;
	}

	inline static int32_t get_offset_of_ballColor_18() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___ballColor_18)); }
	inline Vector4_t2243707581  get_ballColor_18() const { return ___ballColor_18; }
	inline Vector4_t2243707581 * get_address_of_ballColor_18() { return &___ballColor_18; }
	inline void set_ballColor_18(Vector4_t2243707581  value)
	{
		___ballColor_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

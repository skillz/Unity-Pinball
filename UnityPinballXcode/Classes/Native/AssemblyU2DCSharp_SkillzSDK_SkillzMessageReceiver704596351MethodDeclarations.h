#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SkillzSDK.SkillzMessageReceiver
struct SkillzMessageReceiver_t704596351;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SkillzSDK.SkillzMessageReceiver::.ctor()
extern "C"  void SkillzMessageReceiver__ctor_m32323055 (SkillzMessageReceiver_t704596351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::Start()
extern "C"  void SkillzMessageReceiver_Start_m444170563 (SkillzMessageReceiver_t704596351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillExit(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillExit_m1996417448 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzLaunchHasCompleted(System.String)
extern "C"  void SkillzMessageReceiver_skillzLaunchHasCompleted_m4043686882 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWillLaunch(System.String)
extern "C"  void SkillzMessageReceiver_skillzWillLaunch_m3708175761 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWithPlayerAbort(System.String)
extern "C"  void SkillzMessageReceiver_skillzWithPlayerAbort_m3422383777 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzTournamentWillBegin(System.String)
extern "C"  void SkillzMessageReceiver_skillzTournamentWillBegin_m880525694 (SkillzMessageReceiver_t704596351 * __this, String_t* ___matchInfoJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzWithTournamentCompletion(System.String)
extern "C"  void SkillzMessageReceiver_skillzWithTournamentCompletion_m3596276245 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzTurnBasedTournamentWillBegin(System.String)
extern "C"  void SkillzMessageReceiver_skillzTurnBasedTournamentWillBegin_m487850274 (SkillzMessageReceiver_t704596351 * __this, String_t* ___turnBasedMatchInfoJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzEndTurnCompletion(System.String)
extern "C"  void SkillzMessageReceiver_skillzEndTurnCompletion_m255955450 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzReviewCurrentGameState(System.String)
extern "C"  void SkillzMessageReceiver_skillzReviewCurrentGameState_m804480104 (SkillzMessageReceiver_t704596351 * __this, String_t* ___turnBasedMatchInfoJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.SkillzMessageReceiver::skillzFinishReviewingCurrentGameState(System.String)
extern "C"  void SkillzMessageReceiver_skillzFinishReviewingCurrentGameState_m3210794511 (SkillzMessageReceiver_t704596351 * __this, String_t* ___ignoreMe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.SkillzMessageReceiver::DeserializeJSONToDictionary(System.String)
extern "C"  Dictionary_2_t309261261 * SkillzMessageReceiver_DeserializeJSONToDictionary_m1247739097 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// SkillzSDK.MiniJSON.Json/Parser
struct Parser_t3266458908;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SkillzSDK_MiniJSON_Json_Parser_T1424013098.h"

// System.Void SkillzSDK.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m897584229 (Parser_t3266458908 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillzSDK.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m2801860987 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m98597109 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m1738081594 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m684850555 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> SkillzSDK.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m984063102 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m1217752088 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseByToken(SkillzSDK.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m1688964903 (Parser_t3266458908 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m230702478 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SkillzSDK.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m3167748544 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillzSDK.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1306623468 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m733714761 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char SkillzSDK.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m217506309 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillzSDK.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m342293950 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillzSDK.MiniJSON.Json/Parser/TOKEN SkillzSDK.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m2257240601 (Parser_t3266458908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

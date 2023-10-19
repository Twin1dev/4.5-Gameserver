#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C
// (None)

class UClass* UResults_TeleportPadPlayerTop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_TeleportPadPlayerTop_C");

	return Clss;
}


// Results_TeleportPadPlayerTop_C Results_TeleportPadPlayerTop.Default__Results_TeleportPadPlayerTop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_TeleportPadPlayerTop_C* UResults_TeleportPadPlayerTop_C::GetDefaultObj()
{
	static class UResults_TeleportPadPlayerTop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_TeleportPadPlayerTop_C*>(UResults_TeleportPadPlayerTop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::Play_Anim_Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Play Anim Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScoreReportIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerPlatform_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               (None)

void UResults_TeleportPadPlayerTop_C::Initialize(const struct FUniqueNetIdRepl& UniqueNetId, class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetPlayerPlatform_ReturnValue, class FText CallFunc_GetPlayerName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Initialize");

	Params::UResults_TeleportPadPlayerTop_C_Initialize_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.ScoreReport = ScoreReport;
	Parms.ScoreReportIndex = ScoreReportIndex;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlayerPlatform_ReturnValue = CallFunc_GetPlayerPlatform_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::IntroName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "IntroName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayerTop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "PreConstruct");

	Params::UResults_TeleportPadPlayerTop_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeleportPadPlayerTop_C::Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UResults_TeleportPadPlayerTop_C::ExecuteUbergraph_Results_TeleportPadPlayerTop(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeleportPadPlayerTop_C", "ExecuteUbergraph_Results_TeleportPadPlayerTop");

	Params::UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C
// (None)

class UClass* UAthenaReplayBrowserMatchStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReplayBrowserMatchStats_C");

	return Clss;
}


// AthenaReplayBrowserMatchStats_C AthenaReplayBrowserMatchStats.Default__AthenaReplayBrowserMatchStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReplayBrowserMatchStats_C* UAthenaReplayBrowserMatchStats_C::GetDefaultObj()
{
	static class UAthenaReplayBrowserMatchStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReplayBrowserMatchStats_C*>(UAthenaReplayBrowserMatchStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Clear
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserMatchStats_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayBrowserMatchStats_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue4                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue5                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue6                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue7                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue8                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue9                             (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue10                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue11                            (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue2                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue2                          (None)

void UAthenaReplayBrowserMatchStats_C::Refresh(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue4, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue5, class FText CallFunc_Conv_IntToText_ReturnValue6, class FText CallFunc_Conv_IntToText_ReturnValue7, class FText CallFunc_Conv_IntToText_ReturnValue8, class FText CallFunc_Conv_IntToText_ReturnValue9, const class FString& CallFunc_Conv_IntToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue10, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue11, const class FString& CallFunc_Conv_IntToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, class FText CallFunc_Conv_StringToText_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayBrowserMatchStats_C", "Refresh");

	Params::UAthenaReplayBrowserMatchStats_C_Refresh_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue4 = CallFunc_Conv_IntToText_ReturnValue4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue5 = CallFunc_Conv_IntToText_ReturnValue5;
	Parms.CallFunc_Conv_IntToText_ReturnValue6 = CallFunc_Conv_IntToText_ReturnValue6;
	Parms.CallFunc_Conv_IntToText_ReturnValue7 = CallFunc_Conv_IntToText_ReturnValue7;
	Parms.CallFunc_Conv_IntToText_ReturnValue8 = CallFunc_Conv_IntToText_ReturnValue8;
	Parms.CallFunc_Conv_IntToText_ReturnValue9 = CallFunc_Conv_IntToText_ReturnValue9;
	Parms.CallFunc_Conv_IntToString_ReturnValue1 = CallFunc_Conv_IntToString_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue10 = CallFunc_Conv_IntToText_ReturnValue10;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue11 = CallFunc_Conv_IntToText_ReturnValue11;
	Parms.CallFunc_Conv_IntToString_ReturnValue2 = CallFunc_Conv_IntToString_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Conv_StringToText_ReturnValue2 = CallFunc_Conv_StringToText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserMatchStats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayBrowserMatchStats_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.SetReplayInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaReplayBrowserRowProxyInstance*ReplayInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserMatchStats_C::SetReplayInfo(class UAthenaReplayBrowserRowProxyInstance* ReplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayBrowserMatchStats_C", "SetReplayInfo");

	Params::UAthenaReplayBrowserMatchStats_C_SetReplayInfo_Params Parms{};

	Parms.ReplayInfo = ReplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.ExecuteUbergraph_AthenaReplayBrowserMatchStats
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaReplayBrowserRowProxyInstance*K2Node_CustomEvent_ReplayInfo                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserMatchStats_C::ExecuteUbergraph_AthenaReplayBrowserMatchStats(int32 EntryPoint, class UAthenaReplayBrowserRowProxyInstance* K2Node_CustomEvent_ReplayInfo, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayBrowserMatchStats_C", "ExecuteUbergraph_AthenaReplayBrowserMatchStats");

	Params::UAthenaReplayBrowserMatchStats_C_ExecuteUbergraph_AthenaReplayBrowserMatchStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ReplayInfo = K2Node_CustomEvent_ReplayInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



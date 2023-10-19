#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
// (None)

class UClass* UAthenaTeamMemberIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTeamMemberIndicator_C");

	return Clss;
}


// AthenaTeamMemberIndicator_C AthenaTeamMemberIndicator.Default__AthenaTeamMemberIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTeamMemberIndicator_C* UAthenaTeamMemberIndicator_C::GetDefaultObj()
{
	static class UAthenaTeamMemberIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTeamMemberIndicator_C*>(UAthenaTeamMemberIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDBNO                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::DBNOStateChanged(bool bDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "DBNOStateChanged");

	Params::UAthenaTeamMemberIndicator_C_DBNOStateChanged_Params Parms{};

	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::TalkingStateChanged(bool bTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "TalkingStateChanged");

	Params::UAthenaTeamMemberIndicator_C_TalkingStateChanged_Params Parms{};

	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bReviving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::BeingRevivedStateChanged(bool bReviving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "BeingRevivedStateChanged");

	Params::UAthenaTeamMemberIndicator_C_BeingRevivedStateChanged_Params Parms{};

	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::PlayerNameChanged(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "PlayerNameChanged");

	Params::UAthenaTeamMemberIndicator_C_PlayerNameChanged_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_Event_bDBNO                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReviving                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bDBNO, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, bool K2Node_Event_bReviving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "ExecuteUbergraph_AthenaTeamMemberIndicator");

	Params::UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_bDBNO = K2Node_Event_bDBNO;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_Event_bReviving = K2Node_Event_bReviving;

	UObject::ProcessEvent(Func, &Parms);

}

}



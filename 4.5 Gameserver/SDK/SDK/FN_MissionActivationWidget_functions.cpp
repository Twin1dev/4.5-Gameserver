#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionActivationWidget.MissionActivationWidget_C
// (None)

class UClass* UMissionActivationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionActivationWidget_C");

	return Clss;
}


// MissionActivationWidget_C MissionActivationWidget.Default__MissionActivationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionActivationWidget_C* UMissionActivationWidget_C::GetDefaultObj()
{
	static class UMissionActivationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionActivationWidget_C*>(UMissionActivationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleIncreaseDifficultyLockoutFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::HandleIncreaseDifficultyLockoutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleIncreaseDifficultyLockoutFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivationLockoutFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::HandleMissionActivationLockoutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleMissionActivationLockoutFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::HandleAnimFinished(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleAnimFinished");

	Params::UMissionActivationWidget_C_HandleAnimFinished_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLockedOut                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdateButton");

	Params::UMissionActivationWidget_C_UpdateButton_Params Parms{};

	Parms.Button = Button;
	Parms.bEnabled = bEnabled;
	Parms.bLockedOut = bLockedOut;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateLockoutTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LocalLockoutTimeRemaining                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          FortGameState                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeRemainingToEndFailedVoteLockout_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// bool                               CallFunc_IsGameplayVoteLocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdateLockoutTimeRemaining(float LocalLockoutTimeRemaining, class AFortGameStateZone* FortGameState, float CallFunc_GetTimeRemainingToEndFailedVoteLockout_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_IsGameplayVoteLocked_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdateLockoutTimeRemaining");

	Params::UMissionActivationWidget_C_UpdateLockoutTimeRemaining_Params Parms{};

	Parms.LocalLockoutTimeRemaining = LocalLockoutTimeRemaining;
	Parms.FortGameState = FortGameState;
	Parms.CallFunc_GetTimeRemainingToEndFailedVoteLockout_ReturnValue = CallFunc_GetTimeRemainingToEndFailedVoteLockout_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_IsGameplayVoteLocked_ReturnValue = CallFunc_IsGameplayVoteLocked_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMissionActivationWidgetStateLocalNextState                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::StartNextState(enum class EFortMissionActivationWidgetState LocalNextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "StartNextState");

	Params::UMissionActivationWidget_C_StartNextState_Params Parms{};

	Parms.LocalNextState = LocalNextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)

void UMissionActivationWidget_C::UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "UnbindEvents");

	Params::UMissionActivationWidget_C_UnbindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)

void UMissionActivationWidget_C::BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BindEvents");

	Params::UMissionActivationWidget_C_BindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMission*                CallFunc_GetPrimaryMission_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortObjectiveBase*          CallFunc_GetObjectiveByHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMissionTimerTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TimeSecondsToText_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UMissionActivationWidget_C::UpdateObjectiveReadyTime(class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, bool Temp_bool_Variable, class AFortObjectiveBase* CallFunc_GetObjectiveByHandle_ReturnValue, class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMissionTimerTimeRemaining_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_TimeSecondsToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdateObjectiveReadyTime");

	Params::UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryMission_ReturnValue = CallFunc_GetPrimaryMission_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetObjectiveByHandle_ReturnValue = CallFunc_GetObjectiveByHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Objective_Ready_Up = K2Node_DynamicCast_AsGeneric_Objective_Ready_Up;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionTimerTimeRemaining_ReturnValue = CallFunc_GetMissionTimerTimeRemaining_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_TimeSecondsToText_ReturnValue = CallFunc_TimeSecondsToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.FocusOnAvailablePanelButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::FocusOnAvailablePanelButton(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "FocusOnAvailablePanelButton");

	Params::UMissionActivationWidget_C_FocusOnAvailablePanelButton_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BluGloRequirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UMissionActivationWidget_C::SetBluGloRequirementHint(int32 BluGloRequirement, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "SetBluGloRequirementHint");

	Params::UMissionActivationWidget_C_SetBluGloRequirementHint_Params Parms{};

	Parms.BluGloRequirement = BluGloRequirement;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.TogglePanelButtonInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameStateZone*          FortGameStateZone                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayVoteLocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayVoteLocked_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayVoteLocked_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayVoteLocked_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::TogglePanelButtonInteractability(bool IsEnabled, class AFortGameStateZone* FortGameStateZone, bool CallFunc_IsGameplayVoteLocked_ReturnValue, bool CallFunc_IsGameplayVoteLocked_ReturnValue1, bool CallFunc_IsGameplayVoteLocked_ReturnValue2, bool CallFunc_IsGameplayVoteLocked_ReturnValue3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "TogglePanelButtonInteractability");

	Params::UMissionActivationWidget_C_TogglePanelButtonInteractability_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.FortGameStateZone = FortGameStateZone;
	Parms.CallFunc_IsGameplayVoteLocked_ReturnValue = CallFunc_IsGameplayVoteLocked_ReturnValue;
	Parms.CallFunc_IsGameplayVoteLocked_ReturnValue1 = CallFunc_IsGameplayVoteLocked_ReturnValue1;
	Parms.CallFunc_IsGameplayVoteLocked_ReturnValue2 = CallFunc_IsGameplayVoteLocked_ReturnValue2;
	Parms.CallFunc_IsGameplayVoteLocked_ReturnValue3 = CallFunc_IsGameplayVoteLocked_ReturnValue3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "PreConstruct");

	Params::UMissionActivationWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::HandleOnRecepientVoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleOnRecepientVoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMissionActivationWidgetStateActiveState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStatePreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnStateUpdated");

	Params::UMissionActivationWidget_C_OnStateUpdated_Params Parms{};

	Parms.ActiveState = ActiveState;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteLockoutOccured
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::HandleVoteLockoutOccured()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleVoteLockoutOccured");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMissionActivationWidgetStateCallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class AFortMission*                CallFunc_GetPrimaryMission_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStateK2Node_Event_ActiveState                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStateK2Node_Event_PreviousState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMissionName_ReturnValue                              (None)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMissionInfo*            CallFunc_GetPrimaryMissionInfo_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::ExecuteUbergraph_MissionActivationWidget(int32 EntryPoint, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue3, bool K2Node_SwitchEnum1_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, enum class EFortMissionActivationWidgetState K2Node_Event_ActiveState, enum class EFortMissionActivationWidgetState K2Node_Event_PreviousState, class FText CallFunc_GetMissionName_ReturnValue, bool K2Node_SwitchEnum3_CmpSuccess, class UFortMissionInfo* CallFunc_GetPrimaryMissionInfo_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionActivationWidget_C", "ExecuteUbergraph_MissionActivationWidget");

	Params::UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue1 = CallFunc_SlotAsOverlaySlot_ReturnValue1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue2 = CallFunc_SlotAsOverlaySlot_ReturnValue2;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue3 = CallFunc_SlotAsOverlaySlot_ReturnValue3;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue = CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue;
	Parms.CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue = CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_GetPrimaryMission_ReturnValue = CallFunc_GetPrimaryMission_ReturnValue;
	Parms.K2Node_Event_ActiveState = K2Node_Event_ActiveState;
	Parms.K2Node_Event_PreviousState = K2Node_Event_PreviousState;
	Parms.CallFunc_GetMissionName_ReturnValue = CallFunc_GetMissionName_ReturnValue;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_GetPrimaryMissionInfo_ReturnValue = CallFunc_GetPrimaryMissionInfo_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



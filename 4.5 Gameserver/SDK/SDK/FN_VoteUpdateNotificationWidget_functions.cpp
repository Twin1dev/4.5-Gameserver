#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C
// (None)

class UClass* UVoteUpdateNotificationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoteUpdateNotificationWidget_C");

	return Clss;
}


// VoteUpdateNotificationWidget_C VoteUpdateNotificationWidget.Default__VoteUpdateNotificationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoteUpdateNotificationWidget_C* UVoteUpdateNotificationWidget_C::GetDefaultObj()
{
	static class UVoteUpdateNotificationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoteUpdateNotificationWidget_C*>(UVoteUpdateNotificationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetTimeRemainingToEndVote_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UVoteUpdateNotificationWidget_C::UpdateTimer(float CallFunc_GetTimeRemainingToEndVote_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateTimer");

	Params::UVoteUpdateNotificationWidget_C_UpdateTimer_Params Parms{};

	Parms.CallFunc_GetTimeRemainingToEndVote_ReturnValue = CallFunc_GetTimeRemainingToEndVote_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVoter>              Voters                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              No                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Yes                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoter                      CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::UpdateVoteCounts(TArray<struct FVoter>& Voters, int32 No, int32 Yes, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVoter& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateVoteCounts");

	Params::UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params Parms{};

	Parms.Voters = Voters;
	Parms.No = No;
	Parms.Yes = Yes;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleVoteUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         VoteStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoteResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              Voters                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::HandleVoteUpdated(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "HandleVoteUpdated");

	Params::UVoteUpdateNotificationWidget_C_HandleVoteUpdated_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = Voters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Toast                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowAction                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMissionVoteUINotification*MissionVoteToast                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVoter>              CallFunc_GetCurrentVoters_Voters                                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetCurrentVoters_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMissionVoteUINotification*K2Node_DynamicCast_AsFort_Mission_Vote_UINotification            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::SetToast(class UFortUINotification* Toast, bool ShowAction, class UFortMissionVoteUINotification* MissionVoteToast, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class EFortVoteType Temp_byte_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, enum class ESlateVisibility Temp_byte_Variable2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue1, bool CallFunc_RemoveChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue2, bool CallFunc_RemoveChild_ReturnValue1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue3, bool CallFunc_RemoveChild_ReturnValue2, TArray<struct FVoter>& CallFunc_GetCurrentVoters_Voters, bool CallFunc_GetCurrentVoters_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FText K2Node_Select_Default, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UFortMissionVoteUINotification* K2Node_DynamicCast_AsFort_Mission_Vote_UINotification, bool K2Node_DynamicCast_bSuccess1, enum class ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "SetToast");

	Params::UVoteUpdateNotificationWidget_C_SetToast_Params Parms{};

	Parms.Toast = Toast;
	Parms.ShowAction = ShowAction;
	Parms.MissionVoteToast = MissionVoteToast;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue1 = CallFunc_AddChildToHorizontalBox_ReturnValue1;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue2 = CallFunc_AddChildToHorizontalBox_ReturnValue2;
	Parms.CallFunc_RemoveChild_ReturnValue1 = CallFunc_RemoveChild_ReturnValue1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue3 = CallFunc_AddChildToHorizontalBox_ReturnValue3;
	Parms.CallFunc_RemoveChild_ReturnValue2 = CallFunc_RemoveChild_ReturnValue2;
	Parms.CallFunc_GetCurrentVoters_Voters = CallFunc_GetCurrentVoters_Voters;
	Parms.CallFunc_GetCurrentVoters_ReturnValue = CallFunc_GetCurrentVoters_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsFort_Mission_Vote_UINotification = K2Node_DynamicCast_AsFort_Mission_Vote_UINotification;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ToastFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::ToastFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "ToastFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Cleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UVoteUpdateNotificationWidget_C::ExecuteUbergraph_VoteUpdateNotificationWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "ExecuteUbergraph_VoteUpdateNotificationWidget");

	Params::UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnToastFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::OnToastFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "OnToastFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



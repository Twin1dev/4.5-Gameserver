#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C
// (None)

class UClass* UAthenaVehicleFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVehicleFeedback_C");

	return Clss;
}


// AthenaVehicleFeedback_C AthenaVehicleFeedback.Default__AthenaVehicleFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVehicleFeedback_C* UAthenaVehicleFeedback_C::GetDefaultObj()
{
	static class UAthenaVehicleFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVehicleFeedback_C*>(UAthenaVehicleFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehicleDriver_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::OnEnterVehicleDriver_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "OnEnterVehicleDriver_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehiclePassenger_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::OnEnterVehiclePassenger_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "OnEnterVehiclePassenger_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.HideFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::HideFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "HideFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ShowFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::ShowFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "ShowFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnKeybindsChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::OnKeybindsChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "OnKeybindsChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnExitVehicle_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaVehicleFeedback_C::OnExitVehicle_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "OnExitVehicle_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ExecuteUbergraph_AthenaVehicleFeedback
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FName                        CallFunc_GetUseActionName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetJumpActionName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCrouchActionName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue5                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetFireActionName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDrivingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetJumpActionName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue6                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue7                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line6                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue8                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    K2Node_DynamicCast_AsAthena_HUDFeedback_Line7                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDrivingVehicle_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaVehicleFeedback_C::ExecuteUbergraph_AthenaVehicleFeedback(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue, class FName CallFunc_GetJumpActionName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDFeedbackLine_C* CallFunc_Create_ReturnValue, class FName CallFunc_GetCrouchActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line1, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line2, bool K2Node_DynamicCast_bSuccess2, class UWidget* CallFunc_GetChildAt_ReturnValue3, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line3, bool K2Node_DynamicCast_bSuccess3, class UWidget* CallFunc_GetChildAt_ReturnValue4, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line4, bool K2Node_DynamicCast_bSuccess4, class UWidget* CallFunc_GetChildAt_ReturnValue5, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line5, bool K2Node_DynamicCast_bSuccess5, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class FName CallFunc_GetJumpActionName_ReturnValue1, bool Temp_bool_Variable1, class FName K2Node_Select_Default, class FName K2Node_Select1_Default, class FText CallFunc_MakeLiteralText_ReturnValue4, class UWidget* CallFunc_GetChildAt_ReturnValue6, class UWidget* CallFunc_GetChildAt_ReturnValue7, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line6, bool K2Node_DynamicCast_bSuccess7, class UWidget* CallFunc_GetChildAt_ReturnValue8, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line7, bool K2Node_DynamicCast_bSuccess8, class APawn* CallFunc_K2_GetPawn_ReturnValue1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_IsDrivingVehicle_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFeedback_C", "ExecuteUbergraph_AthenaVehicleFeedback");

	Params::UAthenaVehicleFeedback_C_ExecuteUbergraph_AthenaVehicleFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetUseActionName_ReturnValue = CallFunc_GetUseActionName_ReturnValue;
	Parms.CallFunc_GetJumpActionName_ReturnValue = CallFunc_GetJumpActionName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCrouchActionName_ReturnValue = CallFunc_GetCrouchActionName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line = K2Node_DynamicCast_AsAthena_HUDFeedback_Line;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue1 = CallFunc_GetChildAt_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line1 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_GetChildAt_ReturnValue2 = CallFunc_GetChildAt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line2 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetChildAt_ReturnValue3 = CallFunc_GetChildAt_ReturnValue3;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line3 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetChildAt_ReturnValue4 = CallFunc_GetChildAt_ReturnValue4;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line4 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetChildAt_ReturnValue5 = CallFunc_GetChildAt_ReturnValue5;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line5 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line5;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetFireActionName_ReturnValue = CallFunc_GetFireActionName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsDrivingVehicle_ReturnValue = CallFunc_IsDrivingVehicle_ReturnValue;
	Parms.CallFunc_GetJumpActionName_ReturnValue1 = CallFunc_GetJumpActionName_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_GetChildAt_ReturnValue6 = CallFunc_GetChildAt_ReturnValue6;
	Parms.CallFunc_GetChildAt_ReturnValue7 = CallFunc_GetChildAt_ReturnValue7;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line6 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line6;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_GetChildAt_ReturnValue8 = CallFunc_GetChildAt_ReturnValue8;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsAthena_HUDFeedback_Line7 = K2Node_DynamicCast_AsAthena_HUDFeedback_Line7;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_K2_GetPawn_ReturnValue1 = CallFunc_K2_GetPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena1 = K2Node_DynamicCast_AsPlayer_Pawn_Athena1;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_IsDrivingVehicle_ReturnValue1 = CallFunc_IsDrivingVehicle_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



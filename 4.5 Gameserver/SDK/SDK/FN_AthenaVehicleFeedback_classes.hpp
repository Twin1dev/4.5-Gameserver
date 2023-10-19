#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x260 - 0x248)
// WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C
class UAthenaVehicleFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	float                                        HideFeedbackTime;                                  // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HideFeedbackTimerHandle;                           // 0x258(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaVehicleFeedback_C* GetDefaultObj();

	void OnEnterVehicleDriver_Bind();
	void OnEnterVehiclePassenger_Bind();
	void HideFeedback();
	void ShowFeedback();
	void Construct();
	void OnKeybindsChanged_Bind();
	void OnExitVehicle_Bind();
	void ExecuteUbergraph_AthenaVehicleFeedback(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue, class FName CallFunc_GetJumpActionName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDFeedbackLine_C* CallFunc_Create_ReturnValue, class FName CallFunc_GetCrouchActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line1, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line2, bool K2Node_DynamicCast_bSuccess2, class UWidget* CallFunc_GetChildAt_ReturnValue3, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line3, bool K2Node_DynamicCast_bSuccess3, class UWidget* CallFunc_GetChildAt_ReturnValue4, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line4, bool K2Node_DynamicCast_bSuccess4, class UWidget* CallFunc_GetChildAt_ReturnValue5, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line5, bool K2Node_DynamicCast_bSuccess5, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class FName CallFunc_GetJumpActionName_ReturnValue1, bool Temp_bool_Variable1, class FName K2Node_Select_Default, class FName K2Node_Select1_Default, class FText CallFunc_MakeLiteralText_ReturnValue4, class UWidget* CallFunc_GetChildAt_ReturnValue6, class UWidget* CallFunc_GetChildAt_ReturnValue7, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line6, bool K2Node_DynamicCast_bSuccess7, class UWidget* CallFunc_GetChildAt_ReturnValue8, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaHUDFeedbackLine_C* K2Node_DynamicCast_AsAthena_HUDFeedback_Line7, bool K2Node_DynamicCast_bSuccess8, class APawn* CallFunc_K2_GetPawn_ReturnValue1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_IsDrivingVehicle_ReturnValue1);
};

}



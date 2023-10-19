#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x250 - 0x248)
// WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C
class UAthenaAerialFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaAerialFeedback_C* GetDefaultObj();

	void Update(enum class EAthenaAerialPhase Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_MakeLiteralText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class FText CallFunc_Format_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess2, enum class EAthenaAerialPhase CallFunc_GetAerialPhase_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, class FText K2Node_Select_Default);
	void OnLocalPlayerBeginSkydiving_Bind();
	void GamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void OnKeybindsChanged_Bind();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_AthenaAerialFeedback(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetJumpActionName_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}



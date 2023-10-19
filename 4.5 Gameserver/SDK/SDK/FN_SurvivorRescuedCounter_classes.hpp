#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass SurvivorRescuedCounter.SurvivorRescuedCounter_C
class USurvivorRescuedCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               NumberSurvivors;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USurvivorRescuedCounter_C* GetDefaultObj();

	void UpdateSurvivorsRescued(int32 SurvivorsRescued, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_SurvivorRescuedCounter(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumSurvivorsRescued_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xBA8 - 0xB80)
// BlueprintGeneratedClass AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C
class AAbilityDecoTool_Athena_MissileBattery_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)
	class UClass*                                NewVar_0;                                          // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       Helper;                                            // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideTimerHandle;                                   // 0xB98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AFortPawn*                             ForPawn;                                           // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbilityDecoTool_Athena_MissileBattery_C* GetDefaultObj();

	void HideMeshAndPlacement(bool bInHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void UserConstructionScript();
	void HideFor(float InTime);
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void Show();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AB_Placement_Preview_Pack_MissleBattery_C* K2Node_DynamicCast_AsB_Placement_Preview_Pack_Missle_Battery, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_InTime, class AFortDecoHelper* K2Node_Event_FortDecoHelper, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1);
};

}



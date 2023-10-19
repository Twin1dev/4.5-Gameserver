#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xBE8 - 0xB80)
// BlueprintGeneratedClass DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C
class ADA_Resource_Pack_Vacuum_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorReasonGamepad;                                // 0xBA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorCannotUse;                                    // 0xBC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ADA_Resource_Pack_Vacuum_C* GetDefaultObj();

	void IsOnGround(bool* bOnGround, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Resource_Pack_Vacuum(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1);
};

}



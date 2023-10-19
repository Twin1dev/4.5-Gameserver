#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xBB0 - 0xB80)
// BlueprintGeneratedClass DA_RegenPack.DA_RegenPack_C
class ADA_RegenPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)
	float                                        MinHeldTime;                                       // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ButtonHeldTimer;                                   // 0xB90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CanFire;                                           // 0xB98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlreadyReleased;                                   // 0xB99(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17AB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Med_Pack_OverlapVolume_C*          OverlapVolume;                                     // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetToKnock;                                     // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADA_RegenPack_C* GetDefaultObj();

	void IsOnGround(bool* bOnGround, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void MinHeldTimeCheck();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_RegenPack(int32 EntryPoint, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x950 - 0x948)
// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                          GT_EventWeaponFire;                                // 0x948(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Ranged_GenericDamage_C* GetDefaultObj();

	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData, const struct FGameplayTagContainer& GT_TargetTags, const struct FGameplayTagContainer& GT_InstigatorTags, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	void K2_CommitExecute(const struct FGameplayEventData& CallFunc_GetEventData_GameplayEventData);
};

}



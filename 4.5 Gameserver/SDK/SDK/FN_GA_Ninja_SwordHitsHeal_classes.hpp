#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xA80 - 0xA58)
// BlueprintGeneratedClass GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
class UGA_Ninja_SwordHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA58(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_RequiredTags;                                   // 0xA60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Ninja_SwordHitsHeal_C* GetDefaultObj();

	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x918 - 0x910)
// BlueprintGeneratedClass GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C
class UGA_DefaultPlayer_BuildingRepaired_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DefaultPlayer_BuildingRepaired_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue);
};

}



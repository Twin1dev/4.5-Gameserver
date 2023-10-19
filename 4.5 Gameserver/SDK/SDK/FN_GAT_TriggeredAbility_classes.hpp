#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x920 - 0x910)
// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_AbilitiesGenericTriggeredAbilityActivate;       // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_TriggeredAbility_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}



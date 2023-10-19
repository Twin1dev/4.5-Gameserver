#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x928 - 0x910)
// BlueprintGeneratedClass GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C
class UGAB_ShielderAttachPawnEvents_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0x918(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_374C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShielderPawn_C*                       Shielder;                                          // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAB_ShielderAttachPawnEvents_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_ShielderAttachPawnEvents(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool Temp_bool_Variable);
};

}



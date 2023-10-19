#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x960 - 0x940)
// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(Transient, DuplicateTransient)
	struct FFortFeedbackHandle                   StunFeedbackEvent;                                 // 0x948(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_DefaultPlayer_Stunned_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue);
};

}



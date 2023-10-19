#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x970 - 0x968)
// BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
class UGAB_TakerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGAB_TakerApplyFullBodyHit_C* GetDefaultObj();

	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult);
};

}



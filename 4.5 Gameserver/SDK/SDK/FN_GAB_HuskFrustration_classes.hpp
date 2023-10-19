#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x918 - 0x910)
// BlueprintGeneratedClass GAB_HuskFrustration.GAB_HuskFrustration_C
class UGAB_HuskFrustration_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGAB_HuskFrustration_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskFrustration(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}



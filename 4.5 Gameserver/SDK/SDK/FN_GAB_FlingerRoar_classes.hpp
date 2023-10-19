#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x918 - 0x910)
// BlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C
class UGAB_FlingerRoar_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGAB_FlingerRoar_C* GetDefaultObj();

	void OnCancelled_AD410E224F398036F9E428A39B02B87C();
	void OnInterrupted_AD410E224F398036F9E428A39B02B87C();
	void OnBlendOut_AD410E224F398036F9E428A39B02B87C();
	void OnCompleted_AD410E224F398036F9E428A39B02B87C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerRoar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}



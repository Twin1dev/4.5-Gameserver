#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_TakerDeathFX_On.AnimNotify_TakerDeathFX_On_C
class UAnimNotify_TakerDeathFX_On_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_TakerDeathFX_On_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_TakerDeathMaterials_Off.AnimNotify_TakerDeathMaterials_Off_C
class UAnimNotify_TakerDeathMaterials_Off_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_TakerDeathMaterials_Off_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}



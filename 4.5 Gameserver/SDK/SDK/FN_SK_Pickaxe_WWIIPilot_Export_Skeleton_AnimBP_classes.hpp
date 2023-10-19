#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB18 (0xF28 - 0x410)
// AnimBlueprintGeneratedClass SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C
class USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9C2708894B6033E5991C85825808CCE5; // 0x418(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7; // 0x460(0xE8)(ContainsInstancedReference)
	uint8                                        Pad_57C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_01D662954FB96FA817FF2E9C2A358794; // 0x550(0x3B0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_3F3A36C74CCEDF08D0E8578D4074B6AA; // 0x900(0x590)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CC4DC41B4D3F9825958793BF8F42F812; // 0xE90(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3F74BBA247ACE0E0A0F426B09607DF93; // 0xED8(0x48)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xF20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



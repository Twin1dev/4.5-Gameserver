#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x550 - 0x410)
// AnimBlueprintGeneratedClass SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C
class USK_F_Ninja_01_Body_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1205956746F4C2F910A7F697B79629BF; // 0x418(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C; // 0x460(0xE8)(ContainsInstancedReference)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_F_Ninja_01_Body_Skeleton_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



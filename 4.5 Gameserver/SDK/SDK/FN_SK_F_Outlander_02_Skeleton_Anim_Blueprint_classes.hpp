#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A88 (0x1E98 - 0x410)
// AnimBlueprintGeneratedClass SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C
class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A231BBBF42868E7DAF03CEB4C5774CAD; // 0x418(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7; // 0x460(0xE8)(ContainsInstancedReference)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_6B75393649E9879CCA97C2A0F14635BC; // 0x548(0x190)(None)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_BE5837EF4C2F5C9C0A8F1CB8D726840C; // 0x6D8(0x190)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_42C1F1544D48F099739C33B2398D29B6; // 0x868(0x48)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_10AE448948DFDAC48D633A9115DE9546; // 0x8B0(0x3B0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C2C423994AF0E2ACB767DBB2F2A9F807; // 0xC60(0x48)(None)
	uint8                                        Pad_516D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CD200A494CE2706612624D82C982B3A9; // 0xCB0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07; // 0x1060(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EA3B9A5B407C0B0134CDBEBE3E9A5A96; // 0x1410(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_FEDD4DD14777B86ABE0537A59A5135CD; // 0x17C0(0x3B0)(None)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_C5D99D0F44097D61E3DBD9A455D468EA; // 0x1B70(0x190)(None)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_1D18CAEC448657ED9FCA44951F18E351; // 0x1D00(0x190)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1E90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



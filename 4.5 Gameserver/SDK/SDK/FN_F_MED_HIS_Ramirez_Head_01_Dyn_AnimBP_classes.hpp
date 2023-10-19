#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1268 (0x1678 - 0x410)
// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_966722F040605A529996238D427F43D4; // 0x418(0x48)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B; // 0x460(0x68)(None)
	uint8                                        Pad_5454[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095; // 0x4D0(0x3B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646; // 0x880(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2; // 0x8C8(0x48)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9; // 0x910(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC; // 0xCC0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505; // 0x1070(0x3B0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3; // 0x1420(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7; // 0x1500(0x50)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405; // 0x1550(0xD0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E; // 0x1620(0x50)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E8 (0xA40 - 0x358)
// AnimBlueprintGeneratedClass SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C
class USK_M249_Skeleton_Dynamic_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_57C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8E0F65D247E6D62D018C2FBA102CD862; // 0x368(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FFE83FF1460937477A33C495556479A8; // 0x3B0(0x48)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_7B49CE394F90BE5C65D9C0A9ADF6EB63; // 0x3F8(0x68)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_ABE25BC349D1D197C1C97D9008555ECD; // 0x460(0x48)(None)
	uint8                                        Pad_57C7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2A536FC14BBB64BCB3DB19A790BB45C4; // 0x4B0(0x590)(None)

	static class UClass* StaticClass();
	static class USK_M249_Skeleton_Dynamic_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int32 EntryPoint);
};

}



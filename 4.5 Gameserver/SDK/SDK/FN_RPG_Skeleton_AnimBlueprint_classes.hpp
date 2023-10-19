#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x458 - 0x358)
// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_56B5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_782D94BD4EFDE1439B44CB93C212AD03; // 0x3B0(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_829520A14F89D74E64C7AEBBB88029DD; // 0x420(0x38)(None)

	static class UClass* StaticClass();
	static class URPG_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



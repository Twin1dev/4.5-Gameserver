#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x458 - 0x358)
// AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C
class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_56B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_92D36F244BA6D80A4E58C2B6BE684A28; // 0x368(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_438D38E44093076D3022318F9361AB01; // 0x3B0(0x38)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BAF2D87E4290896A23024E8C2A5D11AB; // 0x3E8(0x70)(None)

	static class UClass* StaticClass();
	static class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



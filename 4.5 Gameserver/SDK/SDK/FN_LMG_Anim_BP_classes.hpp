#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x520 - 0x358)
// AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C
class ULMG_Anim_BP_C : public UAnimInstance
{
public:
	uint8                                        Pad_57C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BB04A6824ABBAEED5901A6947B88E4BF; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9A4A91854D66514A7B527393E20AA106; // 0x3B0(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7CA80C604BB336829EC42F95092AE7CA; // 0x420(0x38)(None)
	struct FAnimNode_SubInstance                 AnimGraphNode_SubInstance_5BE6D33E46B42B5E2CFBC697BBEE2195; // 0x458(0xC8)(None)

	static class UClass* StaticClass();
	static class ULMG_Anim_BP_C* GetDefaultObj();

	void ExecuteUbergraph_LMG_Anim_BP(int32 EntryPoint);
};

}



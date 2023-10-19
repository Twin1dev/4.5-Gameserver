#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x458 - 0x358)
// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
class UBP_Shotgun_SG_BFPA_C : public UAnimInstance
{
public:
	uint8                                        Pad_5666[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB; // 0x3B0(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB; // 0x420(0x38)(None)

	static class UClass* StaticClass();
	static class UBP_Shotgun_SG_BFPA_C* GetDefaultObj();

	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint);
};

}



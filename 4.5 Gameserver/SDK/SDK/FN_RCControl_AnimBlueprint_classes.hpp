#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x4D0 - 0x358)
// AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
class URCControl_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_570A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4BFB0E834E31FC0B04D397BB0A2CC05F; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7A5C24A747EADBE3AD2AB3A97C48278F; // 0x3B0(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C507D3604F783A593D65ED90D3094EA6; // 0x420(0xB0)(None)

	static class UClass* StaticClass();
	static class URCControl_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_RCControl_AnimBlueprint(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x458 - 0x358)
// AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
class UBP_SniperRifle_FCSA_C : public UAnimInstance
{
public:
	uint8                                        Pad_566A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_146699F448DB1AAB26EC9F814C49D1D1; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F7DD3CBC4CA03D5C78826D9E409ECCA2; // 0x3B0(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7C8D051E4A0B249DA61DCAA86177450B; // 0x420(0x38)(None)

	static class UClass* StaticClass();
	static class UBP_SniperRifle_FCSA_C* GetDefaultObj();

	void ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E0 (0xA38 - 0x358)
// AnimBlueprintGeneratedClass SK_Pickaxe_Venus_Skeleton_AnimBlueprint.SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C
class USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_2FF4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_22F5FA204C600A8D205D0B977A294F5E; // 0x368(0x48)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_140B8DC24F91C5D775C41CACF3149880; // 0x3B0(0x590)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_A8CFF5DF4725E0DC5A086F930C4A9D06; // 0x940(0x68)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8D7B246D4BD42A56FC81309782497549; // 0x9A8(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_A241468D4D3A8364419FA3ACAC69F4ED; // 0x9F0(0x48)(None)

	static class UClass* StaticClass();
	static class USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



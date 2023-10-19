#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E0 (0xAF0 - 0x410)
// AnimBlueprintGeneratedClass Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C
class UValor_Pickaxe_dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_9318A6E24BC2379998187E968336A477; // 0x418(0x68)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_CCFDCC0F4CAA6571C11FAB8073E002E9; // 0x480(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_91034D24435D027602524289648AE6D6; // 0x4C8(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_24C791F6468FB05C35F89481BCA0BA5B; // 0x510(0x48)(None)
	uint8                                        Pad_57C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_0B995CB840C0EDC3623542A37764C52A; // 0x560(0x590)(None)

	static class UClass* StaticClass();
	static class UValor_Pickaxe_dyn_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP(int32 EntryPoint);
};

}



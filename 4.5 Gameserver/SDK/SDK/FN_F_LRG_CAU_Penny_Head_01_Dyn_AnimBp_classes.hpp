#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x4C8 - 0x410)
// AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_CD7E1EF9420B7BB62D1960BB468B9A0F; // 0x418(0x68)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_C2211EFB427B44656937CB978CEBA74F; // 0x480(0x48)(None)

	static class UClass* StaticClass();
	static class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C* GetDefaultObj();

	void ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int32 EntryPoint);
};

}



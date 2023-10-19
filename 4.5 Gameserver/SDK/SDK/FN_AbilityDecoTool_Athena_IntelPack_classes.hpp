#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB88 - 0xB80)
// BlueprintGeneratedClass AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C
class AAbilityDecoTool_Athena_IntelPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAbilityDecoTool_Athena_IntelPack_C* GetDefaultObj();

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}



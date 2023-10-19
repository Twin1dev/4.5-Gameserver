#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass IsPlayingMontage.IsPlayingMontage_C
class UIsPlayingMontage_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UIsPlayingMontage_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasCurrentMontage_ReturnValue);
};

}



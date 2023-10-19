#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC9 - 0xA0)
// BlueprintGeneratedClass BTDecorator_IsCharging.BTDecorator_IsCharging_C
class UBTDecorator_IsCharging_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                OtherActorKey;                                     // 0xA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SucceedOnNOTCharging;                              // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTDecorator_IsCharging_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool bReturnVal, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
};

}



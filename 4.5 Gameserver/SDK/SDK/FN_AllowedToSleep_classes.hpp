#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass AllowedToSleep.AllowedToSleep_C
class UAllowedToSleep_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UAllowedToSleep_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool Temp_bool_Variable, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAllowedToSleep_ReturnValue);
};

}



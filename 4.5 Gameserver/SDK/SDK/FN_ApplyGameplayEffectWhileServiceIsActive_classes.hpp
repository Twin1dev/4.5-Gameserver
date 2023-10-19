#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA8 - 0x98)
// BlueprintGeneratedClass ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C
class UApplyGameplayEffectWhileServiceIsActive_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)
	class UClass*                                GameplayEffectToApply;                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UApplyGameplayEffectWhileServiceIsActive_C* GetDefaultObj();

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor2, class AActor* K2Node_Event_OwnerActor1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}



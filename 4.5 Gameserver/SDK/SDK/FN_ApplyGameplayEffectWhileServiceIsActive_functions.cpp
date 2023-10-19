#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C
// (None)

class UClass* UApplyGameplayEffectWhileServiceIsActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ApplyGameplayEffectWhileServiceIsActive_C");

	return Clss;
}


// ApplyGameplayEffectWhileServiceIsActive_C ApplyGameplayEffectWhileServiceIsActive.Default__ApplyGameplayEffectWhileServiceIsActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UApplyGameplayEffectWhileServiceIsActive_C* UApplyGameplayEffectWhileServiceIsActive_C::GetDefaultObj()
{
	static class UApplyGameplayEffectWhileServiceIsActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UApplyGameplayEffectWhileServiceIsActive_C*>(UApplyGameplayEffectWhileServiceIsActive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveActivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyGameplayEffectWhileServiceIsActive_C", "ReceiveActivation");

	Params::UApplyGameplayEffectWhileServiceIsActive_C_ReceiveActivation_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveDeactivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyGameplayEffectWhileServiceIsActive_C", "ReceiveDeactivation");

	Params::UApplyGameplayEffectWhileServiceIsActive_C_ReceiveDeactivation_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyGameplayEffectWhileServiceIsActive_C", "ReceiveTick");

	Params::UApplyGameplayEffectWhileServiceIsActive_C_ReceiveTick_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)

void UApplyGameplayEffectWhileServiceIsActive_C::ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor2, class AActor* K2Node_Event_OwnerActor1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyGameplayEffectWhileServiceIsActive_C", "ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive");

	Params::UApplyGameplayEffectWhileServiceIsActive_C_ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor2 = K2Node_Event_OwnerActor2;
	Parms.K2Node_Event_OwnerActor1 = K2Node_Event_OwnerActor1;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_AIController1 = K2Node_DynamicCast_AsFort_AIController1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue1 = CallFunc_GetAbilitySystemComponent_ReturnValue1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



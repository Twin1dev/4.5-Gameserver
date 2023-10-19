#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C
// (None)

class UClass* UGAB_NPCTurnTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_NPCTurnTransition_C");

	return Clss;
}


// GAB_NPCTurnTransition_C GAB_NPCTurnTransition.Default__GAB_NPCTurnTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_NPCTurnTransition_C* UGAB_NPCTurnTransition_C::GetDefaultObj()
{
	static class UGAB_NPCTurnTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_NPCTurnTransition_C*>(UGAB_NPCTurnTransition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCancelled_940C59954AFE32346A40E49BFAFD2A0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_NPCTurnTransition_C::OnCancelled_940C59954AFE32346A40E49BFAFD2A0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "OnCancelled_940C59954AFE32346A40E49BFAFD2A0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_NPCTurnTransition_C::OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_NPCTurnTransition_C::OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCompleted_940C59954AFE32346A40E49BFAFD2A0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_NPCTurnTransition_C::OnCompleted_940C59954AFE32346A40E49BFAFD2A0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "OnCompleted_940C59954AFE32346A40E49BFAFD2A0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_NPCTurnTransition_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.ExecuteUbergraph_GAB_NPCTurnTransition
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_NPCTurnTransition_C::ExecuteUbergraph_GAB_NPCTurnTransition(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_K2_CommitAbility_ReturnValue, class FName CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName, float CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NPCTurnTransition_C", "ExecuteUbergraph_GAB_NPCTurnTransition");

	Params::UGAB_NPCTurnTransition_C_ExecuteUbergraph_GAB_NPCTurnTransition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName = CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName;
	Parms.CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate = CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component = K2Node_DynamicCast_AsCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}



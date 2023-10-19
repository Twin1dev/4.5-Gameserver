#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C
// (None)

class UClass* UGAB_FlingerApplyFullBodyHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerApplyFullBodyHit_C");

	return Clss;
}


// GAB_FlingerApplyFullBodyHit_C GAB_FlingerApplyFullBodyHit.Default__GAB_FlingerApplyFullBodyHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerApplyFullBodyHit_C* UGAB_FlingerApplyFullBodyHit_C::GetDefaultObj()
{
	static class UGAB_FlingerApplyFullBodyHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerApplyFullBodyHit_C*>(UGAB_FlingerApplyFullBodyHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "PickFullBodyHitMontageSection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.ExecuteUbergraph_GAB_FlingerApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FlingerApplyFullBodyHit_C::ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerApplyFullBodyHit_C", "ExecuteUbergraph_GAB_FlingerApplyFullBodyHit");

	Params::UGAB_FlingerApplyFullBodyHit_C_ExecuteUbergraph_GAB_FlingerApplyFullBodyHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
// (None)

class UClass* UGAB_TakerApplyFullBodyHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerApplyFullBodyHit_C");

	return Clss;
}


// GAB_TakerApplyFullBodyHit_C GAB_TakerApplyFullBodyHit.Default__GAB_TakerApplyFullBodyHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerApplyFullBodyHit_C* UGAB_TakerApplyFullBodyHit_C::GetDefaultObj()
{
	static class UGAB_TakerApplyFullBodyHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerApplyFullBodyHit_C*>(UGAB_TakerApplyFullBodyHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_TakerApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_TakerApplyFullBodyHit_C", "PickFullBodyHitMontageSection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.ExecuteUbergraph_GAB_TakerApplyFullBodyHit
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SetFNameBasedOnHitDirection_NameResult                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_TakerApplyFullBodyHit_C::ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_TakerApplyFullBodyHit_C", "ExecuteUbergraph_GAB_TakerApplyFullBodyHit");

	Params::UGAB_TakerApplyFullBodyHit_C_ExecuteUbergraph_GAB_TakerApplyFullBodyHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_SetFNameBasedOnHitDirection_NameResult = CallFunc_SetFNameBasedOnHitDirection_NameResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



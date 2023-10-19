#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C
// (None)

class UClass* UGAB_SmasherChargeDecelerate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherChargeDecelerate_C");

	return Clss;
}


// GAB_SmasherChargeDecelerate_C GAB_SmasherChargeDecelerate.Default__GAB_SmasherChargeDecelerate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherChargeDecelerate_C* UGAB_SmasherChargeDecelerate_C::GetDefaultObj()
{
	static class UGAB_SmasherChargeDecelerate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherChargeDecelerate_C*>(UGAB_SmasherChargeDecelerate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_SmasherChargeDecelerate_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SmasherChargeDecelerate_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SmasherChargeDecelerate_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SmasherChargeDecelerate_C", "K2_OnEndAbility");

	Params::UGAB_SmasherChargeDecelerate_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.ExecuteUbergraph_GAB_SmasherChargeDecelerate
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASmasherPawn_C*              K2Node_DynamicCast_AsSmasher_Pawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SmasherChargeDecelerate_C::ExecuteUbergraph_GAB_SmasherChargeDecelerate(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SmasherChargeDecelerate_C", "ExecuteUbergraph_GAB_SmasherChargeDecelerate");

	Params::UGAB_SmasherChargeDecelerate_C_ExecuteUbergraph_GAB_SmasherChargeDecelerate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSmasher_Pawn = K2Node_DynamicCast_AsSmasher_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



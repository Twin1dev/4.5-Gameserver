#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_BecomeChest.GAB_BecomeChest_C
// (None)

class UClass* UGAB_BecomeChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_BecomeChest_C");

	return Clss;
}


// GAB_BecomeChest_C GAB_BecomeChest.Default__GAB_BecomeChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_BecomeChest_C* UGAB_BecomeChest_C::GetDefaultObj()
{
	static class UGAB_BecomeChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_BecomeChest_C*>(UGAB_BecomeChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_BecomeChest.GAB_BecomeChest_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_BecomeChest_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_BecomeChest_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_BecomeChest.GAB_BecomeChest_C.ExecuteUbergraph_GAB_BecomeChest
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHuskPawn_Mimic_C*           K2Node_DynamicCast_AsHusk_Pawn_Mimic                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_BecomeChest_C::ExecuteUbergraph_GAB_BecomeChest(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_BecomeChest_C", "ExecuteUbergraph_GAB_BecomeChest");

	Params::UGAB_BecomeChest_C_ExecuteUbergraph_GAB_BecomeChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn_Mimic = K2Node_DynamicCast_AsHusk_Pawn_Mimic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



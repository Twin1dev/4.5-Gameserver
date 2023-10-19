#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C
// (None)

class UClass* UGAB_Melee_ImpactCombo_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_Melee_ImpactCombo_Athena_C");

	return Clss;
}


// GAB_Melee_ImpactCombo_Athena_C GAB_Melee_ImpactCombo_Athena.Default__GAB_Melee_ImpactCombo_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_Melee_ImpactCombo_Athena_C* UGAB_Melee_ImpactCombo_Athena_C::GetDefaultObj()
{
	static class UGAB_Melee_ImpactCombo_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_Melee_ImpactCombo_Athena_C*>(UGAB_Melee_ImpactCombo_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C.K2_CommitExecute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_ImpactCombo_Athena_C::K2_CommitExecute(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Melee_ImpactCombo_Athena_C", "K2_CommitExecute");

	Params::UGAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute_Params Parms{};

	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



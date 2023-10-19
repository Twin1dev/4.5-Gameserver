#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C
// (None)

class UClass* UGAB_FlingerRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerRanged_C");

	return Clss;
}


// GAB_FlingerRanged_C GAB_FlingerRanged.Default__GAB_FlingerRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerRanged_C* UGAB_FlingerRanged_C::GetDefaultObj()
{
	static class UGAB_FlingerRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerRanged_C*>(UGAB_FlingerRanged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::SpawnFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "SpawnFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRanged_C::StopFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "StopFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRanged_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "K2_OnEndAbility");

	Params::UGAB_FlingerRanged_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRanged_C::ExecuteUbergraph_GAB_FlingerRanged(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRanged_C", "ExecuteUbergraph_GAB_FlingerRanged");

	Params::UGAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}



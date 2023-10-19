#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_InstantHeal.GAB_InstantHeal_C
// (None)

class UClass* UGAB_InstantHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_InstantHeal_C");

	return Clss;
}


// GAB_InstantHeal_C GAB_InstantHeal.Default__GAB_InstantHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_InstantHeal_C* UGAB_InstantHeal_C::GetDefaultObj()
{
	static class UGAB_InstantHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_InstantHeal_C*>(UGAB_InstantHeal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_InstantHeal.GAB_InstantHeal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_InstantHeal_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_InstantHeal_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_InstantHeal.GAB_InstantHeal_C.ExecuteUbergraph_GAB_InstantHeal
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_InstantHeal_C::ExecuteUbergraph_GAB_InstantHeal(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_InstantHeal_C", "ExecuteUbergraph_GAB_InstantHeal");

	Params::UGAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



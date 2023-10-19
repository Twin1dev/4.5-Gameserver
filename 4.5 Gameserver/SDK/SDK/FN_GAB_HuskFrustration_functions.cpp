#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskFrustration.GAB_HuskFrustration_C
// (None)

class UClass* UGAB_HuskFrustration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskFrustration_C");

	return Clss;
}


// GAB_HuskFrustration_C GAB_HuskFrustration.Default__GAB_HuskFrustration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskFrustration_C* UGAB_HuskFrustration_C::GetDefaultObj()
{
	static class UGAB_HuskFrustration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskFrustration_C*>(UGAB_HuskFrustration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_HuskFrustration_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskFrustration_C::ExecuteUbergraph_GAB_HuskFrustration(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_HuskFrustration_C", "ExecuteUbergraph_GAB_HuskFrustration");

	Params::UGAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



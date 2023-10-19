#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C
// (None)

class UClass* UGAB_SmasherDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherDeath_C");

	return Clss;
}


// GAB_SmasherDeath_C GAB_SmasherDeath.Default__GAB_SmasherDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherDeath_C* UGAB_SmasherDeath_C::GetDefaultObj()
{
	static class UGAB_SmasherDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherDeath_C*>(UGAB_SmasherDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_SmasherDeath.GAB_SmasherDeath_C.ExecuteUbergraph_GAB_SmasherDeath
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SmasherDeath_C::ExecuteUbergraph_GAB_SmasherDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SmasherDeath_C", "ExecuteUbergraph_GAB_SmasherDeath");

	Params::UGAB_SmasherDeath_C_ExecuteUbergraph_GAB_SmasherDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



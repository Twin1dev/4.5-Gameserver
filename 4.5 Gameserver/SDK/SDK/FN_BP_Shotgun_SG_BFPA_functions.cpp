#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
// (None)

class UClass* UBP_Shotgun_SG_BFPA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shotgun_SG_BFPA_C");

	return Clss;
}


// BP_Shotgun_SG_BFPA_C BP_Shotgun_SG_BFPA.Default__BP_Shotgun_SG_BFPA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Shotgun_SG_BFPA_C* UBP_Shotgun_SG_BFPA_C::GetDefaultObj()
{
	static class UBP_Shotgun_SG_BFPA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Shotgun_SG_BFPA_C*>(UBP_Shotgun_SG_BFPA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.ExecuteUbergraph_BP_Shotgun_SG_BFPA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_SG_BFPA_C::ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_SG_BFPA_C", "ExecuteUbergraph_BP_Shotgun_SG_BFPA");

	Params::UBP_Shotgun_SG_BFPA_C_ExecuteUbergraph_BP_Shotgun_SG_BFPA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C
// (Actor)

class UClass* AB_Placement_Pack_MissileBattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Placement_Pack_MissileBattery_C");

	return Clss;
}


// B_Placement_Pack_MissileBattery_C B_Placement_Pack_MissileBattery.Default__B_Placement_Pack_MissileBattery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Placement_Pack_MissileBattery_C* AB_Placement_Pack_MissileBattery_C::GetDefaultObj()
{
	static class AB_Placement_Pack_MissileBattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Placement_Pack_MissileBattery_C*>(AB_Placement_Pack_MissileBattery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Placement_Pack_MissileBattery_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Placement_Pack_MissileBattery_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ExecuteUbergraph_B_Placement_Pack_MissileBattery
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Pack_MissileBattery_C::ExecuteUbergraph_B_Placement_Pack_MissileBattery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ExecuteUbergraph_B_Placement_Pack_MissileBattery");

	Params::AB_Placement_Pack_MissileBattery_C_ExecuteUbergraph_B_Placement_Pack_MissileBattery_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



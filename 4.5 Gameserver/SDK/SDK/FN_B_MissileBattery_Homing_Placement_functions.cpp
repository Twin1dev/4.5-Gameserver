#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C
// (Actor)

class UClass* AB_MissileBattery_Homing_Placement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MissileBattery_Homing_Placement_C");

	return Clss;
}


// B_MissileBattery_Homing_Placement_C B_MissileBattery_Homing_Placement.Default__B_MissileBattery_Homing_Placement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_MissileBattery_Homing_Placement_C* AB_MissileBattery_Homing_Placement_C::GetDefaultObj()
{
	static class AB_MissileBattery_Homing_Placement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_MissileBattery_Homing_Placement_C*>(AB_MissileBattery_Homing_Placement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_MissileBattery_Homing_Placement_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_MissileBattery_Homing_Placement_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ExecuteUbergraph_B_MissileBattery_Homing_Placement
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MissileBattery_Homing_Placement_C::ExecuteUbergraph_B_MissileBattery_Homing_Placement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "ExecuteUbergraph_B_MissileBattery_Homing_Placement");

	Params::AB_MissileBattery_Homing_Placement_C_ExecuteUbergraph_B_MissileBattery_Homing_Placement_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



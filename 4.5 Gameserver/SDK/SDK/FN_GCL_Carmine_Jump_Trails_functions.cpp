#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C
// (Actor)

class UClass* AGCL_Carmine_Jump_Trails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_Carmine_Jump_Trails_C");

	return Clss;
}


// GCL_Carmine_Jump_Trails_C GCL_Carmine_Jump_Trails.Default__GCL_Carmine_Jump_Trails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_Carmine_Jump_Trails_C* AGCL_Carmine_Jump_Trails_C::GetDefaultObj()
{
	static class AGCL_Carmine_Jump_Trails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_Carmine_Jump_Trails_C*>(AGCL_Carmine_Jump_Trails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Trails_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Trails_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Carmine_Jump_Trails_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ReceiveEndPlay");

	Params::AGCL_Carmine_Jump_Trails_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ExecuteUbergraph_GCL_Carmine_Jump_Trails
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Carmine_Jump_Trails_C::ExecuteUbergraph_GCL_Carmine_Jump_Trails(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ExecuteUbergraph_GCL_Carmine_Jump_Trails");

	Params::AGCL_Carmine_Jump_Trails_C_ExecuteUbergraph_GCL_Carmine_Jump_Trails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}



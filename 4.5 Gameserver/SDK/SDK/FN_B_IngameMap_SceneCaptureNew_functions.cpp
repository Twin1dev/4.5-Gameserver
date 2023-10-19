#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C
// (Actor)

class UClass* AB_IngameMap_SceneCaptureNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_IngameMap_SceneCaptureNew_C");

	return Clss;
}


// B_IngameMap_SceneCaptureNew_C B_IngameMap_SceneCaptureNew.Default__B_IngameMap_SceneCaptureNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_IngameMap_SceneCaptureNew_C* AB_IngameMap_SceneCaptureNew_C::GetDefaultObj()
{
	static class AB_IngameMap_SceneCaptureNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_IngameMap_SceneCaptureNew_C*>(AB_IngameMap_SceneCaptureNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureNew_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureNew_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_IngameMap_SceneCaptureNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureNew_C", "ExecuteUbergraph_B_IngameMap_SceneCaptureNew");

	Params::AB_IngameMap_SceneCaptureNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureNew_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



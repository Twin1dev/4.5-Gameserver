#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C
// (Actor)

class UClass* AB_IngameMap_SceneCaptureBlurryNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_IngameMap_SceneCaptureBlurryNew_C");

	return Clss;
}


// B_IngameMap_SceneCaptureBlurryNew_C B_IngameMap_SceneCaptureBlurryNew.Default__B_IngameMap_SceneCaptureBlurryNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_IngameMap_SceneCaptureBlurryNew_C* AB_IngameMap_SceneCaptureBlurryNew_C::GetDefaultObj()
{
	static class AB_IngameMap_SceneCaptureBlurryNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_IngameMap_SceneCaptureBlurryNew_C*>(AB_IngameMap_SceneCaptureBlurryNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureBlurryNew_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureBlurryNew_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_IngameMap_SceneCaptureBlurryNew_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureBlurryNew_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_IngameMap_SceneCaptureBlurryNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_IngameMap_SceneCaptureBlurryNew_C", "ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew");

	Params::AB_IngameMap_SceneCaptureBlurryNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



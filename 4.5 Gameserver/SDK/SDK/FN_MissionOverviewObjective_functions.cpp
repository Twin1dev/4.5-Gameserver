#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionOverviewObjective.MissionOverviewObjective_C
// (None)

class UClass* UMissionOverviewObjective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionOverviewObjective_C");

	return Clss;
}


// MissionOverviewObjective_C MissionOverviewObjective.Default__MissionOverviewObjective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionOverviewObjective_C* UMissionOverviewObjective_C::GetDefaultObj()
{
	static class UMissionOverviewObjective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionOverviewObjective_C*>(UMissionOverviewObjective_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionOverviewObjective.MissionOverviewObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionOverviewObjective_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionOverviewObjective_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionOverviewObjective.MissionOverviewObjective_C.ExecuteUbergraph_MissionOverviewObjective
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UMissionOverviewObjective_C::ExecuteUbergraph_MissionOverviewObjective(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionOverviewObjective_C", "ExecuteUbergraph_MissionOverviewObjective");

	Params::UMissionOverviewObjective_C_ExecuteUbergraph_MissionOverviewObjective_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



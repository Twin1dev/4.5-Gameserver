#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C
// (None)

class UClass* IMissionObjectiveContentWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveContentWidgetInterface_C");

	return Clss;
}


// MissionObjectiveContentWidgetInterface_C MissionObjectiveContentWidgetInterface.Default__MissionObjectiveContentWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMissionObjectiveContentWidgetInterface_C* IMissionObjectiveContentWidgetInterface_C::GetDefaultObj()
{
	static class IMissionObjectiveContentWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObjectiveContentWidgetInterface_C*>(IMissionObjectiveContentWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMissionObjectiveContentWidgetInterface_C::GetHeightEstimate(float* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveContentWidgetInterface_C", "GetHeightEstimate");

	Params::IMissionObjectiveContentWidgetInterface_C_GetHeightEstimate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInConfigureAsHUD                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IMissionObjectiveContentWidgetInterface_C::Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveContentWidgetInterface_C", "Setup");

	Params::IMissionObjectiveContentWidgetInterface_C_Setup_Params Parms{};

	Parms.Objective = Objective;
	Parms.bInConfigureAsHUD = bInConfigureAsHUD;

	UObject::ProcessEvent(Func, &Parms);

}

}



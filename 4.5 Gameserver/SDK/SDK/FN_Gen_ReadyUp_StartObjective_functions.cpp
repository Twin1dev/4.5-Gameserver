#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
// (None)

class UClass* UGen_ReadyUp_StartObjective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gen_ReadyUp_StartObjective_C");

	return Clss;
}


// Gen_ReadyUp_StartObjective_C Gen_ReadyUp_StartObjective.Default__Gen_ReadyUp_StartObjective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGen_ReadyUp_StartObjective_C* UGen_ReadyUp_StartObjective_C::GetDefaultObj()
{
	static class UGen_ReadyUp_StartObjective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGen_ReadyUp_StartObjective_C*>(UGen_ReadyUp_StartObjective_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReadyUpTimerLength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  InteractSpawnLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FText                        InteractText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BluGloMissionActivationQty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGen_ReadyUp_StartObjective_C*ThisObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_ReadyUp_StartObjective_C::SetParams(float ReadyUpTimerLength, const struct FTransform& InteractSpawnLocation, class FText InteractText, int32 BluGloMissionActivationQty, class UGen_ReadyUp_StartObjective_C** ThisObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gen_ReadyUp_StartObjective_C", "SetParams");

	Params::UGen_ReadyUp_StartObjective_C_SetParams_Params Parms{};

	Parms.ReadyUpTimerLength = ReadyUpTimerLength;
	Parms.InteractSpawnLocation = InteractSpawnLocation;
	Parms.InteractText = InteractText;
	Parms.BluGloMissionActivationQty = BluGloMissionActivationQty;

	UObject::ProcessEvent(Func, &Parms);

	if (ThisObject != nullptr)
		*ThisObject = Parms.ThisObject;

}


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReadyUpTimerLength                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  InteractSpawnLocation                                            (Parm, OutParm, IsPlainOldData, NoDestructor)
// class FText                        InteractText                                                     (Parm, OutParm)
// int32                              BluGloMissionActivationQty                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_ReadyUp_StartObjective_C::BreakParams(float* ReadyUpTimerLength, struct FTransform* InteractSpawnLocation, class FText* InteractText, int32* BluGloMissionActivationQty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gen_ReadyUp_StartObjective_C", "BreakParams");

	Params::UGen_ReadyUp_StartObjective_C_BreakParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReadyUpTimerLength != nullptr)
		*ReadyUpTimerLength = Parms.ReadyUpTimerLength;

	if (InteractSpawnLocation != nullptr)
		*InteractSpawnLocation = std::move(Parms.InteractSpawnLocation);

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

	if (BluGloMissionActivationQty != nullptr)
		*BluGloMissionActivationQty = Parms.BluGloMissionActivationQty;

}

}



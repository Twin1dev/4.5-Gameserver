#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
// (None)

class UClass* UGen_Interact_UnregisterFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gen_Interact_UnregisterFocus_C");

	return Clss;
}


// Gen_Interact_UnregisterFocus_C Gen_Interact_UnregisterFocus.Default__Gen_Interact_UnregisterFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGen_Interact_UnregisterFocus_C* UGen_Interact_UnregisterFocus_C::GetDefaultObj()
{
	static class UGen_Interact_UnregisterFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGen_Interact_UnregisterFocus_C*>(UGen_Interact_UnregisterFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorToUnregisterRegister                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_Interact_UnregisterFocus_C::BreakParams(class AActor** ActorToUnregisterRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gen_Interact_UnregisterFocus_C", "BreakParams");

	Params::UGen_Interact_UnregisterFocus_C_BreakParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActorToUnregisterRegister != nullptr)
		*ActorToUnregisterRegister = Parms.ActorToUnregisterRegister;

}


// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToUnregister                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGen_Interact_UnregisterFocus_C*ThisObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_Interact_UnregisterFocus_C::SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gen_Interact_UnregisterFocus_C", "SetParams");

	Params::UGen_Interact_UnregisterFocus_C_SetParams_Params Parms{};

	Parms.ActorToUnregister = ActorToUnregister;

	UObject::ProcessEvent(Func, &Parms);

	if (ThisObject != nullptr)
		*ThisObject = Parms.ThisObject;

}

}



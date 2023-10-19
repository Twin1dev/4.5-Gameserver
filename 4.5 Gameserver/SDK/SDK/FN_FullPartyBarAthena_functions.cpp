#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C
// (None)

class UClass* UFullPartyBarAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullPartyBarAthena_C");

	return Clss;
}


// FullPartyBarAthena_C FullPartyBarAthena.Default__FullPartyBarAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullPartyBarAthena_C* UFullPartyBarAthena_C::GetDefaultObj()
{
	static class UFullPartyBarAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullPartyBarAthena_C*>(UFullPartyBarAthena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyBarAthena_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyBarAthena_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyBarAthena_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyBarAthena_C", "ExecuteUbergraph_FullPartyBarAthena");

	Params::UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



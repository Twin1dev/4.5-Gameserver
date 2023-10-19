#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DONOTUSE.DONOTUSE_C
// (None)

class UClass* UDONOTUSE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DONOTUSE_C");

	return Clss;
}


// DONOTUSE_C DONOTUSE.Default__DONOTUSE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDONOTUSE_C* UDONOTUSE_C::GetDefaultObj()
{
	static class UDONOTUSE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDONOTUSE_C*>(UDONOTUSE_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DONOTUSE.DONOTUSE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDONOTUSE_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DONOTUSE_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DONOTUSE.DONOTUSE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDONOTUSE_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DONOTUSE_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DONOTUSE.DONOTUSE_C.ExecuteUbergraph_DONOTUSE
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDONOTUSE_C::ExecuteUbergraph_DONOTUSE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DONOTUSE_C", "ExecuteUbergraph_DONOTUSE");

	Params::UDONOTUSE_C_ExecuteUbergraph_DONOTUSE_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinnerOverlay_v2.WinnerOverlay_v2_C
// (None)

class UClass* UWinnerOverlay_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinnerOverlay_v2_C");

	return Clss;
}


// WinnerOverlay_v2_C WinnerOverlay_v2.Default__WinnerOverlay_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinnerOverlay_v2_C* UWinnerOverlay_v2_C::GetDefaultObj()
{
	static class UWinnerOverlay_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinnerOverlay_v2_C*>(UWinnerOverlay_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinnerOverlay_v2_C::PlayVictoryAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinnerOverlay_v2_C", "PlayVictoryAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinnerOverlay_v2_C::ExecuteUbergraph_WinnerOverlay_v2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinnerOverlay_v2_C", "ExecuteUbergraph_WinnerOverlay_v2");

	Params::UWinnerOverlay_v2_C_ExecuteUbergraph_WinnerOverlay_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



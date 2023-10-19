#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActiveModifiersPanelContent.ActiveModifiersPanelContent_C
// (None)

class UClass* UActiveModifiersPanelContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveModifiersPanelContent_C");

	return Clss;
}


// ActiveModifiersPanelContent_C ActiveModifiersPanelContent.Default__ActiveModifiersPanelContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActiveModifiersPanelContent_C* UActiveModifiersPanelContent_C::GetDefaultObj()
{
	static class UActiveModifiersPanelContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveModifiersPanelContent_C*>(UActiveModifiersPanelContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>InModifiers                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Init");

	Params::UActiveModifiersPanelContent_C_Init_Params Parms{};

	Parms.InModifiers = InModifiers;

	UObject::ProcessEvent(Func, &Parms);

}

}



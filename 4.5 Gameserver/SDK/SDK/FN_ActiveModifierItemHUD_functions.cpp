#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
// (None)

class UClass* UActiveModifierItemHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveModifierItemHUD_C");

	return Clss;
}


// ActiveModifierItemHUD_C ActiveModifierItemHUD.Default__ActiveModifierItemHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActiveModifierItemHUD_C* UActiveModifierItemHUD_C::GetDefaultObj()
{
	static class UActiveModifierItemHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveModifierItemHUD_C*>(UActiveModifierItemHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InIconSlateBrush                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UActiveModifierItemHUD_C::AssignIcon(const struct FSlateBrush& InIconSlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveModifierItemHUD_C", "AssignIcon");

	Params::UActiveModifierItemHUD_C_AssignIcon_Params Parms{};

	Parms.InIconSlateBrush = InIconSlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}

}



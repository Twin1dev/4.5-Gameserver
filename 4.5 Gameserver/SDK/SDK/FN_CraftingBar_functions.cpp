#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CraftingBar.CraftingBar_C
// (None)

class UClass* UCraftingBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CraftingBar_C");

	return Clss;
}


// CraftingBar_C CraftingBar.Default__CraftingBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCraftingBar_C* UCraftingBar_C::GetDefaultObj()
{
	static class UCraftingBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCraftingBar_C*>(UCraftingBar_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-HUDLayoutToolOpen.ButtonStyle-HUDLayoutToolOpen_C
// (None)

class UClass* UButtonStyleMinusHUDLayoutToolOpen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-HUDLayoutToolOpen_C");

	return Clss;
}


// ButtonStyle-HUDLayoutToolOpen_C ButtonStyle-HUDLayoutToolOpen.Default__ButtonStyle-HUDLayoutToolOpen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHUDLayoutToolOpen_C* UButtonStyleMinusHUDLayoutToolOpen_C::GetDefaultObj()
{
	static class UButtonStyleMinusHUDLayoutToolOpen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHUDLayoutToolOpen_C*>(UButtonStyleMinusHUDLayoutToolOpen_C::StaticClass()->DefaultObject);

	return Default;
}

}



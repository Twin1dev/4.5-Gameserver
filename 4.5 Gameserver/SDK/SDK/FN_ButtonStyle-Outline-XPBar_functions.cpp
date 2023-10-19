#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-XPBar.ButtonStyle-Outline-XPBar_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusXPBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-XPBar_C");

	return Clss;
}


// ButtonStyle-Outline-XPBar_C ButtonStyle-Outline-XPBar.Default__ButtonStyle-Outline-XPBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusXPBar_C* UButtonStyleMinusOutlineMinusXPBar_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusXPBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusXPBar_C*>(UButtonStyleMinusOutlineMinusXPBar_C::StaticClass()->DefaultObject);

	return Default;
}

}



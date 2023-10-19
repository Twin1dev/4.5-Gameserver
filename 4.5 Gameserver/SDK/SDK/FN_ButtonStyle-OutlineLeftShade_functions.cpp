#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineLeftShade.ButtonStyle-OutlineLeftShade_C
// (None)

class UClass* UButtonStyleMinusOutlineLeftShade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineLeftShade_C");

	return Clss;
}


// ButtonStyle-OutlineLeftShade_C ButtonStyle-OutlineLeftShade.Default__ButtonStyle-OutlineLeftShade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineLeftShade_C* UButtonStyleMinusOutlineLeftShade_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineLeftShade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineLeftShade_C*>(UButtonStyleMinusOutlineLeftShade_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-LeftShade-Red.ButtonStyle-Outline-LeftShade-Red_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-LeftShade-Red_C");

	return Clss;
}


// ButtonStyle-Outline-LeftShade-Red_C ButtonStyle-Outline-LeftShade-Red.Default__ButtonStyle-Outline-LeftShade-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C* UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C*>(UButtonStyleMinusOutlineMinusLeftShadeMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}



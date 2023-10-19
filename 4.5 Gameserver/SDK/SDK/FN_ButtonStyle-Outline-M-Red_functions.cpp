#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-M-Red.ButtonStyle-Outline-M-Red_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusMMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-M-Red_C");

	return Clss;
}


// ButtonStyle-Outline-M-Red_C ButtonStyle-Outline-M-Red.Default__ButtonStyle-Outline-M-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusMMinusRed_C* UButtonStyleMinusOutlineMinusMMinusRed_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusMMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusMMinusRed_C*>(UButtonStyleMinusOutlineMinusMMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}



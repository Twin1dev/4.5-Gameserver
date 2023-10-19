#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-Radio-M-NoText.ButtonStyle-Primary-Radio-M-NoText_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-Radio-M-NoText_C");

	return Clss;
}


// ButtonStyle-Primary-Radio-M-NoText_C ButtonStyle-Primary-Radio-M-NoText.Default__ButtonStyle-Primary-Radio-M-NoText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C* UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C*>(UButtonStyleMinusPrimaryMinusRadioMinusMMinusNoText_C::StaticClass()->DefaultObject);

	return Default;
}

}



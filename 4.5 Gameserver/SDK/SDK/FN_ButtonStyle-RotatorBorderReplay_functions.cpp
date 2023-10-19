#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-RotatorBorderReplay.ButtonStyle-RotatorBorderReplay_C
// (None)

class UClass* UButtonStyleMinusRotatorBorderReplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-RotatorBorderReplay_C");

	return Clss;
}


// ButtonStyle-RotatorBorderReplay_C ButtonStyle-RotatorBorderReplay.Default__ButtonStyle-RotatorBorderReplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorBorderReplay_C* UButtonStyleMinusRotatorBorderReplay_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorBorderReplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorBorderReplay_C*>(UButtonStyleMinusRotatorBorderReplay_C::StaticClass()->DefaultObject);

	return Default;
}

}



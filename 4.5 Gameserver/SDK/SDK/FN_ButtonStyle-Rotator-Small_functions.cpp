#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Rotator-Small.ButtonStyle-Rotator-Small_C
// (None)

class UClass* UButtonStyleMinusRotatorMinusSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Rotator-Small_C");

	return Clss;
}


// ButtonStyle-Rotator-Small_C ButtonStyle-Rotator-Small.Default__ButtonStyle-Rotator-Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorMinusSmall_C* UButtonStyleMinusRotatorMinusSmall_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorMinusSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorMinusSmall_C*>(UButtonStyleMinusRotatorMinusSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}



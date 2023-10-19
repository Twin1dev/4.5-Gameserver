#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Green-LargeBacchus.ButtonStyle-Outline-Green-LargeBacchus_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Green-LargeBacchus_C");

	return Clss;
}


// ButtonStyle-Outline-Green-LargeBacchus_C ButtonStyle-Outline-Green-LargeBacchus.Default__ButtonStyle-Outline-Green-LargeBacchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C* UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C*>(UButtonStyleMinusOutlineMinusGreenMinusLargeBacchus_C::StaticClass()->DefaultObject);

	return Default;
}

}



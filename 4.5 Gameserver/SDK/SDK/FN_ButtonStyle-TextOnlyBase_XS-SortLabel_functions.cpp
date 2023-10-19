#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_XS-SortLabel.ButtonStyle-TextOnlyBase_XS-SortLabel_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_XS-SortLabel_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_XS-SortLabel_C ButtonStyle-TextOnlyBase_XS-SortLabel.Default__ButtonStyle-TextOnlyBase_XS-SortLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C* UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C*>(UButtonStyleMinusTextOnlyBase_XSMinusSortLabel_C::StaticClass()->DefaultObject);

	return Default;
}

}



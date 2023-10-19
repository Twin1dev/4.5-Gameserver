#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_XS-SortLabelLight.ButtonStyle-TextOnlyBase_XS-SortLabelLight_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_XS-SortLabelLight_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_XS-SortLabelLight_C ButtonStyle-TextOnlyBase_XS-SortLabelLight.Default__ButtonStyle-TextOnlyBase_XS-SortLabelLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C* UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C*>(UButtonStyleMinusTextOnlyBase_XSMinusSortLabelLight_C::StaticClass()->DefaultObject);

	return Default;
}

}



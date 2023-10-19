#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_XS-B_Blue.ButtonStyle-TextOnlyBase_XS-B_Blue_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_XS-B_Blue_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_XS-B_Blue_C ButtonStyle-TextOnlyBase_XS-B_Blue.Default__ButtonStyle-TextOnlyBase_XS-B_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C* UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C*>(UButtonStyleMinusTextOnlyBase_XSMinusB_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}



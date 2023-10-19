#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_XS-B.ButtonStyle-TextOnlyBase_XS-B_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_XSMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_XS-B_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_XS-B_C ButtonStyle-TextOnlyBase_XS-B.Default__ButtonStyle-TextOnlyBase_XS-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_XSMinusB_C* UButtonStyleMinusTextOnlyBase_XSMinusB_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_XSMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_XSMinusB_C*>(UButtonStyleMinusTextOnlyBase_XSMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_S-B_Blue.ButtonStyle-TextOnlyBase_S-B_Blue_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_S-B_Blue_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_S-B_Blue_C ButtonStyle-TextOnlyBase_S-B_Blue.Default__ButtonStyle-TextOnlyBase_S-B_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C* UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C*>(UButtonStyleMinusTextOnlyBase_SMinusB_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}



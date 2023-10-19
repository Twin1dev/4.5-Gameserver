#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// (None)

class UClass* UAthenaCustomizationPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationPicker_C");

	return Clss;
}


// AthenaCustomizationPicker_C AthenaCustomizationPicker.Default__AthenaCustomizationPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationPicker_C* UAthenaCustomizationPicker_C::GetDefaultObj()
{
	static class UAthenaCustomizationPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationPicker_C*>(UAthenaCustomizationPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}



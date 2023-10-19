#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-S-CheckBox.ButtonStyle-Outline-S-CheckBox_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusSMinusCheckBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-S-CheckBox_C");

	return Clss;
}


// ButtonStyle-Outline-S-CheckBox_C ButtonStyle-Outline-S-CheckBox.Default__ButtonStyle-Outline-S-CheckBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusSMinusCheckBox_C* UButtonStyleMinusOutlineMinusSMinusCheckBox_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusSMinusCheckBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusSMinusCheckBox_C*>(UButtonStyleMinusOutlineMinusSMinusCheckBox_C::StaticClass()->DefaultObject);

	return Default;
}

}



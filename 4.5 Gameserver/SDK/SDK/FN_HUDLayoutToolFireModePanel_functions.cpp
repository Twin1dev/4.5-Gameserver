#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
// (None)

class UClass* UHUDLayoutToolFireModePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolFireModePanel_C");

	return Clss;
}


// HUDLayoutToolFireModePanel_C HUDLayoutToolFireModePanel.Default__HUDLayoutToolFireModePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolFireModePanel_C* UHUDLayoutToolFireModePanel_C::GetDefaultObj()
{
	static class UHUDLayoutToolFireModePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolFireModePanel_C*>(UHUDLayoutToolFireModePanel_C::StaticClass()->DefaultObject);

	return Default;
}

}



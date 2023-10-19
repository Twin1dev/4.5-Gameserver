#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NetDebugUI.NetDebugUI_C
// (None)

class UClass* UNetDebugUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDebugUI_C");

	return Clss;
}


// NetDebugUI_C NetDebugUI.Default__NetDebugUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNetDebugUI_C* UNetDebugUI_C::GetDefaultObj()
{
	static class UNetDebugUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDebugUI_C*>(UNetDebugUI_C::StaticClass()->DefaultObject);

	return Default;
}

}



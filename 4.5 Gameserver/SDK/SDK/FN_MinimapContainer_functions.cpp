#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimapContainer.MinimapContainer_C
// (None)

class UClass* UMinimapContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapContainer_C");

	return Clss;
}


// MinimapContainer_C MinimapContainer.Default__MinimapContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapContainer_C* UMinimapContainer_C::GetDefaultObj()
{
	static class UMinimapContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapContainer_C*>(UMinimapContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}



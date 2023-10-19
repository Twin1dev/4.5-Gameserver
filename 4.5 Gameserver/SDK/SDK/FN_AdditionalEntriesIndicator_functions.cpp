#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AdditionalEntriesIndicator.AdditionalEntriesIndicator_C
// (None)

class UClass* UAdditionalEntriesIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdditionalEntriesIndicator_C");

	return Clss;
}


// AdditionalEntriesIndicator_C AdditionalEntriesIndicator.Default__AdditionalEntriesIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdditionalEntriesIndicator_C* UAdditionalEntriesIndicator_C::GetDefaultObj()
{
	static class UAdditionalEntriesIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdditionalEntriesIndicator_C*>(UAdditionalEntriesIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}



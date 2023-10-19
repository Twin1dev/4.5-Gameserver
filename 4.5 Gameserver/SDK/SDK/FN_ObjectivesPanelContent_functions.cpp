#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ObjectivesPanelContent.ObjectivesPanelContent_C
// (None)

class UClass* UObjectivesPanelContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectivesPanelContent_C");

	return Clss;
}


// ObjectivesPanelContent_C ObjectivesPanelContent.Default__ObjectivesPanelContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UObjectivesPanelContent_C* UObjectivesPanelContent_C::GetDefaultObj()
{
	static class UObjectivesPanelContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectivesPanelContent_C*>(UObjectivesPanelContent_C::StaticClass()->DefaultObject);

	return Default;
}

}



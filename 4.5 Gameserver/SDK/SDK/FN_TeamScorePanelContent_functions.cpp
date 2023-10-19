#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamScorePanelContent.TeamScorePanelContent_C
// (None)

class UClass* UTeamScorePanelContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamScorePanelContent_C");

	return Clss;
}


// TeamScorePanelContent_C TeamScorePanelContent.Default__TeamScorePanelContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamScorePanelContent_C* UTeamScorePanelContent_C::GetDefaultObj()
{
	static class UTeamScorePanelContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamScorePanelContent_C*>(UTeamScorePanelContent_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboardHeaderRowWidget.AthenaSpectatorScoreboardHeaderRowWidget_C
// (None)

class UClass* UAthenaSpectatorScoreboardHeaderRowWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSpectatorScoreboardHeaderRowWidget_C");

	return Clss;
}


// AthenaSpectatorScoreboardHeaderRowWidget_C AthenaSpectatorScoreboardHeaderRowWidget.Default__AthenaSpectatorScoreboardHeaderRowWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSpectatorScoreboardHeaderRowWidget_C* UAthenaSpectatorScoreboardHeaderRowWidget_C::GetDefaultObj()
{
	static class UAthenaSpectatorScoreboardHeaderRowWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSpectatorScoreboardHeaderRowWidget_C*>(UAthenaSpectatorScoreboardHeaderRowWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}



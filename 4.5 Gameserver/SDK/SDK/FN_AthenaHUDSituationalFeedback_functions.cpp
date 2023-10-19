#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C
// (None)

class UClass* UAthenaHUDSituationalFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDSituationalFeedback_C");

	return Clss;
}


// AthenaHUDSituationalFeedback_C AthenaHUDSituationalFeedback.Default__AthenaHUDSituationalFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDSituationalFeedback_C* UAthenaHUDSituationalFeedback_C::GetDefaultObj()
{
	static class UAthenaHUDSituationalFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDSituationalFeedback_C*>(UAthenaHUDSituationalFeedback_C::StaticClass()->DefaultObject);

	return Default;
}

}



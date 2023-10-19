#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReplayBrowserOldReplayDisclaimer.AthenaReplayBrowserOldReplayDisclaimer_C
// (None)

class UClass* UAthenaReplayBrowserOldReplayDisclaimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReplayBrowserOldReplayDisclaimer_C");

	return Clss;
}


// AthenaReplayBrowserOldReplayDisclaimer_C AthenaReplayBrowserOldReplayDisclaimer.Default__AthenaReplayBrowserOldReplayDisclaimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReplayBrowserOldReplayDisclaimer_C* UAthenaReplayBrowserOldReplayDisclaimer_C::GetDefaultObj()
{
	static class UAthenaReplayBrowserOldReplayDisclaimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReplayBrowserOldReplayDisclaimer_C*>(UAthenaReplayBrowserOldReplayDisclaimer_C::StaticClass()->DefaultObject);

	return Default;
}

}



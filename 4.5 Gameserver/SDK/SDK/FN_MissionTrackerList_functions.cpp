#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionTrackerList.MissionTrackerList_C
// (None)

class UClass* UMissionTrackerList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTrackerList_C");

	return Clss;
}


// MissionTrackerList_C MissionTrackerList.Default__MissionTrackerList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionTrackerList_C* UMissionTrackerList_C::GetDefaultObj()
{
	static class UMissionTrackerList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionTrackerList_C*>(UMissionTrackerList_C::StaticClass()->DefaultObject);

	return Default;
}

}



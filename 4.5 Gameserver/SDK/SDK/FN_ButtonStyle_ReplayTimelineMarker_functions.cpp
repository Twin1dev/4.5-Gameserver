#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_ReplayTimelineMarker.ButtonStyle_ReplayTimelineMarker_C
// (None)

class UClass* UButtonStyle_ReplayTimelineMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_ReplayTimelineMarker_C");

	return Clss;
}


// ButtonStyle_ReplayTimelineMarker_C ButtonStyle_ReplayTimelineMarker.Default__ButtonStyle_ReplayTimelineMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_ReplayTimelineMarker_C* UButtonStyle_ReplayTimelineMarker_C::GetDefaultObj()
{
	static class UButtonStyle_ReplayTimelineMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_ReplayTimelineMarker_C*>(UButtonStyle_ReplayTimelineMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}



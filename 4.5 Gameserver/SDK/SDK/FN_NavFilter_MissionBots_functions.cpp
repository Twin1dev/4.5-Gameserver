#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_MissionBots.NavFilter_MissionBots_C
// (None)

class UClass* UNavFilter_MissionBots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_MissionBots_C");

	return Clss;
}


// NavFilter_MissionBots_C NavFilter_MissionBots.Default__NavFilter_MissionBots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_MissionBots_C* UNavFilter_MissionBots_C::GetDefaultObj()
{
	static class UNavFilter_MissionBots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_MissionBots_C*>(UNavFilter_MissionBots_C::StaticClass()->DefaultObject);

	return Default;
}

}



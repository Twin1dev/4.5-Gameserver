#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_TakerUsePortals.NavFilter_TakerUsePortals_C
// (None)

class UClass* UNavFilter_TakerUsePortals_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_TakerUsePortals_C");

	return Clss;
}


// NavFilter_TakerUsePortals_C NavFilter_TakerUsePortals.Default__NavFilter_TakerUsePortals_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_TakerUsePortals_C* UNavFilter_TakerUsePortals_C::GetDefaultObj()
{
	static class UNavFilter_TakerUsePortals_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_TakerUsePortals_C*>(UNavFilter_TakerUsePortals_C::StaticClass()->DefaultObject);

	return Default;
}

}



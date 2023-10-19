#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_SmasherCheapWalls.NavFilter_SmasherCheapWalls_C
// (None)

class UClass* UNavFilter_SmasherCheapWalls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_SmasherCheapWalls_C");

	return Clss;
}


// NavFilter_SmasherCheapWalls_C NavFilter_SmasherCheapWalls.Default__NavFilter_SmasherCheapWalls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_SmasherCheapWalls_C* UNavFilter_SmasherCheapWalls_C::GetDefaultObj()
{
	static class UNavFilter_SmasherCheapWalls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_SmasherCheapWalls_C*>(UNavFilter_SmasherCheapWalls_C::StaticClass()->DefaultObject);

	return Default;
}

}



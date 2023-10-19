#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskFloorMelee.GAB_HuskFloorMelee_C
// (None)

class UClass* UGAB_HuskFloorMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskFloorMelee_C");

	return Clss;
}


// GAB_HuskFloorMelee_C GAB_HuskFloorMelee.Default__GAB_HuskFloorMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskFloorMelee_C* UGAB_HuskFloorMelee_C::GetDefaultObj()
{
	static class UGAB_HuskFloorMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskFloorMelee_C*>(UGAB_HuskFloorMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



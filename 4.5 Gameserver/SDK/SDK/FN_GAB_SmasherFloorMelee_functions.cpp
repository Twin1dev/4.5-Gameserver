#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherFloorMelee.GAB_SmasherFloorMelee_C
// (None)

class UClass* UGAB_SmasherFloorMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherFloorMelee_C");

	return Clss;
}


// GAB_SmasherFloorMelee_C GAB_SmasherFloorMelee.Default__GAB_SmasherFloorMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherFloorMelee_C* UGAB_SmasherFloorMelee_C::GetDefaultObj()
{
	static class UGAB_SmasherFloorMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherFloorMelee_C*>(UGAB_SmasherFloorMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



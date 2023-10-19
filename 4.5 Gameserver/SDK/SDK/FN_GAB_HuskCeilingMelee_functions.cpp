#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskCeilingMelee.GAB_HuskCeilingMelee_C
// (None)

class UClass* UGAB_HuskCeilingMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskCeilingMelee_C");

	return Clss;
}


// GAB_HuskCeilingMelee_C GAB_HuskCeilingMelee.Default__GAB_HuskCeilingMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskCeilingMelee_C* UGAB_HuskCeilingMelee_C::GetDefaultObj()
{
	static class UGAB_HuskCeilingMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskCeilingMelee_C*>(UGAB_HuskCeilingMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



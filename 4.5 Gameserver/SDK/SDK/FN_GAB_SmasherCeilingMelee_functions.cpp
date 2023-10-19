#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherCeilingMelee.GAB_SmasherCeilingMelee_C
// (None)

class UClass* UGAB_SmasherCeilingMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherCeilingMelee_C");

	return Clss;
}


// GAB_SmasherCeilingMelee_C GAB_SmasherCeilingMelee.Default__GAB_SmasherCeilingMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherCeilingMelee_C* UGAB_SmasherCeilingMelee_C::GetDefaultObj()
{
	static class UGAB_SmasherCeilingMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherCeilingMelee_C*>(UGAB_SmasherCeilingMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherWallMelee.GAB_SmasherWallMelee_C
// (None)

class UClass* UGAB_SmasherWallMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherWallMelee_C");

	return Clss;
}


// GAB_SmasherWallMelee_C GAB_SmasherWallMelee.Default__GAB_SmasherWallMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherWallMelee_C* UGAB_SmasherWallMelee_C::GetDefaultObj()
{
	static class UGAB_SmasherWallMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherWallMelee_C*>(UGAB_SmasherWallMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



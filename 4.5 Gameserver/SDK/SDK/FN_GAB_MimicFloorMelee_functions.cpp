#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_MimicFloorMelee.GAB_MimicFloorMelee_C
// (None)

class UClass* UGAB_MimicFloorMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_MimicFloorMelee_C");

	return Clss;
}


// GAB_MimicFloorMelee_C GAB_MimicFloorMelee.Default__GAB_MimicFloorMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_MimicFloorMelee_C* UGAB_MimicFloorMelee_C::GetDefaultObj()
{
	static class UGAB_MimicFloorMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_MimicFloorMelee_C*>(UGAB_MimicFloorMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



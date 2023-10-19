#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_MimicRadialMelee.GAB_MimicRadialMelee_C
// (None)

class UClass* UGAB_MimicRadialMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_MimicRadialMelee_C");

	return Clss;
}


// GAB_MimicRadialMelee_C GAB_MimicRadialMelee.Default__GAB_MimicRadialMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_MimicRadialMelee_C* UGAB_MimicRadialMelee_C::GetDefaultObj()
{
	static class UGAB_MimicRadialMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_MimicRadialMelee_C*>(UGAB_MimicRadialMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



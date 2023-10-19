#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_MimicCeilingMelee.GAB_MimicCeilingMelee_C
// (None)

class UClass* UGAB_MimicCeilingMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_MimicCeilingMelee_C");

	return Clss;
}


// GAB_MimicCeilingMelee_C GAB_MimicCeilingMelee.Default__GAB_MimicCeilingMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_MimicCeilingMelee_C* UGAB_MimicCeilingMelee_C::GetDefaultObj()
{
	static class UGAB_MimicCeilingMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_MimicCeilingMelee_C*>(UGAB_MimicCeilingMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



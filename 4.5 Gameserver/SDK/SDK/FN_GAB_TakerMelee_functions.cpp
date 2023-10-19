#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerMelee.GAB_TakerMelee_C
// (None)

class UClass* UGAB_TakerMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerMelee_C");

	return Clss;
}


// GAB_TakerMelee_C GAB_TakerMelee.Default__GAB_TakerMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerMelee_C* UGAB_TakerMelee_C::GetDefaultObj()
{
	static class UGAB_TakerMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerMelee_C*>(UGAB_TakerMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



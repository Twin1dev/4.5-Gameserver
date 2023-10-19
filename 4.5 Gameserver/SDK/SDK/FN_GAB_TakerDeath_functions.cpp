#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerDeath.GAB_TakerDeath_C
// (None)

class UClass* UGAB_TakerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerDeath_C");

	return Clss;
}


// GAB_TakerDeath_C GAB_TakerDeath.Default__GAB_TakerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerDeath_C* UGAB_TakerDeath_C::GetDefaultObj()
{
	static class UGAB_TakerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerDeath_C*>(UGAB_TakerDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_ShielderDeath.GAB_ShielderDeath_C
// (None)

class UClass* UGAB_ShielderDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_ShielderDeath_C");

	return Clss;
}


// GAB_ShielderDeath_C GAB_ShielderDeath.Default__GAB_ShielderDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_ShielderDeath_C* UGAB_ShielderDeath_C::GetDefaultObj()
{
	static class UGAB_ShielderDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_ShielderDeath_C*>(UGAB_ShielderDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}



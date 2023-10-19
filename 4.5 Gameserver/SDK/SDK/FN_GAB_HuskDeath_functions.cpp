#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskDeath.GAB_HuskDeath_C
// (None)

class UClass* UGAB_HuskDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskDeath_C");

	return Clss;
}


// GAB_HuskDeath_C GAB_HuskDeath.Default__GAB_HuskDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskDeath_C* UGAB_HuskDeath_C::GetDefaultObj()
{
	static class UGAB_HuskDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskDeath_C*>(UGAB_HuskDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}



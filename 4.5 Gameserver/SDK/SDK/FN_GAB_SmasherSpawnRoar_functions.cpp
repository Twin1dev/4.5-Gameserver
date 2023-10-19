#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherSpawnRoar.GAB_SmasherSpawnRoar_C
// (None)

class UClass* UGAB_SmasherSpawnRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherSpawnRoar_C");

	return Clss;
}


// GAB_SmasherSpawnRoar_C GAB_SmasherSpawnRoar.Default__GAB_SmasherSpawnRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherSpawnRoar_C* UGAB_SmasherSpawnRoar_C::GetDefaultObj()
{
	static class UGAB_SmasherSpawnRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherSpawnRoar_C*>(UGAB_SmasherSpawnRoar_C::StaticClass()->DefaultObject);

	return Default;
}

}



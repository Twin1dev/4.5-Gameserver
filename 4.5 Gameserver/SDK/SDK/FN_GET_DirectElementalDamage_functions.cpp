#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectElementalDamage.GET_DirectElementalDamage_C
// (None)

class UClass* UGET_DirectElementalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectElementalDamage_C");

	return Clss;
}


// GET_DirectElementalDamage_C GET_DirectElementalDamage.Default__GET_DirectElementalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectElementalDamage_C* UGET_DirectElementalDamage_C::GetDefaultObj()
{
	static class UGET_DirectElementalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectElementalDamage_C*>(UGET_DirectElementalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



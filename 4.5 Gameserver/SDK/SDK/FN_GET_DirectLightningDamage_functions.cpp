#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectLightningDamage.GET_DirectLightningDamage_C
// (None)

class UClass* UGET_DirectLightningDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectLightningDamage_C");

	return Clss;
}


// GET_DirectLightningDamage_C GET_DirectLightningDamage.Default__GET_DirectLightningDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectLightningDamage_C* UGET_DirectLightningDamage_C::GetDefaultObj()
{
	static class UGET_DirectLightningDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectLightningDamage_C*>(UGET_DirectLightningDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



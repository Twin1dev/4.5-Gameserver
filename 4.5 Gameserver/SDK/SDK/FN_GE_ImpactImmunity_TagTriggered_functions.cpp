#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ImpactImmunity_TagTriggered.GE_ImpactImmunity_TagTriggered_C
// (None)

class UClass* UGE_ImpactImmunity_TagTriggered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ImpactImmunity_TagTriggered_C");

	return Clss;
}


// GE_ImpactImmunity_TagTriggered_C GE_ImpactImmunity_TagTriggered.Default__GE_ImpactImmunity_TagTriggered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ImpactImmunity_TagTriggered_C* UGE_ImpactImmunity_TagTriggered_C::GetDefaultObj()
{
	static class UGE_ImpactImmunity_TagTriggered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ImpactImmunity_TagTriggered_C*>(UGE_ImpactImmunity_TagTriggered_C::StaticClass()->DefaultObject);

	return Default;
}

}



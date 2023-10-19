#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DirectCreatureDamage_DamageObjectives.GE_DirectCreatureDamage_DamageObjectives_C
// (None)

class UClass* UGE_DirectCreatureDamage_DamageObjectives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DirectCreatureDamage_DamageObjectives_C");

	return Clss;
}


// GE_DirectCreatureDamage_DamageObjectives_C GE_DirectCreatureDamage_DamageObjectives.Default__GE_DirectCreatureDamage_DamageObjectives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DirectCreatureDamage_DamageObjectives_C* UGE_DirectCreatureDamage_DamageObjectives_C::GetDefaultObj()
{
	static class UGE_DirectCreatureDamage_DamageObjectives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DirectCreatureDamage_DamageObjectives_C*>(UGE_DirectCreatureDamage_DamageObjectives_C::StaticClass()->DefaultObject);

	return Default;
}

}



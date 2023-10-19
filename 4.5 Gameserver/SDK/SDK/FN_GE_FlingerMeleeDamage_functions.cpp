#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C
// (None)

class UClass* UGE_FlingerMeleeDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FlingerMeleeDamage_C");

	return Clss;
}


// GE_FlingerMeleeDamage_C GE_FlingerMeleeDamage.Default__GE_FlingerMeleeDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FlingerMeleeDamage_C* UGE_FlingerMeleeDamage_C::GetDefaultObj()
{
	static class UGE_FlingerMeleeDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FlingerMeleeDamage_C*>(UGE_FlingerMeleeDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



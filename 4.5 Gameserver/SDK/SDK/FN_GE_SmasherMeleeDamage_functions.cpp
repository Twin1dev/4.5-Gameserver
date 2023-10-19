#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherMeleeDamage.GE_SmasherMeleeDamage_C
// (None)

class UClass* UGE_SmasherMeleeDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherMeleeDamage_C");

	return Clss;
}


// GE_SmasherMeleeDamage_C GE_SmasherMeleeDamage.Default__GE_SmasherMeleeDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherMeleeDamage_C* UGE_SmasherMeleeDamage_C::GetDefaultObj()
{
	static class UGE_SmasherMeleeDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherMeleeDamage_C*>(UGE_SmasherMeleeDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



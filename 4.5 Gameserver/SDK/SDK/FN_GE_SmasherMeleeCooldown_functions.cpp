#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherMeleeCooldown.GE_SmasherMeleeCooldown_C
// (None)

class UClass* UGE_SmasherMeleeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherMeleeCooldown_C");

	return Clss;
}


// GE_SmasherMeleeCooldown_C GE_SmasherMeleeCooldown.Default__GE_SmasherMeleeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherMeleeCooldown_C* UGE_SmasherMeleeCooldown_C::GetDefaultObj()
{
	static class UGE_SmasherMeleeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherMeleeCooldown_C*>(UGE_SmasherMeleeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



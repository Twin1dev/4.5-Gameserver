#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HuskMeleeCooldown.GE_HuskMeleeCooldown_C
// (None)

class UClass* UGE_HuskMeleeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HuskMeleeCooldown_C");

	return Clss;
}


// GE_HuskMeleeCooldown_C GE_HuskMeleeCooldown.Default__GE_HuskMeleeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HuskMeleeCooldown_C* UGE_HuskMeleeCooldown_C::GetDefaultObj()
{
	static class UGE_HuskMeleeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HuskMeleeCooldown_C*>(UGE_HuskMeleeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



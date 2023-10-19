#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HuskPitcherRangedCooldown.GE_HuskPitcherRangedCooldown_C
// (None)

class UClass* UGE_HuskPitcherRangedCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HuskPitcherRangedCooldown_C");

	return Clss;
}


// GE_HuskPitcherRangedCooldown_C GE_HuskPitcherRangedCooldown.Default__GE_HuskPitcherRangedCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HuskPitcherRangedCooldown_C* UGE_HuskPitcherRangedCooldown_C::GetDefaultObj()
{
	static class UGE_HuskPitcherRangedCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HuskPitcherRangedCooldown_C*>(UGE_HuskPitcherRangedCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



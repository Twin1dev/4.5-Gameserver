#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FlingerMeleeSwipeCooldown.GE_FlingerMeleeSwipeCooldown_C
// (None)

class UClass* UGE_FlingerMeleeSwipeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FlingerMeleeSwipeCooldown_C");

	return Clss;
}


// GE_FlingerMeleeSwipeCooldown_C GE_FlingerMeleeSwipeCooldown.Default__GE_FlingerMeleeSwipeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FlingerMeleeSwipeCooldown_C* UGE_FlingerMeleeSwipeCooldown_C::GetDefaultObj()
{
	static class UGE_FlingerMeleeSwipeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FlingerMeleeSwipeCooldown_C*>(UGE_FlingerMeleeSwipeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



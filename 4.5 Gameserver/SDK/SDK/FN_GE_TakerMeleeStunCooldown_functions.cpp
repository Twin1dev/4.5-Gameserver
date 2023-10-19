#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerMeleeStunCooldown.GE_TakerMeleeStunCooldown_C
// (None)

class UClass* UGE_TakerMeleeStunCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerMeleeStunCooldown_C");

	return Clss;
}


// GE_TakerMeleeStunCooldown_C GE_TakerMeleeStunCooldown.Default__GE_TakerMeleeStunCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerMeleeStunCooldown_C* UGE_TakerMeleeStunCooldown_C::GetDefaultObj()
{
	static class UGE_TakerMeleeStunCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerMeleeStunCooldown_C*>(UGE_TakerMeleeStunCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



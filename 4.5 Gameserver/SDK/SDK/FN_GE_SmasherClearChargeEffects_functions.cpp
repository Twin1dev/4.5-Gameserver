#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherClearChargeEffects.GE_SmasherClearChargeEffects_C
// (None)

class UClass* UGE_SmasherClearChargeEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherClearChargeEffects_C");

	return Clss;
}


// GE_SmasherClearChargeEffects_C GE_SmasherClearChargeEffects.Default__GE_SmasherClearChargeEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherClearChargeEffects_C* UGE_SmasherClearChargeEffects_C::GetDefaultObj()
{
	static class UGE_SmasherClearChargeEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherClearChargeEffects_C*>(UGE_SmasherClearChargeEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}



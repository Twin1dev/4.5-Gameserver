#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InstantHeal.GE_InstantHeal_C
// (None)

class UClass* UGE_InstantHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InstantHeal_C");

	return Clss;
}


// GE_InstantHeal_C GE_InstantHeal.Default__GE_InstantHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InstantHeal_C* UGE_InstantHeal_C::GetDefaultObj()
{
	static class UGE_InstantHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InstantHeal_C*>(UGE_InstantHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



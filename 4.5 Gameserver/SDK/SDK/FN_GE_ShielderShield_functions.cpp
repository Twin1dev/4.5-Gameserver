#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShielderShield.GE_ShielderShield_C
// (None)

class UClass* UGE_ShielderShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShielderShield_C");

	return Clss;
}


// GE_ShielderShield_C GE_ShielderShield.Default__GE_ShielderShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShielderShield_C* UGE_ShielderShield_C::GetDefaultObj()
{
	static class UGE_ShielderShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShielderShield_C*>(UGE_ShielderShield_C::StaticClass()->DefaultObject);

	return Default;
}

}



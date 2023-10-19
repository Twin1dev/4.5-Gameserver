#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Smasher_FloorMeleeCooldown_TEMP.GE_Smasher_FloorMeleeCooldown_TEMP_C
// (None)

class UClass* UGE_Smasher_FloorMeleeCooldown_TEMP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Smasher_FloorMeleeCooldown_TEMP_C");

	return Clss;
}


// GE_Smasher_FloorMeleeCooldown_TEMP_C GE_Smasher_FloorMeleeCooldown_TEMP.Default__GE_Smasher_FloorMeleeCooldown_TEMP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Smasher_FloorMeleeCooldown_TEMP_C* UGE_Smasher_FloorMeleeCooldown_TEMP_C::GetDefaultObj()
{
	static class UGE_Smasher_FloorMeleeCooldown_TEMP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Smasher_FloorMeleeCooldown_TEMP_C*>(UGE_Smasher_FloorMeleeCooldown_TEMP_C::StaticClass()->DefaultObject);

	return Default;
}

}



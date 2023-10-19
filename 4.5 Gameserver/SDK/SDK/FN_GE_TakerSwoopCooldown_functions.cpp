#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerSwoopCooldown.GE_TakerSwoopCooldown_C
// (None)

class UClass* UGE_TakerSwoopCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerSwoopCooldown_C");

	return Clss;
}


// GE_TakerSwoopCooldown_C GE_TakerSwoopCooldown.Default__GE_TakerSwoopCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerSwoopCooldown_C* UGE_TakerSwoopCooldown_C::GetDefaultObj()
{
	static class UGE_TakerSwoopCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerSwoopCooldown_C*>(UGE_TakerSwoopCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



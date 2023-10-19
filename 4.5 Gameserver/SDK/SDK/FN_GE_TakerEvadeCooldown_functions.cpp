#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerEvadeCooldown.GE_TakerEvadeCooldown_C
// (None)

class UClass* UGE_TakerEvadeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerEvadeCooldown_C");

	return Clss;
}


// GE_TakerEvadeCooldown_C GE_TakerEvadeCooldown.Default__GE_TakerEvadeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerEvadeCooldown_C* UGE_TakerEvadeCooldown_C::GetDefaultObj()
{
	static class UGE_TakerEvadeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerEvadeCooldown_C*>(UGE_TakerEvadeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



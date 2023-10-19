#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerSoulSuckHeal.GE_TakerSoulSuckHeal_C
// (None)

class UClass* UGE_TakerSoulSuckHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerSoulSuckHeal_C");

	return Clss;
}


// GE_TakerSoulSuckHeal_C GE_TakerSoulSuckHeal.Default__GE_TakerSoulSuckHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerSoulSuckHeal_C* UGE_TakerSoulSuckHeal_C::GetDefaultObj()
{
	static class UGE_TakerSoulSuckHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerSoulSuckHeal_C*>(UGE_TakerSoulSuckHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



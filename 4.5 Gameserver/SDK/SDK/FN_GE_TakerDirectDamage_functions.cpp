#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerDirectDamage.GE_TakerDirectDamage_C
// (None)

class UClass* UGE_TakerDirectDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerDirectDamage_C");

	return Clss;
}


// GE_TakerDirectDamage_C GE_TakerDirectDamage.Default__GE_TakerDirectDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerDirectDamage_C* UGE_TakerDirectDamage_C::GetDefaultObj()
{
	static class UGE_TakerDirectDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerDirectDamage_C*>(UGE_TakerDirectDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



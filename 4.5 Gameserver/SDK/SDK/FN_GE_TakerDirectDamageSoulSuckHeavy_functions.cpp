#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerDirectDamageSoulSuckHeavy.GE_TakerDirectDamageSoulSuckHeavy_C
// (None)

class UClass* UGE_TakerDirectDamageSoulSuckHeavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerDirectDamageSoulSuckHeavy_C");

	return Clss;
}


// GE_TakerDirectDamageSoulSuckHeavy_C GE_TakerDirectDamageSoulSuckHeavy.Default__GE_TakerDirectDamageSoulSuckHeavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerDirectDamageSoulSuckHeavy_C* UGE_TakerDirectDamageSoulSuckHeavy_C::GetDefaultObj()
{
	static class UGE_TakerDirectDamageSoulSuckHeavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerDirectDamageSoulSuckHeavy_C*>(UGE_TakerDirectDamageSoulSuckHeavy_C::StaticClass()->DefaultObject);

	return Default;
}

}



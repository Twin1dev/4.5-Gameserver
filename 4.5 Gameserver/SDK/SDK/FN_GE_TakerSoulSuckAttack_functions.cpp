#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerSoulSuckAttack.GE_TakerSoulSuckAttack_C
// (None)

class UClass* UGE_TakerSoulSuckAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerSoulSuckAttack_C");

	return Clss;
}


// GE_TakerSoulSuckAttack_C GE_TakerSoulSuckAttack.Default__GE_TakerSoulSuckAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerSoulSuckAttack_C* UGE_TakerSoulSuckAttack_C::GetDefaultObj()
{
	static class UGE_TakerSoulSuckAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerSoulSuckAttack_C*>(UGE_TakerSoulSuckAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerApplyKnockback.GAB_TakerApplyKnockback_C
// (None)

class UClass* UGAB_TakerApplyKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerApplyKnockback_C");

	return Clss;
}


// GAB_TakerApplyKnockback_C GAB_TakerApplyKnockback.Default__GAB_TakerApplyKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerApplyKnockback_C* UGAB_TakerApplyKnockback_C::GetDefaultObj()
{
	static class UGAB_TakerApplyKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerApplyKnockback_C*>(UGAB_TakerApplyKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



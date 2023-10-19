#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SmasherApplyKnockback.GAB_SmasherApplyKnockback_C
// (None)

class UClass* UGAB_SmasherApplyKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SmasherApplyKnockback_C");

	return Clss;
}


// GAB_SmasherApplyKnockback_C GAB_SmasherApplyKnockback.Default__GAB_SmasherApplyKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SmasherApplyKnockback_C* UGAB_SmasherApplyKnockback_C::GetDefaultObj()
{
	static class UGAB_SmasherApplyKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SmasherApplyKnockback_C*>(UGAB_SmasherApplyKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



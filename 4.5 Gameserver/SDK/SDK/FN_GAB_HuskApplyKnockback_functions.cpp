#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskApplyKnockback.GAB_HuskApplyKnockback_C
// (None)

class UClass* UGAB_HuskApplyKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskApplyKnockback_C");

	return Clss;
}


// GAB_HuskApplyKnockback_C GAB_HuskApplyKnockback.Default__GAB_HuskApplyKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskApplyKnockback_C* UGAB_HuskApplyKnockback_C::GetDefaultObj()
{
	static class UGAB_HuskApplyKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskApplyKnockback_C*>(UGAB_HuskApplyKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



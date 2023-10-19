#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerApplyKnockback.GAB_FlingerApplyKnockback_C
// (None)

class UClass* UGAB_FlingerApplyKnockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerApplyKnockback_C");

	return Clss;
}


// GAB_FlingerApplyKnockback_C GAB_FlingerApplyKnockback.Default__GAB_FlingerApplyKnockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerApplyKnockback_C* UGAB_FlingerApplyKnockback_C::GetDefaultObj()
{
	static class UGAB_FlingerApplyKnockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerApplyKnockback_C*>(UGAB_FlingerApplyKnockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



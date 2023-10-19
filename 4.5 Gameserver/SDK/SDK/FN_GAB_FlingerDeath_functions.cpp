#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerDeath.GAB_FlingerDeath_C
// (None)

class UClass* UGAB_FlingerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerDeath_C");

	return Clss;
}


// GAB_FlingerDeath_C GAB_FlingerDeath.Default__GAB_FlingerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerDeath_C* UGAB_FlingerDeath_C::GetDefaultObj()
{
	static class UGAB_FlingerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerDeath_C*>(UGAB_FlingerDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}



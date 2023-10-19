#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Generic_AdrenalineRushHeal.GCNS_Generic_AdrenalineRushHeal_C
// (None)

class UClass* UGCNS_Generic_AdrenalineRushHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Generic_AdrenalineRushHeal_C");

	return Clss;
}


// GCNS_Generic_AdrenalineRushHeal_C GCNS_Generic_AdrenalineRushHeal.Default__GCNS_Generic_AdrenalineRushHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Generic_AdrenalineRushHeal_C* UGCNS_Generic_AdrenalineRushHeal_C::GetDefaultObj()
{
	static class UGCNS_Generic_AdrenalineRushHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Generic_AdrenalineRushHeal_C*>(UGCNS_Generic_AdrenalineRushHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



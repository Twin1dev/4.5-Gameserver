#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerPortalVertical.GAB_TakerPortalVertical_C
// (None)

class UClass* UGAB_TakerPortalVertical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerPortalVertical_C");

	return Clss;
}


// GAB_TakerPortalVertical_C GAB_TakerPortalVertical.Default__GAB_TakerPortalVertical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerPortalVertical_C* UGAB_TakerPortalVertical_C::GetDefaultObj()
{
	static class UGAB_TakerPortalVertical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerPortalVertical_C*>(UGAB_TakerPortalVertical_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_TakerPortalHorizontal.GAB_TakerPortalHorizontal_C
// (None)

class UClass* UGAB_TakerPortalHorizontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_TakerPortalHorizontal_C");

	return Clss;
}


// GAB_TakerPortalHorizontal_C GAB_TakerPortalHorizontal.Default__GAB_TakerPortalHorizontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_TakerPortalHorizontal_C* UGAB_TakerPortalHorizontal_C::GetDefaultObj()
{
	static class UGAB_TakerPortalHorizontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_TakerPortalHorizontal_C*>(UGAB_TakerPortalHorizontal_C::StaticClass()->DefaultObject);

	return Default;
}

}



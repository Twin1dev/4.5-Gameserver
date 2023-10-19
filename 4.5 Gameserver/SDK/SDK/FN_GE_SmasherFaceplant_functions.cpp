#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherFaceplant.GE_SmasherFaceplant_C
// (None)

class UClass* UGE_SmasherFaceplant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherFaceplant_C");

	return Clss;
}


// GE_SmasherFaceplant_C GE_SmasherFaceplant.Default__GE_SmasherFaceplant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherFaceplant_C* UGE_SmasherFaceplant_C::GetDefaultObj()
{
	static class UGE_SmasherFaceplant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherFaceplant_C*>(UGE_SmasherFaceplant_C::StaticClass()->DefaultObject);

	return Default;
}

}



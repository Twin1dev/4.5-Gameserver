#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C
// (Actor)

class UClass* ATiered_BluGlo_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tiered_BluGlo_Parent_C");

	return Clss;
}


// Tiered_BluGlo_Parent_C Tiered_BluGlo_Parent.Default__Tiered_BluGlo_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATiered_BluGlo_Parent_C* ATiered_BluGlo_Parent_C::GetDefaultObj()
{
	static class ATiered_BluGlo_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATiered_BluGlo_Parent_C*>(ATiered_BluGlo_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}



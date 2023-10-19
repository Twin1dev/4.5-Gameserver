#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hex_TheForestWinter.BP_Hex_TheForestWinter_C
// (Actor)

class UClass* ABP_Hex_TheForestWinter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hex_TheForestWinter_C");

	return Clss;
}


// BP_Hex_TheForestWinter_C BP_Hex_TheForestWinter.Default__BP_Hex_TheForestWinter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hex_TheForestWinter_C* ABP_Hex_TheForestWinter_C::GetDefaultObj()
{
	static class ABP_Hex_TheForestWinter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hex_TheForestWinter_C*>(ABP_Hex_TheForestWinter_C::StaticClass()->DefaultObject);

	return Default;
}

}



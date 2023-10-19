#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hex_TheIndustrialPark.BP_Hex_TheIndustrialPark_C
// (Actor)

class UClass* ABP_Hex_TheIndustrialPark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hex_TheIndustrialPark_C");

	return Clss;
}


// BP_Hex_TheIndustrialPark_C BP_Hex_TheIndustrialPark.Default__BP_Hex_TheIndustrialPark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hex_TheIndustrialPark_C* ABP_Hex_TheIndustrialPark_C::GetDefaultObj()
{
	static class ABP_Hex_TheIndustrialPark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hex_TheIndustrialPark_C*>(ABP_Hex_TheIndustrialPark_C::StaticClass()->DefaultObject);

	return Default;
}

}



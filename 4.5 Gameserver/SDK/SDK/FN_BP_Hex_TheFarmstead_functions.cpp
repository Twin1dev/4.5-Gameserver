#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hex_TheFarmstead.BP_Hex_TheFarmstead_C
// (Actor)

class UClass* ABP_Hex_TheFarmstead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hex_TheFarmstead_C");

	return Clss;
}


// BP_Hex_TheFarmstead_C BP_Hex_TheFarmstead.Default__BP_Hex_TheFarmstead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hex_TheFarmstead_C* ABP_Hex_TheFarmstead_C::GetDefaultObj()
{
	static class ABP_Hex_TheFarmstead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hex_TheFarmstead_C*>(ABP_Hex_TheFarmstead_C::StaticClass()->DefaultObject);

	return Default;
}

}



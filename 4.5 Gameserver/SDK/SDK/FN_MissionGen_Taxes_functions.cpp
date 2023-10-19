#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Taxes.MissionGen_Taxes_C
// (None)

class UClass* UMissionGen_Taxes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Taxes_C");

	return Clss;
}


// MissionGen_Taxes_C MissionGen_Taxes.Default__MissionGen_Taxes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Taxes_C* UMissionGen_Taxes_C::GetDefaultObj()
{
	static class UMissionGen_Taxes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Taxes_C*>(UMissionGen_Taxes_C::StaticClass()->DefaultObject);

	return Default;
}

}



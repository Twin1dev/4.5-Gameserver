#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ninja_MantisLeap_Enable.GE_Ninja_MantisLeap_Enable_C
// (None)

class UClass* UGE_Ninja_MantisLeap_Enable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ninja_MantisLeap_Enable_C");

	return Clss;
}


// GE_Ninja_MantisLeap_Enable_C GE_Ninja_MantisLeap_Enable.Default__GE_Ninja_MantisLeap_Enable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ninja_MantisLeap_Enable_C* UGE_Ninja_MantisLeap_Enable_C::GetDefaultObj()
{
	static class UGE_Ninja_MantisLeap_Enable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ninja_MantisLeap_Enable_C*>(UGE_Ninja_MantisLeap_Enable_C::StaticClass()->DefaultObject);

	return Default;
}

}



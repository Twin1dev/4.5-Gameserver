#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jim_Sprint_BP.Jim_Sprint_BP_C
// (None)

class UClass* UJim_Sprint_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jim_Sprint_BP_C");

	return Clss;
}


// Jim_Sprint_BP_C Jim_Sprint_BP.Default__Jim_Sprint_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJim_Sprint_BP_C* UJim_Sprint_BP_C::GetDefaultObj()
{
	static class UJim_Sprint_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJim_Sprint_BP_C*>(UJim_Sprint_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}



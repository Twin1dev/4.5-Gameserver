#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jim_Land_CamShake.Jim_Land_CamShake_C
// (None)

class UClass* UJim_Land_CamShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jim_Land_CamShake_C");

	return Clss;
}


// Jim_Land_CamShake_C Jim_Land_CamShake.Default__Jim_Land_CamShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJim_Land_CamShake_C* UJim_Land_CamShake_C::GetDefaultObj()
{
	static class UJim_Land_CamShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJim_Land_CamShake_C*>(UJim_Land_CamShake_C::StaticClass()->DefaultObject);

	return Default;
}

}



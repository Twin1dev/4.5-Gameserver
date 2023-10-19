#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_RCRocket_CameraMode_Triggered.Athena_RCRocket_CameraMode_Triggered_C
// (None)

class UClass* UAthena_RCRocket_CameraMode_Triggered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_RCRocket_CameraMode_Triggered_C");

	return Clss;
}


// Athena_RCRocket_CameraMode_Triggered_C Athena_RCRocket_CameraMode_Triggered.Default__Athena_RCRocket_CameraMode_Triggered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_RCRocket_CameraMode_Triggered_C* UAthena_RCRocket_CameraMode_Triggered_C::GetDefaultObj()
{
	static class UAthena_RCRocket_CameraMode_Triggered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_RCRocket_CameraMode_Triggered_C*>(UAthena_RCRocket_CameraMode_Triggered_C::StaticClass()->DefaultObject);

	return Default;
}

}



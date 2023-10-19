#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingLauncherRCRocket.Athena_PlayerCameraModeTargetingLauncherRCRocket_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingLauncherRCRocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingLauncherRCRocket_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingLauncherRCRocket_C Athena_PlayerCameraModeTargetingLauncherRCRocket.Default__Athena_PlayerCameraModeTargetingLauncherRCRocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingLauncherRCRocket_C* UAthena_PlayerCameraModeTargetingLauncherRCRocket_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingLauncherRCRocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingLauncherRCRocket_C*>(UAthena_PlayerCameraModeTargetingLauncherRCRocket_C::StaticClass()->DefaultObject);

	return Default;
}

}



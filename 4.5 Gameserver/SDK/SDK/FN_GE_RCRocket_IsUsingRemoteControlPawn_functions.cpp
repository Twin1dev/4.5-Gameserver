#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RCRocket_IsUsingRemoteControlPawn.GE_RCRocket_IsUsingRemoteControlPawn_C
// (None)

class UClass* UGE_RCRocket_IsUsingRemoteControlPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RCRocket_IsUsingRemoteControlPawn_C");

	return Clss;
}


// GE_RCRocket_IsUsingRemoteControlPawn_C GE_RCRocket_IsUsingRemoteControlPawn.Default__GE_RCRocket_IsUsingRemoteControlPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RCRocket_IsUsingRemoteControlPawn_C* UGE_RCRocket_IsUsingRemoteControlPawn_C::GetDefaultObj()
{
	static class UGE_RCRocket_IsUsingRemoteControlPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RCRocket_IsUsingRemoteControlPawn_C*>(UGE_RCRocket_IsUsingRemoteControlPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}



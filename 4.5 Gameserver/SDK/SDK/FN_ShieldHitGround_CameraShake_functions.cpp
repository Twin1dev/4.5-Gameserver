#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldHitGround_CameraShake.ShieldHitGround_CameraShake_C
// (None)

class UClass* UShieldHitGround_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldHitGround_CameraShake_C");

	return Clss;
}


// ShieldHitGround_CameraShake_C ShieldHitGround_CameraShake.Default__ShieldHitGround_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldHitGround_CameraShake_C* UShieldHitGround_CameraShake_C::GetDefaultObj()
{
	static class UShieldHitGround_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldHitGround_CameraShake_C*>(UShieldHitGround_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AIBaseMeleeFrustration.GE_AIBaseMeleeFrustration_C
// (None)

class UClass* UGE_AIBaseMeleeFrustration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AIBaseMeleeFrustration_C");

	return Clss;
}


// GE_AIBaseMeleeFrustration_C GE_AIBaseMeleeFrustration.Default__GE_AIBaseMeleeFrustration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AIBaseMeleeFrustration_C* UGE_AIBaseMeleeFrustration_C::GetDefaultObj()
{
	static class UGE_AIBaseMeleeFrustration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AIBaseMeleeFrustration_C*>(UGE_AIBaseMeleeFrustration_C::StaticClass()->DefaultObject);

	return Default;
}

}



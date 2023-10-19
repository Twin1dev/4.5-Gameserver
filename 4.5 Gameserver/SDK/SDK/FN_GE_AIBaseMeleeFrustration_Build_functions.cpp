#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AIBaseMeleeFrustration_Build.GE_AIBaseMeleeFrustration_Build_C
// (None)

class UClass* UGE_AIBaseMeleeFrustration_Build_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AIBaseMeleeFrustration_Build_C");

	return Clss;
}


// GE_AIBaseMeleeFrustration_Build_C GE_AIBaseMeleeFrustration_Build.Default__GE_AIBaseMeleeFrustration_Build_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AIBaseMeleeFrustration_Build_C* UGE_AIBaseMeleeFrustration_Build_C::GetDefaultObj()
{
	static class UGE_AIBaseMeleeFrustration_Build_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AIBaseMeleeFrustration_Build_C*>(UGE_AIBaseMeleeFrustration_Build_C::StaticClass()->DefaultObject);

	return Default;
}

}



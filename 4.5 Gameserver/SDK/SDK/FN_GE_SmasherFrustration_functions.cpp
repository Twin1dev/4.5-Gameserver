#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherFrustration.GE_SmasherFrustration_C
// (None)

class UClass* UGE_SmasherFrustration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherFrustration_C");

	return Clss;
}


// GE_SmasherFrustration_C GE_SmasherFrustration.Default__GE_SmasherFrustration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherFrustration_C* UGE_SmasherFrustration_C::GetDefaultObj()
{
	static class UGE_SmasherFrustration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherFrustration_C*>(UGE_SmasherFrustration_C::StaticClass()->DefaultObject);

	return Default;
}

}



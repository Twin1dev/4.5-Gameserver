#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZT_Onboarding_Fort.BP_ZT_Onboarding_Fort_C
// (None)

class UClass* UBP_ZT_Onboarding_Fort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZT_Onboarding_Fort_C");

	return Clss;
}


// BP_ZT_Onboarding_Fort_C BP_ZT_Onboarding_Fort.Default__BP_ZT_Onboarding_Fort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ZT_Onboarding_Fort_C* UBP_ZT_Onboarding_Fort_C::GetDefaultObj()
{
	static class UBP_ZT_Onboarding_Fort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ZT_Onboarding_Fort_C*>(UBP_ZT_Onboarding_Fort_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZT_Survival.BP_ZT_Survival_C
// (None)

class UClass* UBP_ZT_Survival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZT_Survival_C");

	return Clss;
}


// BP_ZT_Survival_C BP_ZT_Survival.Default__BP_ZT_Survival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ZT_Survival_C* UBP_ZT_Survival_C::GetDefaultObj()
{
	static class UBP_ZT_Survival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ZT_Survival_C*>(UBP_ZT_Survival_C::StaticClass()->DefaultObject);

	return Default;
}

}



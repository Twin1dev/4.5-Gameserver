#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherReachedChargeSpeed.GE_SmasherReachedChargeSpeed_C
// (None)

class UClass* UGE_SmasherReachedChargeSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherReachedChargeSpeed_C");

	return Clss;
}


// GE_SmasherReachedChargeSpeed_C GE_SmasherReachedChargeSpeed.Default__GE_SmasherReachedChargeSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherReachedChargeSpeed_C* UGE_SmasherReachedChargeSpeed_C::GetDefaultObj()
{
	static class UGE_SmasherReachedChargeSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherReachedChargeSpeed_C*>(UGE_SmasherReachedChargeSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SupplyDrop_BaseMagnitude.GE_SupplyDrop_BaseMagnitude_C
// (None)

class UClass* UGE_SupplyDrop_BaseMagnitude_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SupplyDrop_BaseMagnitude_C");

	return Clss;
}


// GE_SupplyDrop_BaseMagnitude_C GE_SupplyDrop_BaseMagnitude.Default__GE_SupplyDrop_BaseMagnitude_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SupplyDrop_BaseMagnitude_C* UGE_SupplyDrop_BaseMagnitude_C::GetDefaultObj()
{
	static class UGE_SupplyDrop_BaseMagnitude_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SupplyDrop_BaseMagnitude_C*>(UGE_SupplyDrop_BaseMagnitude_C::StaticClass()->DefaultObject);

	return Default;
}

}



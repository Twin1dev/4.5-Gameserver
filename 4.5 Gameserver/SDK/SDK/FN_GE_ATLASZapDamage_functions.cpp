#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ATLASZapDamage.GE_ATLASZapDamage_C
// (None)

class UClass* UGE_ATLASZapDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ATLASZapDamage_C");

	return Clss;
}


// GE_ATLASZapDamage_C GE_ATLASZapDamage.Default__GE_ATLASZapDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ATLASZapDamage_C* UGE_ATLASZapDamage_C::GetDefaultObj()
{
	static class UGE_ATLASZapDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ATLASZapDamage_C*>(UGE_ATLASZapDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



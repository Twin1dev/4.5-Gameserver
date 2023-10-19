#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WearingShielderTag.GE_WearingShielderTag_C
// (None)

class UClass* UGE_WearingShielderTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WearingShielderTag_C");

	return Clss;
}


// GE_WearingShielderTag_C GE_WearingShielderTag.Default__GE_WearingShielderTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WearingShielderTag_C* UGE_WearingShielderTag_C::GetDefaultObj()
{
	static class UGE_WearingShielderTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WearingShielderTag_C*>(UGE_WearingShielderTag_C::StaticClass()->DefaultObject);

	return Default;
}

}



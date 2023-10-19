#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherMeleeFailure.GE_SmasherMeleeFailure_C
// (None)

class UClass* UGE_SmasherMeleeFailure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherMeleeFailure_C");

	return Clss;
}


// GE_SmasherMeleeFailure_C GE_SmasherMeleeFailure.Default__GE_SmasherMeleeFailure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherMeleeFailure_C* UGE_SmasherMeleeFailure_C::GetDefaultObj()
{
	static class UGE_SmasherMeleeFailure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherMeleeFailure_C*>(UGE_SmasherMeleeFailure_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmasherMeleeSuccess.GE_SmasherMeleeSuccess_C
// (None)

class UClass* UGE_SmasherMeleeSuccess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmasherMeleeSuccess_C");

	return Clss;
}


// GE_SmasherMeleeSuccess_C GE_SmasherMeleeSuccess.Default__GE_SmasherMeleeSuccess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmasherMeleeSuccess_C* UGE_SmasherMeleeSuccess_C::GetDefaultObj()
{
	static class UGE_SmasherMeleeSuccess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmasherMeleeSuccess_C*>(UGE_SmasherMeleeSuccess_C::StaticClass()->DefaultObject);

	return Default;
}

}



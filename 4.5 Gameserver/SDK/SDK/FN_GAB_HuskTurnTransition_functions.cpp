#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_HuskTurnTransition.GAB_HuskTurnTransition_C
// (None)

class UClass* UGAB_HuskTurnTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_HuskTurnTransition_C");

	return Clss;
}


// GAB_HuskTurnTransition_C GAB_HuskTurnTransition.Default__GAB_HuskTurnTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_HuskTurnTransition_C* UGAB_HuskTurnTransition_C::GetDefaultObj()
{
	static class UGAB_HuskTurnTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_HuskTurnTransition_C*>(UGAB_HuskTurnTransition_C::StaticClass()->DefaultObject);

	return Default;
}

}



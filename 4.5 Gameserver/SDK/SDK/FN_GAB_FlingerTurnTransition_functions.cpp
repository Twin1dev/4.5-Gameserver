#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerTurnTransition.GAB_FlingerTurnTransition_C
// (None)

class UClass* UGAB_FlingerTurnTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerTurnTransition_C");

	return Clss;
}


// GAB_FlingerTurnTransition_C GAB_FlingerTurnTransition.Default__GAB_FlingerTurnTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerTurnTransition_C* UGAB_FlingerTurnTransition_C::GetDefaultObj()
{
	static class UGAB_FlingerTurnTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerTurnTransition_C*>(UGAB_FlingerTurnTransition_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerWallMelee.GAB_FlingerWallMelee_C
// (None)

class UClass* UGAB_FlingerWallMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerWallMelee_C");

	return Clss;
}


// GAB_FlingerWallMelee_C GAB_FlingerWallMelee.Default__GAB_FlingerWallMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerWallMelee_C* UGAB_FlingerWallMelee_C::GetDefaultObj()
{
	static class UGAB_FlingerWallMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerWallMelee_C*>(UGAB_FlingerWallMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}



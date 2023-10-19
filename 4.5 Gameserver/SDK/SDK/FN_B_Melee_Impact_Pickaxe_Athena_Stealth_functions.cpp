#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Stealth.B_Melee_Impact_Pickaxe_Athena_Stealth_C
// (Actor)

class UClass* AB_Melee_Impact_Pickaxe_Athena_Stealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_Stealth_C");

	return Clss;
}


// B_Melee_Impact_Pickaxe_Athena_Stealth_C B_Melee_Impact_Pickaxe_Athena_Stealth.Default__B_Melee_Impact_Pickaxe_Athena_Stealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Melee_Impact_Pickaxe_Athena_Stealth_C* AB_Melee_Impact_Pickaxe_Athena_Stealth_C::GetDefaultObj()
{
	static class AB_Melee_Impact_Pickaxe_Athena_Stealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Melee_Impact_Pickaxe_Athena_Stealth_C*>(AB_Melee_Impact_Pickaxe_Athena_Stealth_C::StaticClass()->DefaultObject);

	return Default;
}

}



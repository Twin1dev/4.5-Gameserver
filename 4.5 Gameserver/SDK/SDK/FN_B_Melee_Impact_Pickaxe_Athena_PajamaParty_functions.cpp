#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_PajamaParty.B_Melee_Impact_Pickaxe_Athena_PajamaParty_C
// (Actor)

class UClass* AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_PajamaParty_C");

	return Clss;
}


// B_Melee_Impact_Pickaxe_Athena_PajamaParty_C B_Melee_Impact_Pickaxe_Athena_PajamaParty.Default__B_Melee_Impact_Pickaxe_Athena_PajamaParty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C* AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C::GetDefaultObj()
{
	static class AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C*>(AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C::StaticClass()->DefaultObject);

	return Default;
}

}



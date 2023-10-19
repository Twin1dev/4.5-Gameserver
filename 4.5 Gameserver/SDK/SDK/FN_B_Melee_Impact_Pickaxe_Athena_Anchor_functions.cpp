#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Anchor.B_Melee_Impact_Pickaxe_Athena_Anchor_C
// (Actor)

class UClass* AB_Melee_Impact_Pickaxe_Athena_Anchor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_Anchor_C");

	return Clss;
}


// B_Melee_Impact_Pickaxe_Athena_Anchor_C B_Melee_Impact_Pickaxe_Athena_Anchor.Default__B_Melee_Impact_Pickaxe_Athena_Anchor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Melee_Impact_Pickaxe_Athena_Anchor_C* AB_Melee_Impact_Pickaxe_Athena_Anchor_C::GetDefaultObj()
{
	static class AB_Melee_Impact_Pickaxe_Athena_Anchor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Melee_Impact_Pickaxe_Athena_Anchor_C*>(AB_Melee_Impact_Pickaxe_Athena_Anchor_C::StaticClass()->DefaultObject);

	return Default;
}

}



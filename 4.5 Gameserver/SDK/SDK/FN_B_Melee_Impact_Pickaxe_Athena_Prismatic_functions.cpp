#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Prismatic.B_Melee_Impact_Pickaxe_Athena_Prismatic_C
// (Actor)

class UClass* AB_Melee_Impact_Pickaxe_Athena_Prismatic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_Prismatic_C");

	return Clss;
}


// B_Melee_Impact_Pickaxe_Athena_Prismatic_C B_Melee_Impact_Pickaxe_Athena_Prismatic.Default__B_Melee_Impact_Pickaxe_Athena_Prismatic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Melee_Impact_Pickaxe_Athena_Prismatic_C* AB_Melee_Impact_Pickaxe_Athena_Prismatic_C::GetDefaultObj()
{
	static class AB_Melee_Impact_Pickaxe_Athena_Prismatic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Melee_Impact_Pickaxe_Athena_Prismatic_C*>(AB_Melee_Impact_Pickaxe_Athena_Prismatic_C::StaticClass()->DefaultObject);

	return Default;
}

}



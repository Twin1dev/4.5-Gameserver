#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Crossbow_Athena.B_Crossbow_Athena_C
// (Actor)

class UClass* AB_Crossbow_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Crossbow_Athena_C");

	return Clss;
}


// B_Crossbow_Athena_C B_Crossbow_Athena.Default__B_Crossbow_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Crossbow_Athena_C* AB_Crossbow_Athena_C::GetDefaultObj()
{
	static class AB_Crossbow_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Crossbow_Athena_C*>(AB_Crossbow_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}



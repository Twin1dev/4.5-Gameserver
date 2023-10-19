#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionBotPawn.MissionBotPawn_C
// (Actor, Pawn)

class UClass* AMissionBotPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionBotPawn_C");

	return Clss;
}


// MissionBotPawn_C MissionBotPawn.Default__MissionBotPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMissionBotPawn_C* AMissionBotPawn_C::GetDefaultObj()
{
	static class AMissionBotPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMissionBotPawn_C*>(AMissionBotPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}



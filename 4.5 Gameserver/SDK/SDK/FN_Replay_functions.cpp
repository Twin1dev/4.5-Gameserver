#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Replay.Replay_C
// (None)

class UClass* UReplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Replay_C");

	return Clss;
}


// Replay_C Replay.Default__Replay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReplay_C* UReplay_C::GetDefaultObj()
{
	static class UReplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplay_C*>(UReplay_C::StaticClass()->DefaultObject);

	return Default;
}

}



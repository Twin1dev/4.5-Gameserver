#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TakerSoulSuckRelease.GE_TakerSoulSuckRelease_C
// (None)

class UClass* UGE_TakerSoulSuckRelease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TakerSoulSuckRelease_C");

	return Clss;
}


// GE_TakerSoulSuckRelease_C GE_TakerSoulSuckRelease.Default__GE_TakerSoulSuckRelease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TakerSoulSuckRelease_C* UGE_TakerSoulSuckRelease_C::GetDefaultObj()
{
	static class UGE_TakerSoulSuckRelease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TakerSoulSuckRelease_C*>(UGE_TakerSoulSuckRelease_C::StaticClass()->DefaultObject);

	return Default;
}

}



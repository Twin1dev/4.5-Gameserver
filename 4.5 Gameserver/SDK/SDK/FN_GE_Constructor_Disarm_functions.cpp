#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Constructor_Disarm.GE_Constructor_Disarm_C
// (None)

class UClass* UGE_Constructor_Disarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Constructor_Disarm_C");

	return Clss;
}


// GE_Constructor_Disarm_C GE_Constructor_Disarm.Default__GE_Constructor_Disarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Constructor_Disarm_C* UGE_Constructor_Disarm_C::GetDefaultObj()
{
	static class UGE_Constructor_Disarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Constructor_Disarm_C*>(UGE_Constructor_Disarm_C::StaticClass()->DefaultObject);

	return Default;
}

}



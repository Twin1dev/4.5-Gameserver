#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Sleeping.GE_Sleeping_C
// (None)

class UClass* UGE_Sleeping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Sleeping_C");

	return Clss;
}


// GE_Sleeping_C GE_Sleeping.Default__GE_Sleeping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Sleeping_C* UGE_Sleeping_C::GetDefaultObj()
{
	static class UGE_Sleeping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Sleeping_C*>(UGE_Sleeping_C::StaticClass()->DefaultObject);

	return Default;
}

}



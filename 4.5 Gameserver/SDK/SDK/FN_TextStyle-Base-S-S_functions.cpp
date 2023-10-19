#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-S.TextStyle-Base-S-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-S_C");

	return Clss;
}


// TextStyle-Base-S-S_C TextStyle-Base-S-S.Default__TextStyle-Base-S-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusS_C* UTextStyleMinusBaseMinusSMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusS_C*>(UTextStyleMinusBaseMinusSMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}



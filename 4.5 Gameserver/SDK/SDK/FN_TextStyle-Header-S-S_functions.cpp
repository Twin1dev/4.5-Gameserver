#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-S.TextStyle-Header-S-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-S_C");

	return Clss;
}


// TextStyle-Header-S-S_C TextStyle-Header-S-S.Default__TextStyle-Header-S-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinusS_C* UTextStyleMinusHeaderMinusSMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinusS_C*>(UTextStyleMinusHeaderMinusSMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}



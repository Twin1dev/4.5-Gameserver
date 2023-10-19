#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-NavyBlue.TextStyle-Base-S-B-NavyBlue_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-NavyBlue_C");

	return Clss;
}


// TextStyle-Base-S-B-NavyBlue_C TextStyle-Base-S-B-NavyBlue.Default__TextStyle-Base-S-B-NavyBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C* UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C*>(UTextStyleMinusBaseMinusSMinusBMinusNavyBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}



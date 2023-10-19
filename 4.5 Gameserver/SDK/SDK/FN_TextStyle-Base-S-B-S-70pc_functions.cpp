#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-S-70pc.TextStyle-Base-S-B-S-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-S-70pc_C");

	return Clss;
}


// TextStyle-Base-S-B-S-70pc_C TextStyle-Base-S-B-S-70pc.Default__TextStyle-Base-S-B-S-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C* UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C*>(UTextStyleMinusBaseMinusSMinusBMinusSMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



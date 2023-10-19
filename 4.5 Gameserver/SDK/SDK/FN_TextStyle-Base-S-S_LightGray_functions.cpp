#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-S_LightGray.TextStyle-Base-S-S_LightGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusS_LightGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-S_LightGray_C");

	return Clss;
}


// TextStyle-Base-S-S_LightGray_C TextStyle-Base-S-S_LightGray.Default__TextStyle-Base-S-S_LightGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusS_LightGray_C* UTextStyleMinusBaseMinusSMinusS_LightGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusS_LightGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusS_LightGray_C*>(UTextStyleMinusBaseMinusSMinusS_LightGray_C::StaticClass()->DefaultObject);

	return Default;
}

}



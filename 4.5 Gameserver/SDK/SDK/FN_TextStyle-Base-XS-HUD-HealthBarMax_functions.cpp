#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-HUD-HealthBarMax.TextStyle-Base-XS-HUD-HealthBarMax_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-HUD-HealthBarMax_C");

	return Clss;
}


// TextStyle-Base-XS-HUD-HealthBarMax_C TextStyle-Base-XS-HUD-HealthBarMax.Default__TextStyle-Base-XS-HUD-HealthBarMax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C* UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C*>(UTextStyleMinusBaseMinusXSMinusHUDMinusHealthBarMax_C::StaticClass()->DefaultObject);

	return Default;
}

}



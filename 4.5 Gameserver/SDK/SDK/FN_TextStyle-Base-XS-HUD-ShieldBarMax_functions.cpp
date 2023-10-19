#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-HUD-ShieldBarMax.TextStyle-Base-XS-HUD-ShieldBarMax_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-HUD-ShieldBarMax_C");

	return Clss;
}


// TextStyle-Base-XS-HUD-ShieldBarMax_C TextStyle-Base-XS-HUD-ShieldBarMax.Default__TextStyle-Base-XS-HUD-ShieldBarMax_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C* UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C*>(UTextStyleMinusBaseMinusXSMinusHUDMinusShieldBarMax_C::StaticClass()->DefaultObject);

	return Default;
}

}



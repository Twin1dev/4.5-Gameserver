#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Power-L.TextStyle-Power-L_C
// (None)

class UClass* UTextStyleMinusPowerMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Power-L_C");

	return Clss;
}


// TextStyle-Power-L_C TextStyle-Power-L.Default__TextStyle-Power-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusPowerMinusL_C* UTextStyleMinusPowerMinusL_C::GetDefaultObj()
{
	static class UTextStyleMinusPowerMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusPowerMinusL_C*>(UTextStyleMinusPowerMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}



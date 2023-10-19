#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Power-L-S.TextStyle-Power-L-S_C
// (None)

class UClass* UTextStyleMinusPowerMinusLMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Power-L-S_C");

	return Clss;
}


// TextStyle-Power-L-S_C TextStyle-Power-L-S.Default__TextStyle-Power-L-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusPowerMinusLMinusS_C* UTextStyleMinusPowerMinusLMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusPowerMinusLMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusPowerMinusLMinusS_C*>(UTextStyleMinusPowerMinusLMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}



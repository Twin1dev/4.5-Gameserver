#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-B-CreamCan.TextStyle-Base-L-B-CreamCan_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-B-CreamCan_C");

	return Clss;
}


// TextStyle-Base-L-B-CreamCan_C TextStyle-Base-L-B-CreamCan.Default__TextStyle-Base-L-B-CreamCan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C* UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C*>(UTextStyleMinusBaseMinusLMinusBMinusCreamCan_C::StaticClass()->DefaultObject);

	return Default;
}

}



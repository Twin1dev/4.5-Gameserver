#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-B-S.TextStyle-Base-L-B-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusBMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-B-S_C");

	return Clss;
}


// TextStyle-Base-L-B-S_C TextStyle-Base-L-B-S.Default__TextStyle-Base-L-B-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusBMinusS_C* UTextStyleMinusBaseMinusLMinusBMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusBMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusBMinusS_C*>(UTextStyleMinusBaseMinusLMinusBMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}



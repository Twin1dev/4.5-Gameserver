#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-B-Black.TextStyle-Base-L-B-Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusBMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-B-Black_C");

	return Clss;
}


// TextStyle-Base-L-B-Black_C TextStyle-Base-L-B-Black.Default__TextStyle-Base-L-B-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusBMinusBlack_C* UTextStyleMinusBaseMinusLMinusBMinusBlack_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusBMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusBMinusBlack_C*>(UTextStyleMinusBaseMinusLMinusBMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}



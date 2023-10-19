#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-NavyBlueFade.TextStyle-Base-XS-B-NavyBlueFade_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-NavyBlueFade_C");

	return Clss;
}


// TextStyle-Base-XS-B-NavyBlueFade_C TextStyle-Base-XS-B-NavyBlueFade.Default__TextStyle-Base-XS-B-NavyBlueFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C* UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C*>(UTextStyleMinusBaseMinusXSMinusBMinusNavyBlueFade_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-Blue-60pc.TextStyle-Base-XS-B-Blue-60pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-Blue-60pc_C");

	return Clss;
}


// TextStyle-Base-XS-B-Blue-60pc_C TextStyle-Base-XS-B-Blue-60pc.Default__TextStyle-Base-XS-B-Blue-60pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C* UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C*>(UTextStyleMinusBaseMinusXSMinusBMinusBlueMinus60pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



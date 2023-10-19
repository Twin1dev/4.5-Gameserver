#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-CompareHeader.Border-CompareHeader_C
// (None)

class UClass* UBorderMinusCompareHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-CompareHeader_C");

	return Clss;
}


// Border-CompareHeader_C Border-CompareHeader.Default__Border-CompareHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusCompareHeader_C* UBorderMinusCompareHeader_C::GetDefaultObj()
{
	static class UBorderMinusCompareHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusCompareHeader_C*>(UBorderMinusCompareHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}



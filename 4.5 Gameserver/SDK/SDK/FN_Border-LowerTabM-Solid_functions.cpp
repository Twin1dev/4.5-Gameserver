#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-LowerTabM-Solid.Border-LowerTabM-Solid_C
// (None)

class UClass* UBorderMinusLowerTabMMinusSolid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-LowerTabM-Solid_C");

	return Clss;
}


// Border-LowerTabM-Solid_C Border-LowerTabM-Solid.Default__Border-LowerTabM-Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusLowerTabMMinusSolid_C* UBorderMinusLowerTabMMinusSolid_C::GetDefaultObj()
{
	static class UBorderMinusLowerTabMMinusSolid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusLowerTabMMinusSolid_C*>(UBorderMinusLowerTabMMinusSolid_C::StaticClass()->DefaultObject);

	return Default;
}

}



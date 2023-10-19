#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-85pc.Border-TabM-Solid-85pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinus85pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-85pc_C");

	return Clss;
}


// Border-TabM-Solid-85pc_C Border-TabM-Solid-85pc.Default__Border-TabM-Solid-85pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinus85pc_C* UBorderMinusTabMMinusSolidMinus85pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinus85pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinus85pc_C*>(UBorderMinusTabMMinusSolidMinus85pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



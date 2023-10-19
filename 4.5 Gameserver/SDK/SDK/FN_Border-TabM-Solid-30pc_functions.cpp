#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-30pc.Border-TabM-Solid-30pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinus30pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-30pc_C");

	return Clss;
}


// Border-TabM-Solid-30pc_C Border-TabM-Solid-30pc.Default__Border-TabM-Solid-30pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinus30pc_C* UBorderMinusTabMMinusSolidMinus30pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinus30pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinus30pc_C*>(UBorderMinusTabMMinusSolidMinus30pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



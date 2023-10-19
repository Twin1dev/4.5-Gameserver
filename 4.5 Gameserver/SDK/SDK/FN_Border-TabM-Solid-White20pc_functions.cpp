#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-White20pc.Border-TabM-Solid-White20pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinusWhite20pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-White20pc_C");

	return Clss;
}


// Border-TabM-Solid-White20pc_C Border-TabM-Solid-White20pc.Default__Border-TabM-Solid-White20pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinusWhite20pc_C* UBorderMinusTabMMinusSolidMinusWhite20pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinusWhite20pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinusWhite20pc_C*>(UBorderMinusTabMMinusSolidMinusWhite20pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



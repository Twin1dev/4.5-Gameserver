#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_HordeZoneLabel_Blue.Border_HordeZoneLabel_Blue_C
// (None)

class UClass* UBorder_HordeZoneLabel_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_HordeZoneLabel_Blue_C");

	return Clss;
}


// Border_HordeZoneLabel_Blue_C Border_HordeZoneLabel_Blue.Default__Border_HordeZoneLabel_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_HordeZoneLabel_Blue_C* UBorder_HordeZoneLabel_Blue_C::GetDefaultObj()
{
	static class UBorder_HordeZoneLabel_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_HordeZoneLabel_Blue_C*>(UBorder_HordeZoneLabel_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}



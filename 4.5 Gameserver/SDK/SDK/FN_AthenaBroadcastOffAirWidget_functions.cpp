#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBroadcastOffAirWidget.AthenaBroadcastOffAirWidget_C
// (None)

class UClass* UAthenaBroadcastOffAirWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBroadcastOffAirWidget_C");

	return Clss;
}


// AthenaBroadcastOffAirWidget_C AthenaBroadcastOffAirWidget.Default__AthenaBroadcastOffAirWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBroadcastOffAirWidget_C* UAthenaBroadcastOffAirWidget_C::GetDefaultObj()
{
	static class UAthenaBroadcastOffAirWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBroadcastOffAirWidget_C*>(UAthenaBroadcastOffAirWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}



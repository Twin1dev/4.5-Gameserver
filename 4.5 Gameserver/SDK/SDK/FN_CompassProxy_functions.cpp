#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CompassProxy.CompassProxy_C
// (None)

class UClass* UCompassProxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompassProxy_C");

	return Clss;
}


// CompassProxy_C CompassProxy.Default__CompassProxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompassProxy_C* UCompassProxy_C::GetDefaultObj()
{
	static class UCompassProxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompassProxy_C*>(UCompassProxy_C::StaticClass()->DefaultObject);

	return Default;
}

}



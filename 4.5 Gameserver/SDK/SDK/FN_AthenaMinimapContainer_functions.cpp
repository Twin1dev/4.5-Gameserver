#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMinimapContainer.AthenaMinimapContainer_C
// (None)

class UClass* UAthenaMinimapContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMinimapContainer_C");

	return Clss;
}


// AthenaMinimapContainer_C AthenaMinimapContainer.Default__AthenaMinimapContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMinimapContainer_C* UAthenaMinimapContainer_C::GetDefaultObj()
{
	static class UAthenaMinimapContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMinimapContainer_C*>(UAthenaMinimapContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}



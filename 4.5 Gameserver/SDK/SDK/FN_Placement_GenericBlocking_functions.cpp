#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Placement_GenericBlocking.Placement_GenericBlocking_C
// (None)

class UClass* UPlacement_GenericBlocking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Placement_GenericBlocking_C");

	return Clss;
}


// Placement_GenericBlocking_C Placement_GenericBlocking.Default__Placement_GenericBlocking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlacement_GenericBlocking_C* UPlacement_GenericBlocking_C::GetDefaultObj()
{
	static class UPlacement_GenericBlocking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlacement_GenericBlocking_C*>(UPlacement_GenericBlocking_C::StaticClass()->DefaultObject);

	return Default;
}

}



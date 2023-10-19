#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinnerOverlay.WinnerOverlay_C
// (None)

class UClass* UWinnerOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinnerOverlay_C");

	return Clss;
}


// WinnerOverlay_C WinnerOverlay.Default__WinnerOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinnerOverlay_C* UWinnerOverlay_C::GetDefaultObj()
{
	static class UWinnerOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinnerOverlay_C*>(UWinnerOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}



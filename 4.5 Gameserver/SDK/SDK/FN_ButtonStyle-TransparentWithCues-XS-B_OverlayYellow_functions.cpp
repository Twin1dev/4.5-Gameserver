#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TransparentWithCues-XS-B_OverlayYellow.ButtonStyle-TransparentWithCues-XS-B_OverlayYellow_C
// (None)

class UClass* UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TransparentWithCues-XS-B_OverlayYellow_C");

	return Clss;
}


// ButtonStyle-TransparentWithCues-XS-B_OverlayYellow_C ButtonStyle-TransparentWithCues-XS-B_OverlayYellow.Default__ButtonStyle-TransparentWithCues-XS-B_OverlayYellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C* UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C::GetDefaultObj()
{
	static class UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C*>(UButtonStyleMinusTransparentWithCuesMinusXSMinusB_OverlayYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}



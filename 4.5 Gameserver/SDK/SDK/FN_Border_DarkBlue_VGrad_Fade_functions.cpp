#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_DarkBlue_VGrad_Fade.Border_DarkBlue_VGrad_Fade_C
// (None)

class UClass* UBorder_DarkBlue_VGrad_Fade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_DarkBlue_VGrad_Fade_C");

	return Clss;
}


// Border_DarkBlue_VGrad_Fade_C Border_DarkBlue_VGrad_Fade.Default__Border_DarkBlue_VGrad_Fade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_DarkBlue_VGrad_Fade_C* UBorder_DarkBlue_VGrad_Fade_C::GetDefaultObj()
{
	static class UBorder_DarkBlue_VGrad_Fade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_DarkBlue_VGrad_Fade_C*>(UBorder_DarkBlue_VGrad_Fade_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Bottom-Box-Rounded.Border-Bottom-Box-Rounded_C
// (None)

class UClass* UBorderMinusBottomMinusBoxMinusRounded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Bottom-Box-Rounded_C");

	return Clss;
}


// Border-Bottom-Box-Rounded_C Border-Bottom-Box-Rounded.Default__Border-Bottom-Box-Rounded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusBottomMinusBoxMinusRounded_C* UBorderMinusBottomMinusBoxMinusRounded_C::GetDefaultObj()
{
	static class UBorderMinusBottomMinusBoxMinusRounded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusBottomMinusBoxMinusRounded_C*>(UBorderMinusBottomMinusBoxMinusRounded_C::StaticClass()->DefaultObject);

	return Default;
}

}



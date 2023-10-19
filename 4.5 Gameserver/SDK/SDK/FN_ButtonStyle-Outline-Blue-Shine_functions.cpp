#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Blue-Shine.ButtonStyle-Outline-Blue-Shine_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusBlueMinusShine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Blue-Shine_C");

	return Clss;
}


// ButtonStyle-Outline-Blue-Shine_C ButtonStyle-Outline-Blue-Shine.Default__ButtonStyle-Outline-Blue-Shine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusBlueMinusShine_C* UButtonStyleMinusOutlineMinusBlueMinusShine_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusBlueMinusShine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusBlueMinusShine_C*>(UButtonStyleMinusOutlineMinusBlueMinusShine_C::StaticClass()->DefaultObject);

	return Default;
}

}



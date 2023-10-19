#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_DropShadow.Border_DropShadow_C
// (None)

class UClass* UBorder_DropShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_DropShadow_C");

	return Clss;
}


// Border_DropShadow_C Border_DropShadow.Default__Border_DropShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_DropShadow_C* UBorder_DropShadow_C::GetDefaultObj()
{
	static class UBorder_DropShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_DropShadow_C*>(UBorder_DropShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}



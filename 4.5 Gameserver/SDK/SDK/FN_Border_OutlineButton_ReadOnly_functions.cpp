#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_OutlineButton_ReadOnly.Border_OutlineButton_ReadOnly_C
// (None)

class UClass* UBorder_OutlineButton_ReadOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_OutlineButton_ReadOnly_C");

	return Clss;
}


// Border_OutlineButton_ReadOnly_C Border_OutlineButton_ReadOnly.Default__Border_OutlineButton_ReadOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_OutlineButton_ReadOnly_C* UBorder_OutlineButton_ReadOnly_C::GetDefaultObj()
{
	static class UBorder_OutlineButton_ReadOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_OutlineButton_ReadOnly_C*>(UBorder_OutlineButton_ReadOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemTransformSlotItemPicker.ItemTransformSlotItemPicker_C
// (None)

class UClass* UItemTransformSlotItemPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemTransformSlotItemPicker_C");

	return Clss;
}


// ItemTransformSlotItemPicker_C ItemTransformSlotItemPicker.Default__ItemTransformSlotItemPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemTransformSlotItemPicker_C* UItemTransformSlotItemPicker_C::GetDefaultObj()
{
	static class UItemTransformSlotItemPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemTransformSlotItemPicker_C*>(UItemTransformSlotItemPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}



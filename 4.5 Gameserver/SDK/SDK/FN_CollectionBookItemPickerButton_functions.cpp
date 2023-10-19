#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookItemPickerButton.CollectionBookItemPickerButton_C
// (None)

class UClass* UCollectionBookItemPickerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookItemPickerButton_C");

	return Clss;
}


// CollectionBookItemPickerButton_C CollectionBookItemPickerButton.Default__CollectionBookItemPickerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookItemPickerButton_C* UCollectionBookItemPickerButton_C::GetDefaultObj()
{
	static class UCollectionBookItemPickerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookItemPickerButton_C*>(UCollectionBookItemPickerButton_C::StaticClass()->DefaultObject);

	return Default;
}

}



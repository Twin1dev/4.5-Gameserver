#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookRecycleSlotResultsWidget.CollectionBookRecycleSlotResultsWidget_C
// (None)

class UClass* UCollectionBookRecycleSlotResultsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookRecycleSlotResultsWidget_C");

	return Clss;
}


// CollectionBookRecycleSlotResultsWidget_C CollectionBookRecycleSlotResultsWidget.Default__CollectionBookRecycleSlotResultsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookRecycleSlotResultsWidget_C* UCollectionBookRecycleSlotResultsWidget_C::GetDefaultObj()
{
	static class UCollectionBookRecycleSlotResultsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookRecycleSlotResultsWidget_C*>(UCollectionBookRecycleSlotResultsWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}



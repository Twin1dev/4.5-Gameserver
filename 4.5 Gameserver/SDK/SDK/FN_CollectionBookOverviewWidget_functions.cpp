#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookOverviewWidget.CollectionBookOverviewWidget_C
// (None)

class UClass* UCollectionBookOverviewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookOverviewWidget_C");

	return Clss;
}


// CollectionBookOverviewWidget_C CollectionBookOverviewWidget.Default__CollectionBookOverviewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookOverviewWidget_C* UCollectionBookOverviewWidget_C::GetDefaultObj()
{
	static class UCollectionBookOverviewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookOverviewWidget_C*>(UCollectionBookOverviewWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}



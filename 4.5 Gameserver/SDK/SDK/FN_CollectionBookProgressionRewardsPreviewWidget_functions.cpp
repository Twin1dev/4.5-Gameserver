#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookProgressionRewardsPreviewWidget.CollectionBookProgressionRewardsPreviewWidget_C
// (None)

class UClass* UCollectionBookProgressionRewardsPreviewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookProgressionRewardsPreviewWidget_C");

	return Clss;
}


// CollectionBookProgressionRewardsPreviewWidget_C CollectionBookProgressionRewardsPreviewWidget.Default__CollectionBookProgressionRewardsPreviewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookProgressionRewardsPreviewWidget_C* UCollectionBookProgressionRewardsPreviewWidget_C::GetDefaultObj()
{
	static class UCollectionBookProgressionRewardsPreviewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookProgressionRewardsPreviewWidget_C*>(UCollectionBookProgressionRewardsPreviewWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}



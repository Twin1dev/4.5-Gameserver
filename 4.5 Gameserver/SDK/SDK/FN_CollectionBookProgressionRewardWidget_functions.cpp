#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookProgressionRewardWidget.CollectionBookProgressionRewardWidget_C
// (None)

class UClass* UCollectionBookProgressionRewardWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookProgressionRewardWidget_C");

	return Clss;
}


// CollectionBookProgressionRewardWidget_C CollectionBookProgressionRewardWidget.Default__CollectionBookProgressionRewardWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookProgressionRewardWidget_C* UCollectionBookProgressionRewardWidget_C::GetDefaultObj()
{
	static class UCollectionBookProgressionRewardWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookProgressionRewardWidget_C*>(UCollectionBookProgressionRewardWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


